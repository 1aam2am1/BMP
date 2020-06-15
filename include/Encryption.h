//
// Created by Michal_Marszalek on 10.06.2020.
//

#ifndef BMP_ENCRYPTION_H
#define BMP_ENCRYPTION_H

#include <CkPrivateKey.h>
#include <CkXml.h>
#include <CkBinData.h>
#include <CkCert.h>
#include <CkPublicKey.h>
#include <extlibs/SFML/include/SFML/Graphics/Texture.hpp>
#include "BMP.h"

class Encryption {
public:
    static std::vector<uint8_t> encrypt(std::vector<uint8_t>);

    static std::vector<uint8_t> decrypt(std::vector<uint8_t>);

    static std::vector<uint8_t> CBCencrypt(std::vector<uint8_t>);

    static std::vector<uint8_t> CBCdecrypt(std::vector<uint8_t>);

    static uint32_t getDecryptSize(uint32_t);

    static CkPrivateKey key;
};


#endif //BMP_ENCRYPTION_H
