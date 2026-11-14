/* 128x64 one-bit LCD framebuffer and text rendering. */
#ifndef GRAPH85_LCD_H
#define GRAPH85_LCD_H

#include <stdint.h>

#define LCD_WIDTH  128
#define LCD_HEIGHT 64
#define LCD_CELL_W 7   /* 6 pixel glyph + 1 pixel gap */
#define LCD_COLS   (LCD_WIDTH / LCD_CELL_W)
#define LCD_ROWS   (LCD_HEIGHT / 8)

struct lcd {
    uint8_t pixel[LCD_HEIGHT][LCD_WIDTH];
};

void lcd_clear(struct lcd *lcd, int on);
void lcd_pixel(struct lcd *lcd, int x, int y, int on);
void lcd_hline(struct lcd *lcd, int x0, int x1, int y, int on);
void lcd_vline(struct lcd *lcd, int x, int y0, int y1, int on);
void lcd_rect(struct lcd *lcd, int x, int y, int w, int h, int on);
void lcd_char(struct lcd *lcd, int x, int y, char c, int on);
void lcd_text(struct lcd *lcd, int x, int y, const char *text, int on);
void lcd_textf(struct lcd *lcd, int x, int y, int on, const char *fmt, ...);

#endif
