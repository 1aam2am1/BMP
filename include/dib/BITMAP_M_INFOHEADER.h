//
// Created by Michal_Marszalek on 02.04.2020.
//

#ifndef BMP_BITMAP_M_INFOHEADER_H
#define BMP_BITMAP_M_INFOHEADER_H

#include <cstdio>
#include <cstdint>
#include "DIBHEADER.h"

#pragma pack(push, 1)

struct BITMAP_M_INFOHEADER {
    uint32_t dibSize;
    int32_t width;
    int32_t height;
    uint16_t planesNumber;
    uint16_t bitsPerPixel;
    uint32_t compressionType;
    uint32_t rawImageSize;
    int32_t XPixelsPerM;
    int32_t YPixelsPerM;
    uint32_t paletteColorsNumber;
    uint32_t importantColors;

    static DIBHEADER load(FILE *);
};

#pragma pack(pop)

static_assert(sizeof(BITMAP_M_INFOHEADER) == 40, "Wrong alignment of data");

#endif //BMP_BITMAP_M_INFOHEADER_H
