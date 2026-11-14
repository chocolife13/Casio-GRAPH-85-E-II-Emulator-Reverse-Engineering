#include "png_load.h"

#include <png.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

SDL_Texture *load_png_texture(SDL_Renderer *renderer, const char *path,
                              int *width, int *height)
{
    FILE *fp;
    png_byte header[8];
    png_structp png;
    png_infop info;
    png_uint_32 w, h;
    png_size_t rowbytes;
    int color_type, bit_depth;
    png_bytep *rows = NULL;
    SDL_Surface *surface;
    SDL_Texture *texture;

    fp = fopen(path, "rb");
    if (!fp) {
        fprintf(stderr, "graph85: cannot open %s\n", path);
        return NULL;
    }
    if (fread(header, 1, sizeof(header), fp) != sizeof(header) ||
        png_sig_cmp(header, 0, sizeof(header))) {
        fprintf(stderr, "graph85: %s is not a PNG file\n", path);
        fclose(fp);
        return NULL;
    }

    png = png_create_read_struct(PNG_LIBPNG_VER_STRING, NULL, NULL, NULL);
    if (!png) {
        fclose(fp);
        return NULL;
    }
    info = png_create_info_struct(png);
    if (!info) {
        png_destroy_read_struct(&png, NULL, NULL);
        fclose(fp);
        return NULL;
    }
    if (setjmp(png_jmpbuf(png))) {
        png_destroy_read_struct(&png, &info, NULL);
        fclose(fp);
        free(rows);
        return NULL;
    }

    png_init_io(png, fp);
    png_set_sig_bytes(png, sizeof(header));
    png_read_info(png, info);
    png_get_IHDR(png, info, &w, &h, &bit_depth, &color_type, NULL, NULL, NULL);

    if (color_type == PNG_COLOR_TYPE_PALETTE)
        png_set_palette_to_rgb(png);
    if (color_type == PNG_COLOR_TYPE_GRAY && bit_depth < 8)
        png_set_expand_gray_1_2_4_to_8(png);
    if (png_get_valid(png, info, PNG_INFO_tRNS))
        png_set_tRNS_to_alpha(png);
    if (bit_depth == 16)
        png_set_strip_16(png);
    if (color_type == PNG_COLOR_TYPE_GRAY ||
        color_type == PNG_COLOR_TYPE_GRAY_ALPHA)
        png_set_gray_to_rgb(png);
    if (!(color_type & PNG_COLOR_MASK_ALPHA) &&
        !png_get_valid(png, info, PNG_INFO_tRNS))
        png_set_add_alpha(png, 0xff, PNG_FILLER_AFTER);

    png_read_update_info(png, info);
    png_get_IHDR(png, info, &w, &h, &bit_depth, &color_type, NULL, NULL, NULL);
    rowbytes = png_get_rowbytes(png, info);

    rows = malloc(sizeof(png_bytep) * h);
    if (!rows) {
        png_destroy_read_struct(&png, &info, NULL);
        fclose(fp);
        return NULL;
    }
    for (png_uint_32 y = 0; y < h; y++) {
        rows[y] = malloc(rowbytes);
        if (!rows[y]) {
            for (png_uint_32 i = 0; i < y; i++)
                free(rows[i]);
            free(rows);
            png_destroy_read_struct(&png, &info, NULL);
            fclose(fp);
            return NULL;
        }
    }
    png_read_image(png, rows);
    png_read_end(png, NULL);
    png_destroy_read_struct(&png, &info, NULL);
    fclose(fp);

    surface = SDL_CreateRGBSurfaceWithFormat(0, (int)w, (int)h, 32,
                                             SDL_PIXELFORMAT_RGBA32);
    if (!surface) {
        for (png_uint_32 y = 0; y < h; y++)
            free(rows[y]);
        free(rows);
        return NULL;
    }
    for (png_uint_32 y = 0; y < h; y++) {
        memcpy((Uint8 *)surface->pixels + (size_t)y * surface->pitch,
               rows[y], rowbytes);
        free(rows[y]);
    }
    free(rows);

    texture = SDL_CreateTextureFromSurface(renderer, surface);
    SDL_FreeSurface(surface);
    if (width)
        *width = (int)w;
    if (height)
        *height = (int)h;
    return texture;
}
