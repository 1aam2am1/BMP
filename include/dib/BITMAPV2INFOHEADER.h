//
// Created by Michal_Marszalek on 02.04.2020.
//

#ifndef BMP_BITMAPV2INFOHEADER_H
#define BMP_BITMAPV2INFOHEADER_H

#include "dib/BITMAPINFOHEADER.h"

#pragma pack(push, 1)

struct BITMAPV2INFOHEADER : BITMAPINFOHEADER {
    uint32_t RedMask;
    uint32_t GreenMask;
    uint32_t BlueMask;

    static DIBHEADER load(FILE *);
};

#pragma pack(pop)

typedef BITMAPV2INFOHEADER AdobeVersion3;

static_assert(offsetof(BITMAPV2INFOHEADER, RedMask) == sizeof(BITMAPINFOHEADER), "Wrong alignment of data");
static_assert(sizeof(BITMAPV2INFOHEADER) == 52, "Wrong alignment of data");

#endif //BMP_BITMAPV2INFOHEADER_H
