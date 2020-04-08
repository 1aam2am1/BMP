//
// Created by Michal_Marszalek on 02.04.2020.
//

#ifndef BMP_OS22XBITMAP_M_HEADER_H
#define BMP_OS22XBITMAP_M_HEADER_H

#include "dib/BITMAP_M_INFOHEADER.h"
#include "DIBHEADER.h"

#pragma pack(push, 1)

struct OS22XBITMAP_M_HEADER : BITMAP_M_INFOHEADER {
    uint16_t units;
    uint16_t padding;
    uint16_t recordingOrder;
    uint16_t renderingAlgorithm; ///halftoning
    uint32_t halftoning1;
    uint32_t halftoning2;
    uint32_t colorEncoding;
    uint32_t applicationIdentifier;

    static DIBHEADER load(FILE *);
};

#pragma pack(pop)

static_assert(offsetof(OS22XBITMAP_M_HEADER, units) == sizeof(BITMAP_M_INFOHEADER), "Wrong alignment of data");
static_assert(sizeof(OS22XBITMAP_M_HEADER) == 64, "Wrong alignment of data");


#endif //BMP_OS22XBITMAP_M_HEADER_H
