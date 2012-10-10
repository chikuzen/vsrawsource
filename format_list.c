/*
  format_list.c:

  This file is a part of vsrawsource

  Copyright (C) 2012  Oka Motofumi

  Author: Oka Motofumi (chikuzen.mo at gmail dot com)

  This program is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with Libav; if not, write to the Free Software
  Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA
*/

#include <stdio.h>
#include "VapourSynth.h"

void VS_CC
show_format_list(const VSMap *in, VSMap *out, void *user_data, VSCore *core,
                 const VSAPI *vsapi)
{
    const char *format_list =
        "vsrawsource -- all support format names\n\n"
        "GrayScale 8bit format:\n"
        "    GRAY8, Y8, Y800\n"
        "GrayScale 16bit format(little endian):\n"
        "    GRAY16\n"
        "YUV4:2:0 8bit planar format:\n"
        "    YUV420P8, I420, IYUV, YV12, NV12, NV21\n"
        "YUV4:2:2 8bit planar format:\n"
        "    YUV422P8, I422, YV16\n"
        "YUV4:4:4 8bit planar format:\n"
        "    YUV444P8, I444, YV24\n"
        "YUV4:1:1 8bit planar format:\n"
        "    YUV411P8, YV411\n"
        "YUV4:1:0 8bit planar format:\n"
        "    YUV420P8, YUV9, YVU9\n"
        "YUV4:4:0 8bit planar format:\n"
        "    YUV440P8\n"
        "YUV4:2:0 9bit planar format(little endian):\n"
        "    YUV420P9\n"
        "YUV4:2:2 9bit planar format(little endian):\n"
        "    YUV422P9\n"
        "YUV4:4:4 9bit planar format(little endian):\n"
        "    YUV444P10\n"
        "YUV4:2:0 10bit planar format(little endian):\n"
        "    YUV420P10\n"
        "YUV4:2:2 10bit planar format(little endian):\n"
        "    YUV422P10\n"
        "YUV4:4:4 10bit planar format(little endian):\n"
        "    YUV444P10\n"
        "YUV4:2:0 16bit planar format(little endian):\n"
        "    YUV420P16, P010, P016\n"
        "YUV4:2:2 16bit planar format(little endian):\n"
        "    YUV422P16, P210, P216\n"
        "YUV4:4:4 16bit planar format(little endian):\n"
        "    YUV444P16\n"
        "RGB 8bit planar format:\n"
        "    RGBP8, GBRP8\n"
        "RGB 9bit planar format(little endian)\n"
        "    RGBP9, GBRP9\n"
        "RGB 10bit planar format(little endian)\n"
        "    RGBP10, GBRP10\n"
        "RGB 16bit planar format(little endian)\n"
        "    RGBP16, GBRP16\n"
        "YUV4:2:2 8bit packed format:\n"
        "    YUY2, YUYV, UYVY, YVYU, VYUV\n"
        "RGB 8bit packed format:\n"
        "    RGB, BGR, RGBA, ARGB, BGRA, ABGR\n"
        "RGB 16bit packed format:\n"
        "    RGB48, BGR48\n\n"
        "note: all alpha channel data will be lost.\n\n";
    fprintf(stdout, "%s", format_list);
}
