//
// Created by Michal_Marszalek on 06.04.2020.
//

#include <include/dib/DIBHEADER.h>
#include <map>
#include <include/dib/BITMAPCOREHEADER.h>
#include <include/dib/OS22XBITMAPHEADER.h>
#include <include/dib/BITMAPINFOHEADER.h>
#include <include/dib/BITMAPV2INFOHEADER.h>
#include <include/dib/BITMAPV3INFOHEADER.h>
#include <include/dib/BITMAPV4HEADER.h>
#include <include/dib/BITMAPV5HEADER.h>

/*
template<typename T>
void printf_binary(T v) {
    std::make_unsigned_t<T> n = v;
    int l = sizeof(T) * 8;
    for (int i = l - 1; i >= 0; --i) {
        uint32_t ui = i;
        printf("%x", (n >> ui) & 1u);
    }
}*/

template<typename T>
std::string printf_binary(T v) {
    std::string result;
    std::make_unsigned_t<T> n = v;
    int l = sizeof(T) * 8;
    for (int i = l - 1; i >= 0; --i) {
        uint32_t ui = i;
        result += ((n >> ui) & 1u) ? '1' : '0';
    }

    int max_one = l - 1;
    for (; max_one >= 0; --max_one) {
        uint32_t ui = max_one;
        if ((n >> ui) & 1u) {
            break;
        }
    }

    int min_one = 0;
    for (; min_one < l; ++min_one) {
        uint32_t ui = min_one;
        if ((n >> ui) & 1u) {
            break;
        }
    }

    if (max_one != -1) {
        result += '-' + std::to_string(max_one + 1 - min_one);
    } else {
        result += "-0";
    }

    return result;
}

std::ostream &operator<<(std::ostream &l, const DIBHEADER &dib) {
    l << "dibSize: " << dib.dibSize << "-";
    {
        std::map<uint32_t, std::string> size_type_string = {
                {sizeof(BITMAPCOREHEADER),   "BITMAPCOREHEADER"},
                {sizeof(OS22XBITMAPHEADER),  "OS22XBITMAPHEADER"},
                {16,                         "OS22XBITMAPHEADER-LITTLE"},
                {sizeof(BITMAPINFOHEADER),   "BITMAPINFOHEADER"},
                {sizeof(BITMAPV2INFOHEADER), "BITMAPV2INFOHEADER"},
                {sizeof(BITMAPV3INFOHEADER), "BITMAPV3INFOHEADER"},
                {sizeof(BITMAPV4HEADER),     "BITMAPV4HEADER"},
                {sizeof(BITMAPV5HEADER),     "BITMAPV5HEADER"},
        };
        l << size_type_string[dib.dibSize] << std::endl;
    }

    l << "width: " << dib.width << std::endl;
    l << "height: " << dib.height << std::endl;
    l << "planesNumber: " << dib.planesNumber << std::endl;
    l << "bitsPerPixel: " << dib.bitsPerPixel << std::endl;

    if (dib.dibSize == sizeof(BITMAPCOREHEADER)) { return l; }
    if (dib.dibSize == 16) { return l; }    //os22-little

    l << "compressionType: " << static_cast<uint32_t >(dib.compressionType) << "-";
    {
        std::map<BmpCompression, std::string> compresion_type_string = {
                {BmpCompression::BI_RGB,            "BI_RGB"},
                {BmpCompression::BI_RLE8,           "BI_RLE8"},
                {BmpCompression::BI_RLE4,           "BI_RLE4"},
                {BmpCompression::BI_BITFIELDS,      "BI_BITFIELDS"},
                {BmpCompression::BI_JPEG,           "BI_JPEG"},
                {BmpCompression::BI_PNG,            "BI_PNG"},
                {BmpCompression::BI_ALPHABITFIELDS, "BI_ALPHABITFIELDS"},
                {BmpCompression::BI_CMYK,           "BI_CMYK "},
                {BmpCompression::BI_CMYKRLE8,       "BI_CMYKRLE8 "},
                {BmpCompression::BI_CMYKRLE4,       "BI_CMYKRLE4 "},
                {BmpCompression::RLE_24,            "RLE_24"},
                {BmpCompression::Huffman,           "Huffman"},
        };
        l << compresion_type_string[dib.compressionType] << std::endl;
    }

    l << "rawImageSize: " << dib.rawImageSize << std::endl;
    l << "XPixelsPerM: " << dib.XPixelsPerM << std::endl;
    l << "YPixelsPerM: " << dib.YPixelsPerM << std::endl;
    l << "paletteColorsNumber: " << dib.paletteColorsNumber << std::endl;
    l << "importantColors: " << dib.importantColors << std::endl;

    if (dib.dibSize == sizeof(BITMAPINFOHEADER) && dib.compressionType != BmpCompression::BI_BITFIELDS &&
        dib.compressionType != BmpCompression::BI_ALPHABITFIELDS) {
        return l;
    }

    if (dib.dibSize == sizeof(OS22XBITMAPHEADER)) {
        goto os22;
    }

    l << "RedMask:   " << printf_binary(dib.RedMask) << std::endl;
    l << "GreenMask: " << printf_binary(dib.GreenMask) << std::endl;
    l << "BlueMask:  " << printf_binary(dib.BlueMask) << std::endl;

    if (dib.dibSize == sizeof(BITMAPINFOHEADER) && dib.compressionType != BmpCompression::BI_ALPHABITFIELDS) {
        return l;
    }
    if (dib.dibSize == sizeof(BITMAPV2INFOHEADER)) {
        return l;
    }

    l << "AlphaMask: " << printf_binary(dib.AlphaMask) << std::endl;

    if (dib.dibSize == sizeof(BITMAPINFOHEADER)) {
        return l;
    }
    if (dib.dibSize == sizeof(BITMAPV3INFOHEADER)) {
        return l;
    }

    l << "CSType: " << dib.CSType << std::endl;
    l << "RedX: " << dib.RedX << std::endl;
    l << "RedY: " << dib.RedY << std::endl;
    l << "RedZ: " << dib.RedZ << std::endl;
    l << "GreenX: " << dib.GreenX << std::endl;
    l << "GreenY: " << dib.GreenY << std::endl;
    l << "GreenZ: " << dib.GreenZ << std::endl;
    l << "BlueX: " << dib.BlueX << std::endl;
    l << "BlueY: " << dib.BlueY << std::endl;
    l << "BlueZ: " << dib.BlueZ << std::endl;
    l << "GammaRed: " << dib.GammaRed << std::endl;
    l << "GammaGreen: " << dib.GammaGreen << std::endl;
    l << "GammaBlue: " << dib.GammaBlue << std::endl;

    if (dib.dibSize == sizeof(BITMAPV4HEADER)) {
        return l;
    }

    l << "Intent: " << dib.Intent << std::endl;
    l << "ProfileData: " << dib.ProfileData << std::endl;
    l << "ProfileSize: " << dib.ProfileSize << std::endl;
    l << "Reserved: " << dib.Reserved << std::endl;

    return l;
    os22:

    l << "units: " << dib.units << std::endl;
    l << "padding: " << dib.padding << std::endl;
    l << "recordingOrder: " << dib.recordingOrder << std::endl;
    l << "renderingAlgorithm: " << dib.renderingAlgorithm << std::endl;
    l << "halftoning1: " << dib.halftoning1 << std::endl;
    l << "halftoning2: " << dib.halftoning2 << std::endl;
    l << "colorEncoding: " << dib.colorEncoding << std::endl;
    l << "applicationIdentifier: " << dib.applicationIdentifier << std::endl;

    return l;
}

