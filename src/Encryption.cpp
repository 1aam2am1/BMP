//
// Created by Michal_Marszalek on 10.06.2020.
//

#include "Encryption.h"
#include <NTL/ZZ.h>
#include <list>
#include <utility>

CkPrivateKey Encryption::key;

template<class C>
NTL::ZZ number(C &key, const std::string &path) {
    CkXml xml;
    xml.LoadXml(key.getXml());
    const char *modulus = xml.getChildContent(path.c_str());
    CkBinData binDat;
    binDat.AppendEncoded(modulus, "base64");

    return NTL::conv<NTL::ZZ>(binDat.encoded("decimal"));
}

NTL::ZZ getChunk(std::list<uint8_t> &data, uint32_t size) {
    NTL::ZZ result(0);

    while (size--) {
        uint8_t l = 0;

        l = data.front();
        data.pop_front();

        result *= 256;
        result += l;
    }

    return result;
}

void saveChunk(std::vector<uint8_t> &s, NTL::ZZ z, uint32_t size) {
    std::vector<uint8_t> r;

    while (size--) {
        uint8_t l = z % 256;

        z /= 256;

        r.push_back(l);
    }

    if (z != 0) {
        throw std::runtime_error("Should be zero when saving chunk");
    }

    std::reverse_copy(r.begin(), r.end(), std::back_inserter(s));
}

std::vector<uint8_t> make(std::vector<uint8_t> t, const NTL::ZZ &e, const NTL::ZZ &m, uint32_t keySize) {
    std::vector<uint8_t> result;

    std::list<uint8_t> v;
    v.insert(v.begin(), t.begin(), t.end());

    while (!v.empty()) {
        auto ch = getChunk(v, keySize);

        NTL::ZZ z;

        z = NTL::PowerMod(ch % m, e, m);

        saveChunk(result, z, keySize);
    }


    return result;
}

std::vector<uint8_t> Encryption::encrypt(std::vector<uint8_t> t) {
    const NTL::ZZ e = number(key, "Exponent");
    const NTL::ZZ m = number(key, "Modulus");
    uint32_t keySize = key.get_BitLength() / 8;

    return make(std::move(t), e, m, keySize);
}

std::vector<uint8_t> Encryption::decrypt(std::vector<uint8_t> t) {
    const NTL::ZZ d = number(key, "D");
    const NTL::ZZ m = number(key, "Modulus");
    uint32_t keySize = key.get_BitLength() / 8;

    return make(std::move(t), d, m, keySize);
}
