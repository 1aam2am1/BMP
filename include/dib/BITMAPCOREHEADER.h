//
// Created by Michal_Marszalek on 02.04.2020.
//

#ifndef BMP_BITMAPCOREHEADER_H
#define BMP_BITMAPCOREHEADER_H

#include <cstdio>
#include <cstdint>
#include "DIBHEADER.h"

#pragma pack(push, 1)

struct BITMAPCOREHEADER {
    uint32_t dibSize;
    int16_t width;         //uint16_t   OS21XBITMAPHEADER
    int16_t height;        //uint16_t   OS21XBITMAPHEADER
    uint16_t planesNumber;
    uint16_t bitsPerPixel;

    static DIBHEADER load(FILE *);
};

#pragma pack(pop)

typedef BITMAPCOREHEADER OS21XBITMAPHEADER;

static_assert(sizeof(BITMAPCOREHEADER) == 12, "Wrong alignment of data");

#endif //BMP_BITMAPCOREHEADER_H
