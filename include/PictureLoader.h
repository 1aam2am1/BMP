//
// Created by Michal_Marszalek on 02.04.2020.
//

#ifndef BMP_PICTURELOADER_H
#define BMP_PICTURELOADER_H


#include "BMP.h"
#include <memory>

class PictureLoader {
public:
    ///
    /// \param name Name of file
    /// \param decrypt 0-none, 1-rsa, 2-cbc
    /// \return
    static std::shared_ptr<BMP> load(const std::string &name, int decrypt = 0);

    static sf::Texture createPicture(const std::shared_ptr<const BMP> &);

    ///
    /// \param t Texture
    /// \param name Name of file
    /// \param encrypt 0-none, 1-rsa, 2-cbc
    static void savePicture(const sf::Texture &t, const std::string &name, int encrypt = 0);

private:
    static sf::Texture ReadRgb32Slow(std::shared_ptr<const BMP>);

    static sf::Texture ReadRgbPalette(std::shared_ptr<const BMP>);

    static sf::Texture ReadRle4(std::shared_ptr<const BMP>);

    static sf::Texture ReadRle8(std::shared_ptr<const BMP>);

    static sf::Texture
    ReadBitFields(std::shared_ptr<const BMP>, uint32_t RedMaskDef = 0xFF0000u, uint32_t GreenMaskDef = 0xFF00u,
                  uint32_t BlueMaskDef = 0xFFu, uint32_t AlphaMaskDef = 0);

    static sf::Texture ReadRle24(std::shared_ptr<const BMP>);

    static uint32_t CalculateRightShift(uint32_t);

    static uint32_t CountBits(uint32_t);

    static std::vector<uint32_t> getUncompressedPixel32(const std::shared_ptr<const BMP> &);
};


#endif //BMP_PICTURELOADER_H
