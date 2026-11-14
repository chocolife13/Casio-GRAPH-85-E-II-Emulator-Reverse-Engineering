/* Small native calculator engine used by the SDL front-end.
 *
 * This is a clean-room reimplementation of the GRAPH 85 user experience,
 * not a port of the original CASIO operating system (see README.md). */
#ifndef GRAPH85_CALC_H
#define GRAPH85_CALC_H

#include <stddef.h>

#include "lcd.h"

enum page {
    PAGE_BOOT,
    PAGE_MENU,
    PAGE_RUN,
    PAGE_GRAPH,
    PAGE_ABOUT,
    PAGE_MESSAGE
};

struct calc {
    enum page page;
    char input[80];
    size_t len;
    char result[32];
    double ans;
    int error;
    int menu_sel;
    char graph[80];
    size_t graph_len;
    int graph_plot;
    char message[80];
    int shift;
    int alpha;
};

void calc_init(struct calc *calc);
void calc_key(struct calc *calc, int key);
void calc_draw(const struct calc *calc, struct lcd *lcd);

#endif
