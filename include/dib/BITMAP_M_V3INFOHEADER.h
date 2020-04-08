//
// Created by Michal_Marszalek on 02.04.2020.
//

#ifndef BMP_BITMAP_M_V3INFOHEADER_H
#define BMP_BITMAP_M_V3INFOHEADER_H

#include "dib/BITMAP_M_V2INFOHEADER.h"

#pragma pack(push, 1)

struct BITMAP_M_V3INFOHEADER : BITMAP_M_V2INFOHEADER {
    uint32_t AlphaMask;

    static DIBHEADER load(FILE *);
};

#pragma pack(pop)

typedef BITMAP_M_V3INFOHEADER AdobeVersion3WithAlpha;

static_assert(offsetof(BITMAP_M_V3INFOHEADER, AlphaMask) == sizeof(BITMAP_M_V2INFOHEADER), "Wrong alignment of data");
static_assert(sizeof(BITMAP_M_V3INFOHEADER) == 56, "Wrong alignment of data");

#endif //BMP_BITMAP_M_V3INFOHEADER_H
