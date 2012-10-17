#ifndef VS_RAW_SOURCE_H
#define VS_RAW_SOURCE_H

#define VS_RAWS_VERSION "0.2.0"

#ifdef __MINGW32__
#define rs_fseek fseeko64
#define rs_ftell ftello64
#endif

#include <stdio.h>

#ifndef rs_fseek
#define _FILE_OFFSET_BITS 64
#define rs_fseek fseek
#define rs_ftell ftell
#endif

#include <stdlib.h>
#include <sys/stat.h>
#include <string.h>
#include <stdarg.h>
#include <inttypes.h>

#ifdef __MINGW32__
#   if __MSVCRT_VERSION__ < 0x0700
#   undef __MSVCRT_VERSION__
#   define __MSVCRT_VERSION__ 0x0700
#   endif
#include <malloc.h>
#endif

typedef struct {
    uint32_t header_size;
    int32_t width;
    int32_t height;
    uint16_t num_planes;
    uint16_t bits_per_pixel;
    uint32_t fourcc;
    uint32_t image_size;
    int32_t pix_per_meter_h;
    int32_t pix_per_meter_v;
    uint32_t num_palette;
    uint32_t indx_palette;
} bmp_info_header_t;


#endif /* VS_RAW_SOURCE_H */
