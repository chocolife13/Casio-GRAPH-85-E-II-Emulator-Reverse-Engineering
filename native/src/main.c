/*
 * graph85-native - SDL2 front-end for the native GRAPH 85 reimplementation.
 *
 * This is a clean-room native program: it does not contain or execute any
 * code from GRAPH85emulator.exe.  It reuses the keypad artwork extracted
 * from the original application for visual fidelity.
 */
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#include <SDL.h>

#include "calc.h"
#include "keys.h"
#include "lcd.h"
#include "png_load.h"

#define KEYPAD_WIDTH  353
#define KEYPAD_HEIGHT 705
#define LCD_X 49
#define LCD_Y 85
#define LCD_W 256
#define LCD_H 128

struct hitbox {
    int key;
    int cx, cy, w, h;
};

/* Coordinates measured on the 353x705 keypad artwork. */
static const struct hitbox hitboxes[] = {
    /* F1..F6 */
    {K_F1, 65, 306, 40, 26}, {K_F2, 108, 306, 40, 26},
    {K_F3, 152, 306, 40, 26}, {K_F4, 195, 306, 40, 26},
    {K_F5, 240, 306, 40, 26}, {K_F6, 285, 306, 40, 26},
    /* SHIFT / OPTN / VARS / MENU */
    {K_SHIFT, 69, 346, 42, 26}, {K_OPTN, 113, 346, 42, 26},
    {K_VARS, 157, 346, 42, 26}, {K_MENU, 201, 346, 42, 26},
    /* ALPHA / x^2 / ^ / EXIT */
    {K_ALPHA, 69, 386, 42, 26}, {K_SQUARE, 113, 386, 42, 26},
    {K_POW, 157, 386, 42, 26}, {K_EXIT, 201, 386, 42, 26},
    /* X,theta,T / log / ln / sin / cos / tan */
    {K_X, 67, 421, 40, 26}, {K_LOG, 111, 421, 40, 26},
    {K_LN, 155, 421, 40, 26}, {K_SIN, 199, 421, 40, 26},
    {K_COS, 243, 421, 40, 26}, {K_TAN, 287, 421, 40, 26},
    /* fraction / F<->D / ( / ) / comma / arrow */
    {K_FRAC, 67, 458, 40, 26}, {K_FD, 111, 458, 40, 26},
    {K_LPAR, 155, 458, 40, 26}, {K_RPAR, 199, 458, 40, 26},
    {K_COMMA, 243, 458, 40, 26}, {K_ARROW, 287, 458, 40, 26},
    /* 7 8 9 DEL AC/ON */
    {K_7, 63, 505, 44, 32}, {K_8, 106, 505, 44, 32},
    {K_9, 150, 505, 44, 32}, {K_DEL, 194, 505, 44, 32},
    {K_AC, 270, 505, 48, 32},
    /* 4 5 6 * / */
    {K_4, 63, 549, 44, 32}, {K_5, 106, 549, 44, 32},
    {K_6, 150, 549, 44, 32}, {K_MUL, 194, 549, 44, 32},
    {K_DIV, 270, 549, 44, 32},
    /* 1 2 3 + - */
    {K_1, 63, 592, 44, 32}, {K_2, 106, 592, 44, 32},
    {K_3, 150, 592, 44, 32}, {K_ADD, 194, 592, 44, 32},
    {K_SUB, 270, 592, 44, 32},
    /* 0 . x10^x (-) EXE */
    {K_0, 63, 635, 44, 32}, {K_DOT, 106, 635, 44, 32},
    {K_EXP, 150, 635, 44, 32}, {K_NEG, 194, 635, 44, 32},
    {K_EXE, 270, 635, 48, 32},
    /* REPLAY */
    {K_REPLAY, 283, 350, 80, 64}
};

static const size_t hitbox_count = sizeof(hitboxes) / sizeof(hitboxes[0]);

static char *self_dir(void)
{
    static char buf[PATH_MAX];
    ssize_t n = readlink("/proc/self/exe", buf, sizeof(buf) - 1);
    char *slash;

    if (n < 0)
        return NULL;
    buf[n] = '\0';
    slash = strrchr(buf, '/');
    if (!slash)
        return NULL;
    *slash = '\0';
    return buf;
}

static char *find_asset(const char *name)
{
    static char candidates[6][PATH_MAX + 128];
    const char *dir = self_dir();
    int n = 0;
    int i;

    snprintf(candidates[n++], sizeof(candidates[0]), "native/assets/%s", name);
    snprintf(candidates[n++], sizeof(candidates[0]), "assets/%s", name);
    snprintf(candidates[n++], sizeof(candidates[0]), "./%s", name);
    if (dir) {
        snprintf(candidates[n++], sizeof(candidates[0]), "%s/assets/%s", dir, name);
        snprintf(candidates[n++], sizeof(candidates[0]), "%s/../assets/%s", dir, name);
        snprintf(candidates[n++], sizeof(candidates[0]), "%s/../share/graph85/%s",
                 dir, name);
    }
    for (i = 0; i < n; i++) {
        if (access(candidates[i], R_OK) == 0)
            return candidates[i];
    }
    return NULL;
}

static int key_from_mouse(int x, int y)
{
    size_t i;
    for (i = 0; i < hitbox_count; i++) {
        const struct hitbox *h = &hitboxes[i];
        if (x >= h->cx - h->w / 2 && x <= h->cx + h->w / 2 &&
            y >= h->cy - h->h / 2 && y <= h->cy + h->h / 2)
            return h->key;
    }
    return K_NONE;
}

static int key_from_keyboard(SDL_Keycode sym, Uint16 mod)
{
    (void)mod;
    if (sym >= SDLK_0 && sym <= SDLK_9)
        return K_0 + (sym - SDLK_0);
    if (sym >= SDLK_KP_0 && sym <= SDLK_KP_9)
        return K_0 + (sym - SDLK_KP_0);
    if (sym >= SDLK_F1 && sym <= SDLK_F6)
        return K_F1 + (sym - SDLK_F1);

    switch (sym) {
    case SDLK_PERIOD:
    case SDLK_KP_PERIOD: return K_DOT;
    case SDLK_PLUS:
    case SDLK_KP_PLUS: return K_ADD;
    case SDLK_MINUS:
    case SDLK_KP_MINUS: return K_SUB;
    case SDLK_ASTERISK:
    case SDLK_KP_MULTIPLY: return K_MUL;
    case SDLK_SLASH:
    case SDLK_KP_DIVIDE: return K_DIV;
    case SDLK_RETURN:
    case SDLK_KP_ENTER: return K_EXE;
    case SDLK_BACKSPACE: return K_DEL;
    case SDLK_DELETE: return K_AC;
    case SDLK_ESCAPE: return K_EXIT;
    case SDLK_UP: return K_UP;
    case SDLK_DOWN: return K_DOWN;
    case SDLK_LEFT: return K_LEFT;
    case SDLK_RIGHT: return K_RIGHT;
    case SDLK_LEFTPAREN: return K_LPAR;
    case SDLK_RIGHTPAREN: return K_RPAR;
    case SDLK_CARET: return K_POW;
    case SDLK_m: return K_MENU;
    case SDLK_s: return K_SIN;
    case SDLK_c: return K_COS;
    case SDLK_t: return K_TAN;
    case SDLK_l: return K_LOG;
    case SDLK_n: return K_LN;
    case SDLK_x: return K_X;
    default: return K_NONE;
    }
}

static int key_from_name(const char *name)
{
    static const struct { const char *name; int key; } names[] = {
        {"0", K_0}, {"1", K_1}, {"2", K_2}, {"3", K_3}, {"4", K_4},
        {"5", K_5}, {"6", K_6}, {"7", K_7}, {"8", K_8}, {"9", K_9},
        {"dot", K_DOT}, {"plus", K_ADD}, {"minus", K_SUB},
        {"mul", K_MUL}, {"div", K_DIV}, {"exe", K_EXE}, {"del", K_DEL},
        {"ac", K_AC}, {"menu", K_MENU}, {"exit", K_EXIT},
        {"up", K_UP}, {"down", K_DOWN}, {"left", K_LEFT},
        {"right", K_RIGHT}, {"shift", K_SHIFT}, {"alpha", K_ALPHA},
        {"square", K_SQUARE}, {"pow", K_POW}, {"log", K_LOG},
        {"ln", K_LN}, {"sin", K_SIN}, {"cos", K_COS}, {"tan", K_TAN},
        {"f1", K_F1}, {"f2", K_F2}, {"f3", K_F3}, {"f4", K_F4},
        {"f5", K_F5}, {"f6", K_F6}, {"x", K_X}, {"frac", K_FRAC},
        {"lpar", K_LPAR}, {"rpar", K_RPAR}, {"neg", K_NEG},
        {"exp", K_EXP}
    };
    size_t i;

    for (i = 0; i < sizeof(names) / sizeof(names[0]); i++) {
        if (strcmp(names[i].name, name) == 0)
            return names[i].key;
    }
    return K_NONE;
}

static void usage(const char *prog)
{
    printf("Usage: %s [--assets DIR] [--scale PERCENT] [--press KEY]... "
           "[--shot FILE]\n"
           "\n"
           "Native GRAPH 85 preview (SDL2).\n"
           "  --assets DIR     directory containing keypad.png\n"
           "  --scale PERCENT  window scale, default 130\n"
           "  --press KEY      apply a key before the first frame\n"
           "  --shot FILE      render one frame to a BMP file and exit\n",
           prog);
}

int main(int argc, char **argv)
{
    struct calc calc;
    struct lcd lcd;
    const char *asset_dir = NULL;
    const char *asset_path;
    char asset_buf[PATH_MAX + 128];
    int scale = 130;
    int i, win_w, win_h;
    SDL_Window *window;
    SDL_Renderer *renderer;
    SDL_Texture *keypad;
    SDL_Texture *lcd_texture;
    int keypad_w = 0, keypad_h = 0;
    Uint32 lcd_pixels[LCD_HEIGHT][LCD_WIDTH];
    int press[64];
    int press_count = 0;
    const char *shot = NULL;
    int running = 1;

    for (i = 1; i < argc; i++) {
        if (strcmp(argv[i], "--assets") == 0 && i + 1 < argc)
            asset_dir = argv[++i];
        else if (strcmp(argv[i], "--scale") == 0 && i + 1 < argc)
            scale = atoi(argv[++i]);
        else if (strcmp(argv[i], "--press") == 0 && i + 1 < argc) {
            int key = key_from_name(argv[++i]);
            if (key == K_NONE) {
                fprintf(stderr, "graph85-native: unknown key '%s'\n", argv[i]);
                return 2;
            }
            if (press_count < (int)(sizeof(press) / sizeof(press[0])))
                press[press_count++] = key;
        } else if (strcmp(argv[i], "--shot") == 0 && i + 1 < argc)
            shot = argv[++i];
        else if (strcmp(argv[i], "-h") == 0 || strcmp(argv[i], "--help") == 0) {
            usage(argv[0]);
            return 0;
        }
    }
    if (scale < 50 || scale > 300)
        scale = 130;

    if (asset_dir) {
        snprintf(asset_buf, sizeof(asset_buf), "%s/keypad.png", asset_dir);
        asset_path = asset_buf;
    } else {
        asset_path = find_asset("keypad.png");
        if (!asset_path) {
            fprintf(stderr, "graph85-native: keypad.png not found\n");
            return 1;
        }
    }

    if (SDL_Init(SDL_INIT_VIDEO) != 0) {
        fprintf(stderr, "graph85-native: SDL_Init: %s\n", SDL_GetError());
        return 1;
    }

    win_w = KEYPAD_WIDTH * scale / 100;
    win_h = KEYPAD_HEIGHT * scale / 100;
    window = SDL_CreateWindow("GRAPH 85 - native preview",
                              SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED,
                              win_w, win_h,
                              SDL_WINDOW_RESIZABLE | SDL_WINDOW_ALLOW_HIGHDPI);
    if (!window) {
        fprintf(stderr, "graph85-native: window: %s\n", SDL_GetError());
        SDL_Quit();
        return 1;
    }
    renderer = SDL_CreateRenderer(window, -1,
                                  SDL_RENDERER_ACCELERATED |
                                  SDL_RENDERER_PRESENTVSYNC);
    if (!renderer)
        renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_SOFTWARE);
    if (!renderer) {
        fprintf(stderr, "graph85-native: renderer: %s\n", SDL_GetError());
        SDL_DestroyWindow(window);
        SDL_Quit();
        return 1;
    }
    SDL_SetHint(SDL_HINT_RENDER_SCALE_QUALITY, "1");
    SDL_RenderSetLogicalSize(renderer, KEYPAD_WIDTH, KEYPAD_HEIGHT);

    keypad = load_png_texture(renderer, asset_path, &keypad_w, &keypad_h);
    if (!keypad) {
        fprintf(stderr, "graph85-native: cannot load %s\n", asset_path);
        SDL_DestroyRenderer(renderer);
        SDL_DestroyWindow(window);
        SDL_Quit();
        return 1;
    }
    lcd_texture = SDL_CreateTexture(renderer, SDL_PIXELFORMAT_ARGB8888,
                                    SDL_TEXTUREACCESS_STREAMING,
                                    LCD_WIDTH, LCD_HEIGHT);
    if (!lcd_texture) {
        fprintf(stderr, "graph85-native: LCD texture: %s\n", SDL_GetError());
        SDL_DestroyTexture(keypad);
        SDL_DestroyRenderer(renderer);
        SDL_DestroyWindow(window);
        SDL_Quit();
        return 1;
    }

    calc_init(&calc);
    for (i = 0; i < press_count; i++)
        calc_key(&calc, press[i]);

    while (running) {
        SDL_Event ev;
        int x, y;

        while (SDL_PollEvent(&ev)) {
            switch (ev.type) {
            case SDL_QUIT:
                running = 0;
                break;
            case SDL_KEYDOWN:
                if (ev.key.keysym.sym == SDLK_q &&
                    (ev.key.keysym.mod & KMOD_CTRL)) {
                    running = 0;
                    break;
                }
                {
                    int key = key_from_keyboard(ev.key.keysym.sym,
                                                ev.key.keysym.mod);
                    if (key != K_NONE)
                        calc_key(&calc, key);
                }
                break;
            case SDL_MOUSEBUTTONDOWN:
                if (ev.button.button == SDL_BUTTON_LEFT) {
                    float lx, ly;
                    SDL_RenderWindowToLogical(renderer, ev.button.x,
                                              ev.button.y, &lx, &ly);
                    x = (int)lx;
                    y = (int)ly;
                    {
                        int key = key_from_mouse(x, y);
                        if (key != K_NONE)
                            calc_key(&calc, key);
                    }
                }
                break;
            default:
                break;
            }
        }

        calc_draw(&calc, &lcd);
        for (y = 0; y < LCD_HEIGHT; y++) {
            for (x = 0; x < LCD_WIDTH; x++) {
                lcd_pixels[y][x] = lcd.pixel[y][x]
                    ? 0xFF1E1E26u   /* ink */
                    : 0xFFDDE8E9u;  /* LCD background */
            }
        }
        SDL_UpdateTexture(lcd_texture, NULL, lcd_pixels, LCD_WIDTH * 4);

        SDL_SetRenderDrawColor(renderer, 24, 24, 28, 255);
        SDL_RenderClear(renderer);
        SDL_RenderCopy(renderer, keypad, NULL, NULL);
        {
            SDL_Rect dst = {LCD_X, LCD_Y, LCD_W, LCD_H};
            SDL_RenderCopy(renderer, lcd_texture, NULL, &dst);
        }
        SDL_RenderPresent(renderer);

        if (shot) {
            SDL_Surface *frame = SDL_CreateRGBSurfaceWithFormat(
                0, win_w, win_h, 32, SDL_PIXELFORMAT_ARGB8888);
            if (frame && SDL_RenderReadPixels(renderer, NULL,
                                              SDL_PIXELFORMAT_ARGB8888,
                                              frame->pixels, frame->pitch) == 0) {
                if (SDL_SaveBMP(frame, shot) != 0)
                    fprintf(stderr, "graph85-native: cannot write %s: %s\n",
                            shot, SDL_GetError());
            }
            SDL_FreeSurface(frame);
            running = 0;
        }
    }

    SDL_DestroyTexture(lcd_texture);
    SDL_DestroyTexture(keypad);
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();
    return 0;
}
