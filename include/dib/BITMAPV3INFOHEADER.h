//
// Created by Michal_Marszalek on 02.04.2020.
//

#ifndef BMP_BITMAPV3INFOHEADER_H
#define BMP_BITMAPV3INFOHEADER_H

#include "dib/BITMAPV2INFOHEADER.h"

#pragma pack(push, 1)

struct BITMAPV3INFOHEADER : BITMAPV2INFOHEADER {
    uint32_t AlphaMask;

    static DIBHEADER load(FILE *);
};

#pragma pack(pop)

typedef BITMAPV3INFOHEADER AdobeVersion3WithAlpha;

static_assert(offsetof(BITMAPV3INFOHEADER, AlphaMask) == sizeof(BITMAPV2INFOHEADER), "Wrong alignment of data");
static_assert(sizeof(BITMAPV3INFOHEADER) == 56, "Wrong alignment of data");

#endif //BMP_BITMAPV3INFOHEADER_H
