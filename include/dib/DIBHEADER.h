//
// Created by Michal_Marszalek on 03.04.2020.
//

#ifndef BMP_DIBHEADER_H
#define BMP_DIBHEADER_H

#include <cstdint>
#include <include/BmpCompression.h>
#include <ostream>

struct DIBHEADER {
    /**COREHEADER*/
    uint32_t dibSize;
    int32_t width;          ///int16_t
    int32_t height;         ///int16_t
    uint16_t planesNumber;
    uint16_t bitsPerPixel;
    /**v1*/
    BmpCompression compressionType;
    uint32_t rawImageSize;
    int32_t XPixelsPerM;
    int32_t YPixelsPerM;
    uint32_t paletteColorsNumber;
    uint32_t importantColors;
    /**v2*/
    uint32_t RedMask;
    uint32_t GreenMask;
    uint32_t BlueMask;
    /**v3*/
    uint32_t AlphaMask;
    /**v4*/
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
    /**v5*/
    uint32_t Intent;
    uint32_t ProfileData;
    uint32_t ProfileSize;
    uint32_t Reserved;

    /**v1 + os22*/
    uint16_t units;
    uint16_t padding;
    uint16_t recordingOrder;
    uint16_t renderingAlgorithm; ///halftoning
    uint32_t halftoning1;
    uint32_t halftoning2;
    uint32_t colorEncoding;
    uint32_t applicationIdentifier;
};

std::ostream &operator<<(std::ostream &, const DIBHEADER &);

#endif //BMP_DIBHEADER_H
