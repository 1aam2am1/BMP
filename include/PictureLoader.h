//
// Created by Michal_Marszalek on 02.04.2020.
//

#ifndef BMP_PICTURELOADER_H
#define BMP_PICTURELOADER_H


#include "BMP.h"
#include <memory>

class PictureLoader {
public:
    static std::shared_ptr<BMP> load(const std::string &name);

    static sf::Texture createPicture(const std::shared_ptr<const BMP> &);

private:
    static sf::Texture ReadRgb32Slow(std::shared_ptr<const BMP>);

    static sf::Texture ReadRgb32Fast(std::shared_ptr<const BMP>);

    static sf::Texture ReadRgb24(std::shared_ptr<const BMP>);

    static sf::Texture ReadRgb16(std::shared_ptr<const BMP>);

    static sf::Texture ReadRgbPalette(std::shared_ptr<const BMP>);

    static sf::Texture ReadRle(std::shared_ptr<const BMP>);

    static sf::Texture ReadBitFields(std::shared_ptr<const BMP>);

    static sf::Texture ReadRle24(std::shared_ptr<const BMP>);

    static uint32_t CalculateRightShift(uint32_t);

    static uint32_t CountBits(uint32_t);

    static std::vector<uint32_t> getUncompressedPixel32(const std::shared_ptr<const BMP> &);
};


#endif //BMP_PICTURELOADER_H
