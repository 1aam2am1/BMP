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

    static sf::Texture createPicture(std::shared_ptr<const BMP>);
};


#endif //BMP_PICTURELOADER_H
