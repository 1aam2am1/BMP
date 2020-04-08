//
// Created by Michal_Marszalek on 03.04.2020.
//

#ifndef BMP_BMPCOMPRESSION_H
#define BMP_BMPCOMPRESSION_H

#include <cstdint>

enum class BmpCompression : uint32_t {
    BI_RGB = 0,
    BI_RLE8 = 1,
    BI_RLE4 = 2,
    BI_BITFIELDS = 3,
    BI_JPEG = 4,
    BI_PNG = 5,
    BI_ALPHABITFIELDS = 6,
    BI_CMYK = 11,
    BI_CMYKRLE8 = 12,
    BI_CMYKRLE4 = 13,

    /**OS22XBITMAP_M_HEADER*/
    RLE_24 = 100, ///4
    Huffman = 101, ///3
};

#endif //BMP_BMPCOMPRESSION_H
