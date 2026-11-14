#include "calc.h"

#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "keys.h"

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif
#ifndef M_E
#define M_E 2.71828182845904523536
#endif

static const char *const menu_names[] = {
    "RUN", "STAT", "GRAPH", "TABLE", "DYNA", "CONICS", "EQUA",
    "MAT", "LIST", "PRGM", "LINK", "MEMORY", "SYSTEM", "ABOUT"
};
#define MENU_COUNT ((int)(sizeof(menu_names) / sizeof(menu_names[0])))

/* ------------------------------------------------------------------ */
/* Expression evaluator                                                */
/* ------------------------------------------------------------------ */

struct parser {
    const char *s;
    double x;
    double ans;
    int error;
};

static void skip_ws(struct parser *p)
{
    while (*p->s == ' ' || *p->s == '\t')
        p->s++;
}

static double parse_expr(struct parser *p);

static double parse_number(struct parser *p)
{
    char *end;
    double v;

    skip_ws(p);
    v = strtod(p->s, &end);
    if (end == p->s) {
        p->error = 1;
        return 0.0;
    }
    p->s = end;
    return v;
}

static int parse_ident(struct parser *p, char *out, size_t outlen)
{
    size_t n = 0;

    skip_ws(p);
    if (!isalpha((unsigned char)*p->s))
        return 0;
    while (isalnum((unsigned char)*p->s) || *p->s == '_') {
        if (n + 1 < outlen)
            out[n++] = (char)tolower((unsigned char)*p->s);
        p->s++;
    }
    out[n] = '\0';
    return n > 0;
}

static double apply_function(struct parser *p, const char *name)
{
    double v;

    skip_ws(p);
    if (*p->s != '(') {
        p->error = 1;
        return 0.0;
    }
    p->s++;
    v = parse_expr(p);
    skip_ws(p);
    if (*p->s != ')') {
        p->error = 1;
        return 0.0;
    }
    p->s++;

    if (strcmp(name, "sin") == 0)
        return sin(v * M_PI / 180.0);
    if (strcmp(name, "cos") == 0)
        return cos(v * M_PI / 180.0);
    if (strcmp(name, "tan") == 0)
        return tan(v * M_PI / 180.0);
    if (strcmp(name, "asin") == 0)
        return asin(v) * 180.0 / M_PI;
    if (strcmp(name, "acos") == 0)
        return acos(v) * 180.0 / M_PI;
    if (strcmp(name, "atan") == 0)
        return atan(v) * 180.0 / M_PI;
    if (strcmp(name, "log") == 0) {
        if (v <= 0.0) {
            p->error = 1;
            return 0.0;
        }
        return log10(v);
    }
    if (strcmp(name, "ln") == 0) {
        if (v <= 0.0) {
            p->error = 1;
            return 0.0;
        }
        return log(v);
    }
    if (strcmp(name, "sqrt") == 0) {
        if (v < 0.0) {
            p->error = 1;
            return 0.0;
        }
        return sqrt(v);
    }
    if (strcmp(name, "abs") == 0)
        return fabs(v);
    p->error = 1;
    return 0.0;
}

static double parse_primary(struct parser *p)
{
    double v;
    char name[24];

    skip_ws(p);
    if (*p->s == '(') {
        p->s++;
        v = parse_expr(p);
        skip_ws(p);
        if (*p->s != ')') {
            p->error = 1;
            return 0.0;
        }
        p->s++;
        return v;
    }
    if (isdigit((unsigned char)*p->s) ||
        (*p->s == '.' && isdigit((unsigned char)p->s[1])))
        return parse_number(p);
    if (isalpha((unsigned char)*p->s)) {
        if (!parse_ident(p, name, sizeof(name))) {
            p->error = 1;
            return 0.0;
        }
        if (strcmp(name, "pi") == 0)
            return M_PI;
        if (strcmp(name, "e") == 0)
            return M_E;
        if (strcmp(name, "x") == 0)
            return p->x;
        if (strcmp(name, "ans") == 0)
            return p->ans;
        return apply_function(p, name);
    }
    p->error = 1;
    return 0.0;
}

static double parse_unary(struct parser *p)
{
    skip_ws(p);
    if (*p->s == '-') {
        p->s++;
        return -parse_unary(p);
    }
    if (*p->s == '+') {
        p->s++;
        return parse_unary(p);
    }
    return parse_primary(p);
}

static double parse_power(struct parser *p)
{
    double base = parse_unary(p);
    skip_ws(p);
    if (*p->s == '^') {
        p->s++;
        return pow(base, parse_power(p));
    }
    return base;
}

static double parse_term(struct parser *p)
{
    double v = parse_power(p);

    for (;;) {
        skip_ws(p);
        if (*p->s == '*') {
            p->s++;
            v *= parse_power(p);
        } else if (*p->s == '/') {
            double d;
            p->s++;
            d = parse_power(p);
            if (fabs(d) < 1e-15) {
                p->error = 1;
                return 0.0;
            }
            v /= d;
        } else {
            return v;
        }
        if (p->error)
            return 0.0;
    }
}

static double parse_expr(struct parser *p)
{
    double v = parse_term(p);

    for (;;) {
        skip_ws(p);
        if (*p->s == '+') {
            p->s++;
            v += parse_term(p);
        } else if (*p->s == '-') {
            p->s++;
            v -= parse_term(p);
        } else {
            return v;
        }
        if (p->error)
            return 0.0;
    }
}

static int eval(const char *text, double x, double ans, double *out)
{
    struct parser p;
    double v;

    p.s = text;
    p.x = x;
    p.ans = ans;
    p.error = 0;
    v = parse_expr(&p);
    skip_ws(&p);
    if (p.error || *p.s != '\0')
        return -1;
    if (!isfinite(v))
        return -1;
    *out = v;
    return 0;
}

/* ------------------------------------------------------------------ */
/* Editing helpers                                                     */
/* ------------------------------------------------------------------ */

static void append(struct calc *calc, const char *s)
{
    size_t n = strlen(s);
    if (calc->len + n >= sizeof(calc->input))
        n = sizeof(calc->input) - calc->len - 1;
    memcpy(calc->input + calc->len, s, n);
    calc->len += n;
    calc->input[calc->len] = '\0';
}

static void backspace(struct calc *calc)
{
    if (calc->len > 0)
        calc->input[--calc->len] = '\0';
}

static void graph_append(struct calc *calc, const char *s)
{
    size_t n = strlen(s);
    if (calc->graph_len + n >= sizeof(calc->graph))
        n = sizeof(calc->graph) - calc->graph_len - 1;
    memcpy(calc->graph + calc->graph_len, s, n);
    calc->graph_len += n;
    calc->graph[calc->graph_len] = '\0';
}

static void graph_backspace(struct calc *calc)
{
    if (calc->graph_len > 0)
        calc->graph[--calc->graph_len] = '\0';
}

static void format_number(char *buf, size_t size, double v)
{
    if (fabs(v) < 1e-12)
        v = 0.0;
    if (fabs(v) >= 1e9 || (fabs(v) < 1e-4 && v != 0.0))
        snprintf(buf, size, "%.6e", v);
    else if (fabs(v - round(v)) < 1e-10 && fabs(v) < 1e9)
        snprintf(buf, size, "%.0f", v);
    else
        snprintf(buf, size, "%.6g", v);
}

/* ------------------------------------------------------------------ */
/* Actions                                                             */
/* ------------------------------------------------------------------ */

static void run_eval(struct calc *calc)
{
    double v;
    if (calc->len == 0) {
        snprintf(calc->result, sizeof(calc->result), "0");
        calc->error = 0;
        return;
    }
    if (eval(calc->input, 0.0, calc->ans, &v) != 0) {
        snprintf(calc->result, sizeof(calc->result), "SYNTAX ERROR");
        calc->error = 1;
        return;
    }
    calc->ans = v;
    calc->error = 0;
    format_number(calc->result, sizeof(calc->result), v);
}

static void open_menu(struct calc *calc)
{
    calc->page = PAGE_MENU;
    calc->shift = 0;
    calc->alpha = 0;
}

static void activate_menu(struct calc *calc)
{
    switch (calc->menu_sel) {
    case 0:
        calc->page = PAGE_RUN;
        break;
    case 2:
        calc->page = PAGE_GRAPH;
        break;
    case 13:
        calc->page = PAGE_ABOUT;
        break;
    default:
        snprintf(calc->message, sizeof(calc->message),
                 "%s IS NOT IN THIS PREVIEW", menu_names[calc->menu_sel]);
        calc->page = PAGE_MESSAGE;
        break;
    }
}

static void menu_move(struct calc *calc, int dx, int dy)
{
    int col = calc->menu_sel % 2;
    int row = calc->menu_sel / 2;
    col += dx;
    row += dy;
    if (col < 0)
        col = 0;
    if (col > 1)
        col = 1;
    if (row < 0)
        row = 0;
    if (row > 6)
        row = 6;
    calc->menu_sel = row * 2 + col;
    if (calc->menu_sel >= MENU_COUNT)
        calc->menu_sel = MENU_COUNT - 1;
}

void calc_init(struct calc *calc)
{
    memset(calc, 0, sizeof(*calc));
    calc->page = PAGE_BOOT;
    calc->menu_sel = 0;
    calc->ans = 0.0;
    snprintf(calc->result, sizeof(calc->result), "0");
}

void calc_key(struct calc *calc, int key)
{
    if (key == K_SHIFT) {
        calc->shift = !calc->shift;
        return;
    }
    if (key == K_ALPHA) {
        calc->alpha = !calc->alpha;
        return;
    }

    if (key == K_MENU) {
        open_menu(calc);
        return;
    }

    switch (calc->page) {
    case PAGE_BOOT:
        if (key == K_EXE || key == K_MENU)
            open_menu(calc);
        return;

    case PAGE_MESSAGE:
        if (key == K_EXE || key == K_EXIT || key == K_AC)
            open_menu(calc);
        return;

    case PAGE_ABOUT:
        if (key == K_EXE || key == K_EXIT || key == K_AC)
            open_menu(calc);
        return;

    case PAGE_MENU:
        if (key >= K_F1 && key <= K_F6) {
            calc->menu_sel = key - K_F1;
            activate_menu(calc);
            return;
        }
        switch (key) {
        case K_UP:    menu_move(calc, 0, -1); break;
        case K_DOWN:  menu_move(calc, 0, 1); break;
        case K_LEFT:  menu_move(calc, -1, 0); break;
        case K_RIGHT: menu_move(calc, 1, 0); break;
        case K_EXE:   activate_menu(calc); break;
        case K_EXIT:  calc->page = PAGE_RUN; break;
        default: break;
        }
        return;

    case PAGE_RUN:
        switch (key) {
        case K_0: append(calc, "0"); break;
        case K_1: append(calc, "1"); break;
        case K_2: append(calc, "2"); break;
        case K_3: append(calc, "3"); break;
        case K_4: append(calc, "4"); break;
        case K_5: append(calc, "5"); break;
        case K_6: append(calc, "6"); break;
        case K_7: append(calc, "7"); break;
        case K_8: append(calc, "8"); break;
        case K_9: append(calc, "9"); break;
        case K_DOT:    append(calc, "."); break;
        case K_ADD:    append(calc, "+"); break;
        case K_SUB:    append(calc, "-"); break;
        case K_MUL:    append(calc, "*"); break;
        case K_DIV:    append(calc, "/"); break;
        case K_LPAR:   append(calc, "("); break;
        case K_RPAR:   append(calc, ")"); break;
        case K_POW:    append(calc, "^"); break;
        case K_SQUARE: append(calc, "^2"); break;
        case K_NEG:    append(calc, "-"); break;
        case K_EXP:    append(calc, "10^"); break;
        case K_FRAC:   append(calc, "/"); break;
        case K_X:      append(calc, "X"); break;
        case K_SIN:    append(calc, "SIN("); break;
        case K_COS:    append(calc, "COS("); break;
        case K_TAN:    append(calc, "TAN("); break;
        case K_LOG:    append(calc, "LOG("); break;
        case K_LN:     append(calc, "LN("); break;
        case K_DEL:    backspace(calc); break;
        case K_AC:
            calc->len = 0;
            calc->input[0] = '\0';
            calc->result[0] = '\0';
            calc->error = 0;
            break;
        case K_EXE:    run_eval(calc); break;
        case K_EXIT:   open_menu(calc); break;
        default: break;
        }
        return;

    case PAGE_GRAPH:
        switch (key) {
        case K_0: graph_append(calc, "0"); break;
        case K_1: graph_append(calc, "1"); break;
        case K_2: graph_append(calc, "2"); break;
        case K_3: graph_append(calc, "3"); break;
        case K_4: graph_append(calc, "4"); break;
        case K_5: graph_append(calc, "5"); break;
        case K_6: graph_append(calc, "6"); break;
        case K_7: graph_append(calc, "7"); break;
        case K_8: graph_append(calc, "8"); break;
        case K_9: graph_append(calc, "9"); break;
        case K_DOT:    graph_append(calc, "."); break;
        case K_ADD:    graph_append(calc, "+"); break;
        case K_SUB:    graph_append(calc, "-"); break;
        case K_MUL:    graph_append(calc, "*"); break;
        case K_DIV:    graph_append(calc, "/"); break;
        case K_LPAR:   graph_append(calc, "("); break;
        case K_RPAR:   graph_append(calc, ")"); break;
        case K_POW:    graph_append(calc, "^"); break;
        case K_SQUARE: graph_append(calc, "^2"); break;
        case K_NEG:    graph_append(calc, "-"); break;
        case K_EXP:    graph_append(calc, "10^"); break;
        case K_FRAC:   graph_append(calc, "/"); break;
        case K_X:      graph_append(calc, "X"); break;
        case K_SIN:    graph_append(calc, "SIN("); break;
        case K_COS:    graph_append(calc, "COS("); break;
        case K_TAN:    graph_append(calc, "TAN("); break;
        case K_LOG:    graph_append(calc, "LOG("); break;
        case K_LN:     graph_append(calc, "LN("); break;
        case K_DEL:
            if (calc->graph_plot)
                calc->graph_plot = 0;
            else
                graph_backspace(calc);
            break;
        case K_AC:
            calc->graph_len = 0;
            calc->graph[0] = '\0';
            calc->graph_plot = 0;
            break;
        case K_EXE:
            if (calc->graph_len == 0) {
                snprintf(calc->message, sizeof(calc->message),
                         "ENTER AN EXPRESSION FOR Y1");
                calc->page = PAGE_MESSAGE;
            } else {
                calc->graph_plot = !calc->graph_plot;
            }
            break;
        case K_EXIT: open_menu(calc); break;
        default: break;
        }
        return;
    }
}

/* ------------------------------------------------------------------ */
/* Drawing                                                             */
/* ------------------------------------------------------------------ */

static void draw_centered(struct lcd *lcd, int y, const char *text, int on)
{
    int width = (int)strlen(text) * LCD_CELL_W;
    int x = (LCD_WIDTH - width) / 2;
    if (x < 0)
        x = 0;
    lcd_text(lcd, x, y, text, on);
}

static void draw_right(struct lcd *lcd, int y, const char *text, int on)
{
    int width = (int)strlen(text) * LCD_CELL_W;
    int x = LCD_WIDTH - width;
    if (x < 0)
        x = 0;
    lcd_text(lcd, x, y, text, on);
}

static void draw_input(struct calc *calc, struct lcd *lcd)
{
    size_t start = 0;
    size_t visible = LCD_COLS;
    char buf[LCD_COLS + 2];

    if (calc->len > visible - 1)
        start = calc->len - (visible - 1);
    strncpy(buf, calc->input + start, visible - 1);
    buf[visible - 1] = '\0';
    lcd_text(lcd, 0, 8, buf, 1);
    lcd_text(lcd, (int)strlen(buf) * LCD_CELL_W, 8, "_", 1);
}

static void draw_boot(struct calc *calc, struct lcd *lcd)
{
    (void)calc;
    draw_centered(lcd, 8, "MAIN MEMORIES", 1);
    draw_centered(lcd, 16, "CLEARED!", 1);
    draw_centered(lcd, 40, "PRESS [MENU] KEY", 1);
}

static void draw_menu(struct calc *calc, struct lcd *lcd)
{
    int i;
    int row, col;

    lcd_text(lcd, 0, 0, "MENU", 1);
    for (i = 0; i < MENU_COUNT; i++) {
        row = i / 2;
        col = i % 2;
        int x = col == 0 ? 6 : 69;
        int y = 8 + row * 8;
        if (i == calc->menu_sel)
            lcd_text(lcd, x - 6, y, ">", 1);
        lcd_text(lcd, x, y, menu_names[i], 1);
    }
}

static void draw_run(struct calc *calc, struct lcd *lcd)
{
    lcd_text(lcd, 0, 0, "RUN", 1);
    lcd_text(lcd, LCD_WIDTH - 3 * LCD_CELL_W, 0, "DEG", 1);
    lcd_hline(lcd, 0, LCD_WIDTH - 1, 7, 1);
    draw_input(calc, lcd);
    if (calc->result[0] && !calc->error) {
        lcd_text(lcd, 0, 24, "=", 1);
        draw_right(lcd, 24, calc->result, 1);
    } else if (calc->error) {
        draw_right(lcd, 24, calc->result, 1);
    }
    if (calc->ans != 0.0) {
        char buf[32];
        format_number(buf, sizeof(buf), calc->ans);
        lcd_text(lcd, 0, 40, "ANS", 1);
        draw_right(lcd, 40, buf, 1);
    }
    lcd_text(lcd, 0, 56, "EXE=OK  DEL=DEL", 1);
}

static void draw_graph(struct calc *calc, struct lcd *lcd)
{
    if (!calc->graph_plot) {
        lcd_text(lcd, 0, 0, "GRAPH Y1=", 1);
        lcd_text(lcd, 0, 8, calc->graph, 1);
        lcd_text(lcd, 0, 24, "XMIN=-360 XMAX=360", 1);
        lcd_text(lcd, 0, 32, "YMIN=-1.6 YMAX=1.6", 1);
        lcd_text(lcd, 0, 56, "EXE=PLOT  AC=CLR", 1);
        return;
    }

    /* Plot area: y=10..63, x=0..127, angles in degrees. */
    {
        const double xmin = -360.0, xmax = 360.0;
        const double ymin = -1.6, ymax = 1.6;
        const int top = 10, bottom = LCD_HEIGHT - 1;
        const double dx = (xmax - xmin) / (LCD_WIDTH - 1);
        const double dy = (ymax - ymin) / (bottom - top);
        int px;
        int prev_y = -1;
        int axis_y = top + (int)lround((ymax - 0.0) / dy);
        int axis_x = (int)lround((0.0 - xmin) / dx);

        if (axis_y >= top && axis_y <= bottom)
            lcd_hline(lcd, 0, LCD_WIDTH - 1, axis_y, 1);
        if (axis_x >= 0 && axis_x < LCD_WIDTH)
            lcd_vline(lcd, axis_x, top, bottom, 1);

        for (px = 0; px < LCD_WIDTH; px++) {
            double x = xmin + px * dx;
            double y;
            int py;
            if (eval(calc->graph, x, 0.0, &y) != 0)
                continue;
            py = top + (int)lround((ymax - y) / dy);
            if (py < top || py > bottom) {
                prev_y = -1;
                continue;
            }
            if (prev_y >= 0) {
                int y0 = prev_y < py ? prev_y : py;
                int y1 = prev_y < py ? py : prev_y;
                int yy;
                for (yy = y0; yy <= y1; yy++)
                    lcd_pixel(lcd, px, yy, 1);
            } else {
                lcd_pixel(lcd, px, py, 1);
            }
            prev_y = py;
        }

        lcd_text(lcd, 0, 0, "Y1=", 1);
        lcd_text(lcd, 3 * LCD_CELL_W, 0, calc->graph, 1);
        lcd_text(lcd, 0, 56, "EXE=EDIT", 1);
    }
}

static void draw_about(struct calc *calc, struct lcd *lcd)
{
    (void)calc;
    lcd_text(lcd, 0, 0, "GRAPH 85 NATIVE", 1);
    lcd_text(lcd, 0, 16, "PREVIEW 0.1", 1);
    lcd_text(lcd, 0, 24, "SDL2 + C", 1);
    lcd_text(lcd, 0, 40, "NOT A CASIO OS", 1);
    lcd_text(lcd, 0, 56, "EXE=BACK", 1);
}

static void draw_message(struct calc *calc, struct lcd *lcd)
{
    const char *p = calc->message;
    int line = 0;
    char buf[LCD_COLS + 1];

    lcd_text(lcd, 0, 8, "NOT AVAILABLE", 1);
    while (*p && line < 4) {
        size_t n = strlen(p);
        if (n > LCD_COLS)
            n = LCD_COLS;
        memcpy(buf, p, n);
        buf[n] = '\0';
        lcd_text(lcd, 0, 24 + line * 8, buf, 1);
        p += n;
        line++;
    }
    lcd_text(lcd, 0, 56, "EXE=BACK", 1);
}

void calc_draw(const struct calc *calc, struct lcd *lcd)
{
    struct calc *mutable_calc = (struct calc *)calc;

    lcd_clear(lcd, 0);

    switch (calc->page) {
    case PAGE_BOOT:    draw_boot(mutable_calc, lcd); break;
    case PAGE_MENU:    draw_menu(mutable_calc, lcd); break;
    case PAGE_RUN:     draw_run(mutable_calc, lcd); break;
    case PAGE_GRAPH:   draw_graph(mutable_calc, lcd); break;
    case PAGE_ABOUT:   draw_about(mutable_calc, lcd); break;
    case PAGE_MESSAGE: draw_message(mutable_calc, lcd); break;
    }
}
