//
// Created by Michal_Marszalek on 02.04.2020.
//

#ifndef BMP_BITMAP_M_V2INFOHEADER_H
#define BMP_BITMAP_M_V2INFOHEADER_H

#include "dib/BITMAP_M_INFOHEADER.h"

#pragma pack(push, 1)

struct BITMAP_M_V2INFOHEADER : BITMAP_M_INFOHEADER {
    uint32_t RedMask;
    uint32_t GreenMask;
    uint32_t BlueMask;

    static DIBHEADER load(FILE *);
};

#pragma pack(pop)

typedef BITMAP_M_V2INFOHEADER AdobeVersion3;

static_assert(offsetof(BITMAP_M_V2INFOHEADER, RedMask) == sizeof(BITMAP_M_INFOHEADER), "Wrong alignment of data");
static_assert(sizeof(BITMAP_M_V2INFOHEADER) == 52, "Wrong alignment of data");

#endif //BMP_BITMAP_M_V2INFOHEADER_H
