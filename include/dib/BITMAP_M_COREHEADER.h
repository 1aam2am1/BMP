//
// Created by Michal_Marszalek on 02.04.2020.
//

#ifndef BMP_BITMAP_M_COREHEADER_H
#define BMP_BITMAP_M_COREHEADER_H

#include <cstdio>
#include <cstdint>
#include "DIBHEADER.h"

#pragma pack(push, 1)

struct BITMAP_M_COREHEADER {
    uint32_t dibSize;
    int16_t width;         //uint16_t   OS21XBITMAPHEADER
    int16_t height;        //uint16_t   OS21XBITMAPHEADER
    uint16_t planesNumber;
    uint16_t bitsPerPixel;

    static DIBHEADER load(FILE *);
};

#pragma pack(pop)

typedef BITMAP_M_COREHEADER OS21XBITMAPHEADER;

static_assert(sizeof(BITMAP_M_COREHEADER) == 12, "Wrong alignment of data");

#endif //BMP_BITMAP_M_COREHEADER_H
