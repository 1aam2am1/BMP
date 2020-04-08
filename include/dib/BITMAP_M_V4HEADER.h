//
// Created by Michal_Marszalek on 02.04.2020.
//

#ifndef BMP_BITMAP_M_V4HEADER_H
#define BMP_BITMAP_M_V4HEADER_H

#include "dib/BITMAP_M_V3INFOHEADER.h"

#pragma pack(push, 1)

struct BITMAP_M_V4HEADER : BITMAP_M_V3INFOHEADER {
    uint32_t CSType;        /* Color space type */
    int32_t RedX;          /* X coordinate of red endpoint */
    int32_t RedY;          /* Y coordinate of red endpoint */
    int32_t RedZ;          /* Z coordinate of red endpoint */
    int32_t GreenX;        /* X coordinate of green endpoint */
    int32_t GreenY;        /* Y coordinate of green endpoint */
    int32_t GreenZ;        /* Z coordinate of green endpoint */
    int32_t BlueX;         /* X coordinate of blue endpoint */
    int32_t BlueY;         /* Y coordinate of blue endpoint */
    int32_t BlueZ;         /* Z coordinate of blue endpoint */
    uint32_t GammaRed;      /* Gamma red coordinate scale value */
    uint32_t GammaGreen;    /* Gamma green coordinate scale value */
    uint32_t GammaBlue;     /* Gamma blue coordinate scale value */

    static DIBHEADER load(FILE *);
};

#pragma pack(pop)

static_assert(offsetof(BITMAP_M_V4HEADER, CSType) == sizeof(BITMAP_M_V3INFOHEADER), "Wrong alignment of data");
static_assert(sizeof(BITMAP_M_V4HEADER) == 108, "Wrong alignment of data");

#endif //BMP_BITMAP_M_V4HEADER_H
