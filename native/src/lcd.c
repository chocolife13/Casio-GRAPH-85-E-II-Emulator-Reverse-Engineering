#include "lcd.h"

#include <stdarg.h>
#include <stdio.h>
#include <string.h>

#include "font6x8.h"

void lcd_clear(struct lcd *lcd, int on)
{
    memset(lcd->pixel, on ? 1 : 0, sizeof(lcd->pixel));
}

void lcd_pixel(struct lcd *lcd, int x, int y, int on)
{
    if (x < 0 || x >= LCD_WIDTH || y < 0 || y >= LCD_HEIGHT)
        return;
    lcd->pixel[y][x] = on ? 1 : 0;
}

void lcd_hline(struct lcd *lcd, int x0, int x1, int y, int on)
{
    int x;
    if (x0 > x1) {
        int t = x0;
        x0 = x1;
        x1 = t;
    }
    for (x = x0; x <= x1; x++)
        lcd_pixel(lcd, x, y, on);
}

void lcd_vline(struct lcd *lcd, int x, int y0, int y1, int on)
{
    int y;
    if (y0 > y1) {
        int t = y0;
        y0 = y1;
        y1 = t;
    }
    for (y = y0; y <= y1; y++)
        lcd_pixel(lcd, x, y, on);
}

void lcd_rect(struct lcd *lcd, int x, int y, int w, int h, int on)
{
    lcd_hline(lcd, x, x + w - 1, y, on);
    lcd_hline(lcd, x, x + w - 1, y + h - 1, on);
    lcd_vline(lcd, x, y, y + h - 1, on);
    lcd_vline(lcd, x + w - 1, y, y + h - 1, on);
}

void lcd_char(struct lcd *lcd, int x, int y, char c, int on)
{
    int col, row;
    unsigned char code = (unsigned char)c;
    const unsigned char *glyph;

    if (code < 32 || code > 126)
        code = '?';
    glyph = font6x8[code - 32];
    for (col = 0; col < 6; col++) {
        unsigned char bits = glyph[col];
        for (row = 0; row < 8; row++) {
            if (bits & (1u << row))
                lcd_pixel(lcd, x + col, y + row, on);
        }
    }
}

void lcd_text(struct lcd *lcd, int x, int y, const char *text, int on)
{
    int col = 0;
    while (*text) {
        if (*text == '\n') {
            y += 8;
            col = 0;
            text++;
            continue;
        }
        lcd_char(lcd, x + col * LCD_CELL_W, y, *text, on);
        col++;
        text++;
    }
}

void lcd_textf(struct lcd *lcd, int x, int y, int on, const char *fmt, ...)
{
    char buf[128];
    va_list ap;

    va_start(ap, fmt);
    vsnprintf(buf, sizeof(buf), fmt, ap);
    va_end(ap);
    lcd_text(lcd, x, y, buf, on);
}
