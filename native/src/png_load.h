#ifndef GRAPH85_PNG_LOAD_H
#define GRAPH85_PNG_LOAD_H

#include <SDL.h>

/* Load a PNG file into an RGBA texture. Returns NULL on error. */
SDL_Texture *load_png_texture(SDL_Renderer *renderer, const char *path,
                              int *width, int *height);

#endif
