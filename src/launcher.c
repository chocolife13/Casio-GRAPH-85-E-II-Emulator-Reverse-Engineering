/*
 * graph85 - Linux launcher for the CASIO GRAPH 85 emulator
 *
 * The original GRAPH85emulator.exe is a 32-bit Windows/MFC application.
 * This launcher locates Wine and the emulator binary, prepares a private
 * Wine prefix on first run, then executes the emulator.
 *
 * The launcher itself is released under the MIT licence (see LICENSE).
 * GRAPH85emulator.exe remains the property of CASIO COMPUTER CO., LTD.
 */

#define _GNU_SOURCE

#include <errno.h>
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>

#define APP_NAME "GRAPH85"
#define EXE_NAME "GRAPH85emulator.exe"
#define VERSION "1.0"

static const char *progname = "graph85";

static void usage(FILE *out)
{
    fprintf(out,
            "Usage: %s [OPTIONS] [-- EMULATOR_ARGS...]\n"
            "\n"
            "Lance l'emulateur CASIO GRAPH 85 (GRAPH85emulator.exe) via Wine.\n"
            "\n"
            "Options:\n"
            "  --exe PATH       Chemin de GRAPH85emulator.exe\n"
            "  --prefix PATH    Repertoire du prefixe Wine\n"
            "  --wine PATH      Executable Wine a utiliser\n"
            "  --keep-prefix    Ne pas creer le prefixe s'il est absent\n"
            "  --print-config   Afficher la configuration detectee et quitter\n"
            "  -h, --help       Afficher cette aide\n"
            "  -V, --version    Afficher la version\n"
            "\n"
            "Variables d'environnement:\n"
            "  GRAPH85_EXE      Chemin de l'emulateur\n"
            "  GRAPH85_PREFIX   Prefixe Wine (defaut: ~/.local/share/graph85/wineprefix)\n"
            "  GRAPH85_WINE     Executable Wine\n"
            "  GRAPH85_KEEP_PREFIX=1  Ne pas creer automatiquement le prefixe\n",
            progname);
}

static void die(const char *fmt, const char *arg)
{
    fprintf(stderr, "%s: ", progname);
    fprintf(stderr, fmt, arg);
    fputc('\n', stderr);
    exit(1);
}

static char *xstrdup(const char *s)
{
    char *p = strdup(s);
    if (!p)
        die("%s", "memoire insuffisante");
    return p;
}

/* Return the directory containing the running executable, or NULL. */
static char *self_dir(void)
{
    char buf[PATH_MAX];
    ssize_t n = readlink("/proc/self/exe", buf, sizeof(buf) - 1);
    char *slash;

    if (n < 0)
        return NULL;
    buf[n] = '\0';
    slash = strrchr(buf, '/');
    if (!slash)
        return NULL;
    *slash = '\0';
    return xstrdup(buf);
}

static int is_regular_file(const char *path)
{
    struct stat st;
    return path && stat(path, &st) == 0 && S_ISREG(st.st_mode);
}

static char *join_path(const char *a, const char *b)
{
    size_t la = strlen(a), lb = strlen(b);
    int need_slash = la > 0 && a[la - 1] != '/';
    char *p = malloc(la + lb + 2);

    if (!p)
        die("%s", "memoire insuffisante");
    memcpy(p, a, la);
    if (need_slash)
        p[la++] = '/';
    memcpy(p + la, b, lb + 1);
    return p;
}

/* Search PATH for a program. Returns malloc'd path or NULL. */
static char *find_in_path(const char *name)
{
    const char *env = getenv("PATH");
    char *copy, *tok, *save = NULL, *result = NULL;

    if (strchr(name, '/'))
        return is_regular_file(name) && access(name, X_OK) == 0
                   ? xstrdup(name)
                   : NULL;
    if (!env || !*env)
        env = "/usr/local/bin:/usr/bin:/bin";
    copy = xstrdup(env);
    for (tok = strtok_r(copy, ":", &save); tok; tok = strtok_r(NULL, ":", &save)) {
        char *candidate = join_path(*tok ? tok : ".", name);
        if (access(candidate, X_OK) == 0) {
            result = candidate;
            break;
        }
        free(candidate);
    }
    free(copy);
    return result;
}

static char *default_prefix(void)
{
    const char *xdg = getenv("XDG_DATA_HOME");
    const char *home = getenv("HOME");
    char *base;

    if (xdg && *xdg)
        base = xstrdup(xdg);
    else if (home && *home)
        base = join_path(home, ".local/share");
    else
        return NULL;
    {
        char *appdir = join_path(base, "graph85");
        char *prefix = join_path(appdir, "wineprefix");
        free(base);
        free(appdir);
        return prefix;
    }
}

/* Look for the emulator next to the launcher and in the installed data dir. */
static char *default_exe(void)
{
    char *dir = self_dir();
    char *candidates[5];
    char *found = NULL;
    int i;

    if (!dir)
        return NULL;
    candidates[0] = join_path(dir, EXE_NAME);
    candidates[1] = join_path(dir, "../" EXE_NAME);
    candidates[2] = join_path(dir, "../share/graph85/" EXE_NAME);
    candidates[3] = join_path(dir, "../lib/graph85/" EXE_NAME);
    candidates[4] = join_path(dir, "../../" EXE_NAME);
    for (i = 0; i < 5; i++) {
        if (!found && is_regular_file(candidates[i]))
            found = xstrdup(candidates[i]);
        free(candidates[i]);
    }
    free(dir);
    return found;
}

static int mkdir_p(const char *path, mode_t mode)
{
    char *copy = xstrdup(path);
    char *p;

    for (p = copy + 1; *p; p++) {
        if (*p != '/')
            continue;
        *p = '\0';
        if (mkdir(copy, mode) != 0 && errno != EEXIST) {
            free(copy);
            return -1;
        }
        *p = '/';
    }
    if (mkdir(copy, mode) != 0 && errno != EEXIST) {
        free(copy);
        return -1;
    }
    free(copy);
    return 0;
}

int main(int argc, char **argv)
{
    char *exe = NULL, *prefix = NULL, *wine = NULL;
    char *env_exe, *env_prefix, *env_wine;
    int keep_prefix = 0, print_config = 0;
    int i, emu_argc = 0, opt_done = 0;
    char **emu_argv;

    if (argc > 0 && argv[0] && *argv[0]) {
        const char *slash = strrchr(argv[0], '/');
        progname = slash ? slash + 1 : argv[0];
    }

    env_exe = getenv("GRAPH85_EXE");
    env_prefix = getenv("GRAPH85_PREFIX");
    env_wine = getenv("GRAPH85_WINE");
    if (env_exe && *env_exe)
        exe = xstrdup(env_exe);
    if (env_prefix && *env_prefix)
        prefix = xstrdup(env_prefix);
    if (env_wine && *env_wine)
        wine = xstrdup(env_wine);
    {
        const char *k = getenv("GRAPH85_KEEP_PREFIX");
        if (k && *k && strcmp(k, "0") != 0)
            keep_prefix = 1;
    }

    emu_argv = calloc((size_t)argc + 3, sizeof(char *));
    if (!emu_argv)
        die("%s", "memoire insuffisante");

    for (i = 1; i < argc; i++) {
        const char *a = argv[i];
        if (opt_done) {
            emu_argv[emu_argc++] = argv[i];
            continue;
        }
        if (strcmp(a, "--") == 0) {
            opt_done = 1;
        } else if (strcmp(a, "-h") == 0 || strcmp(a, "--help") == 0) {
            usage(stdout);
            return 0;
        } else if (strcmp(a, "-V") == 0 || strcmp(a, "--version") == 0) {
            printf("%s launcher %s\n", APP_NAME, VERSION);
            return 0;
        } else if (strcmp(a, "--print-config") == 0) {
            print_config = 1;
        } else if (strcmp(a, "--keep-prefix") == 0) {
            keep_prefix = 1;
        } else if (strcmp(a, "--exe") == 0 && i + 1 < argc) {
            free(exe);
            exe = xstrdup(argv[++i]);
        } else if (strcmp(a, "--prefix") == 0 && i + 1 < argc) {
            free(prefix);
            prefix = xstrdup(argv[++i]);
        } else if (strcmp(a, "--wine") == 0 && i + 1 < argc) {
            free(wine);
            wine = xstrdup(argv[++i]);
        } else if (a[0] == '-') {
            fprintf(stderr, "%s: option inconnue: %s\n", progname, a);
            usage(stderr);
            return 2;
        } else {
            /* First positional argument: everything from here goes to the
             * emulator, including options. */
            opt_done = 1;
            emu_argv[emu_argc++] = argv[i];
        }
    }

    if (!exe)
        exe = default_exe();
    if (!exe)
        die("emulateur introuvable (%s). Utilisez --exe ou GRAPH85_EXE.",
            EXE_NAME);
    if (!prefix)
        prefix = default_prefix();
    if (!prefix)
        die("%s", "impossible de determiner le prefixe Wine (HOME non defini)");
    if (!wine)
        wine = find_in_path("wine");
    if (!wine)
        die("%s", "Wine est introuvable dans PATH. Installez wine ou utilisez --wine.");

    if (print_config) {
        printf("exe:    %s\n", exe);
        printf("prefix: %s\n", prefix);
        printf("wine:   %s\n", wine);
        return 0;
    }

    if (!is_regular_file(exe))
        die("emulateur introuvable: %s", exe);
    if (access(wine, X_OK) != 0)
        die("Wine n'est pas executable: %s", wine);

    if (!keep_prefix && access(prefix, F_OK) != 0) {
        if (mkdir_p(prefix, 0700) != 0)
            die("impossible de creer le prefixe Wine %s", prefix);
    }

    setenv("WINEPREFIX", prefix, 1);
    if (!getenv("WINEDEBUG"))
        setenv("WINEDEBUG", "-all", 1);
    /* Avoid Wine's Mono/Gecko install prompts: this app needs neither. */
    if (!getenv("WINEDLLOVERRIDES"))
        setenv("WINEDLLOVERRIDES", "mscoree,mshtml=", 1);

    /* exec wine <exe> [args...] */
    {
        char **args = calloc((size_t)emu_argc + 3, sizeof(char *));
        if (!args)
            die("%s", "memoire insuffisante");
        args[0] = (char *)"wine";
        args[1] = exe;
        for (i = 0; i < emu_argc; i++)
            args[i + 2] = emu_argv[i];
        args[emu_argc + 2] = NULL;
        execv(wine, args);
    }

    fprintf(stderr, "%s: echec du lancement de Wine: %s\n", progname,
            strerror(errno));
    return 1;
}
