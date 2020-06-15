//
// Created by Michal_Marszalek on 10.06.2020.
//

#include "Encryption.h"
#include "InitEn.h"
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

std::list<uint8_t> getPart(std::list<uint8_t> &data, uint32_t size) {
    std::list<uint8_t> result;

    while (size--) {
        uint8_t l = 0;

        if (!data.empty()) {
            l = data.front();
            data.pop_front();
        }

        result.push_back(l);
    }

    return result;
}

std::list<uint8_t> getPartS(const std::list<uint8_t> &data, uint32_t size) {
    std::list<uint8_t> result;

    auto it = data.begin();

    while (size--) {
        uint8_t l = 0;

        if (it != data.end()) {
            l = *it;
            it++;
        }

        result.push_back(l);
    }

    return result;
}

template<class InputIt1, class InputIt2>
void xorList(InputIt1 begin1, InputIt1 end1, InputIt2 begin2, InputIt2 end2) {
    while (begin1 != end1 && begin2 != end2) {
        *begin1 ^= *begin2;

        ++begin1;
        ++begin2;
    }

    if (begin1 != end1 || begin2 != end2) {
        throw std::runtime_error("Wrong xor length");
    }
}

template<class InputIt1, class InputIt2>
void xorList(InputIt1 &l1, InputIt2 &l2) {
    xorList(l1.begin(), l1.end(), l2.begin(), l2.end());
}

NTL::ZZ getChunk(std::list<uint8_t> &data, uint32_t size) {
    NTL::ZZ result(0);

    while (size--) {
        uint8_t l = 0;

        if (!data.empty()) {
            l = data.front();
            data.pop_front();
        }

        result *= 256;
        result += l;
    }

    return result;
}

template<class InputIt>
void saveChunk(InputIt &s, NTL::ZZ z, uint32_t size) {
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

std::vector<uint8_t> make(std::vector<uint8_t> t, const NTL::ZZ &e, const NTL::ZZ &m, uint32_t read, uint32_t write) {
    std::vector<uint8_t> result;

    std::list<uint8_t> v;
    v.insert(v.begin(), t.begin(), t.end());

    while (!v.empty()) {
        auto ch = getChunk(v, read);

        NTL::ZZ z;

        z = NTL::PowerMod(ch, e, m);

        saveChunk(result, z, write);
    }


    return result;
}

std::vector<uint8_t> Encryption::encrypt(std::vector<uint8_t> t) {
    const NTL::ZZ e = number(key, "Exponent");
    const NTL::ZZ m = number(key, "Modulus");
    uint32_t keySize = key.get_BitLength() / 8;

    return make(std::move(t), e, m, keySize - 1, keySize);
}

std::vector<uint8_t> Encryption::decrypt(std::vector<uint8_t> t) {
    const NTL::ZZ d = number(key, "D");
    const NTL::ZZ m = number(key, "Modulus");
    uint32_t keySize = key.get_BitLength() / 8;

    return make(std::move(t), d, m, keySize, keySize - 1);
}

std::vector<uint8_t> Encryption::CBCencrypt(std::vector<uint8_t> t) {
    const NTL::ZZ e = number(key, "Exponent");
    const NTL::ZZ m = number(key, "Modulus");
    uint32_t keySize = key.get_BitLength() / 8;

    std::vector<uint8_t> result;

    std::list<uint8_t> v;
    v.insert(v.begin(), t.begin(), t.end());

    auto x = getPartS(EncryptionInit, keySize - 1);

    while (!v.empty()) {
        auto c = getPart(v, keySize - 1);

        xorList(c, x);

        auto ch = getChunk(c, keySize - 1);

        NTL::ZZ z;

        z = NTL::PowerMod(ch, e, m);

        x.clear();
        saveChunk(x, z, keySize);
        x.pop_front();

        saveChunk(result, z, keySize);
    }


    return result;
}

std::vector<uint8_t> Encryption::CBCdecrypt(std::vector<uint8_t> t) {
    const NTL::ZZ d = number(key, "D");
    const NTL::ZZ m = number(key, "Modulus");
    uint32_t keySize = key.get_BitLength() / 8;

    std::vector<uint8_t> result;
    std::vector<uint8_t> c;

    std::list<uint8_t> v;
    v.insert(v.begin(), t.begin(), t.end());

    auto x = getPartS(EncryptionInit, keySize - 1);

    while (!v.empty()) {
        auto x2 = getPartS(v, keySize);
        x2.pop_front();

        auto ch = getChunk(v, keySize);

        NTL::ZZ z;

        z = NTL::PowerMod(ch, d, m);

        c.clear();
        saveChunk(c, z, keySize - 1);

        xorList(c, x);
        x = x2;

        std::copy(c.begin(), c.end(), std::back_inserter(result));
    }


    return result;
}

uint32_t Encryption::getDecryptSize(uint32_t sizeOfRawImage) {
    uint32_t keySize = key.get_BitLength() / 8;

    uint32_t readMessagesSize = keySize - 1;

    uint32_t sizeEn = keySize * ((sizeOfRawImage + readMessagesSize - 1) / readMessagesSize);

    return sizeEn;
}
