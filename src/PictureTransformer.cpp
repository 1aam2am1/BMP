//
// Created by Michal_Marszalek on 08.04.2020.
//

#define _USE_MATH_DEFINES

#include <extlibs/SFML/include/SFML/Graphics/RenderTexture.hpp>
#include <extlibs/SFML/include/SFML/Graphics/Sprite.hpp>
#include <complex>
#include <cmath>
#include <GL/gl.h>
#include <GL/glext.h>
#include <iostream>
#include <extlibs/SFML/include/SFML/Window/Context.hpp>
#include "PictureTransformer.h"

PictureTransformer::PictureTransformer() {
    black_and_white_shader.loadFromFile("resources/black_and_white.frag", sf::Shader::Fragment);
    black_and_white_shader.setUniform("texture", sf::Shader::CurrentTexture);

    to_complex_shader.loadFromFile("resources/to_complex.frag", sf::Shader::Fragment);
    to_complex_shader.setUniform("texture", sf::Shader::CurrentTexture);

    f1D_shader.loadFromFile("resources/f1D.frag", sf::Shader::Fragment);
    f1D_shader.setUniform("texture", sf::Shader::CurrentTexture);
    f1D_shader.setUniform("forward", false);

    to_watch_shader.loadFromFile("resources/to_watch.frag", sf::Shader::Fragment);
    to_watch_shader.setUniform("texture", sf::Shader::CurrentTexture);

    to_log_amplitude_shader.loadFromFile("resources/to_log_amplitude.frag", sf::Shader::Fragment);
    to_log_amplitude_shader.setUniform("texture", sf::Shader::CurrentTexture);

    max_shader.loadFromFile("resources/max.frag", sf::Shader::Fragment);
    max_shader.setUniform("texture", sf::Shader::CurrentTexture);
}


sf::Texture PictureTransformer::toWhiteBlack(const sf::Texture &picture) {
    if (sf::Shader::isAvailable()) {
        sf::RenderTexture t0;
        t0.create(picture.getSize().x, picture.getSize().y);

        sf::Sprite s0(picture);
        t0.draw(s0, &black_and_white_shader);
        t0.display();

        return t0.getTexture();
    } else {
        sf::Image image;
        image = picture.copyToImage();

        auto size = image.getSize();

        for (uint32_t i = 0; i < size.y; ++i) {
            for (uint32_t j = 0; j < size.x; ++j) {
                auto color = image.getPixel(j, i);
                if (color.r != color.g || color.g != color.b) {
                    color.r = color.g = color.b = color.r * 0.299
                                                  + color.g * 0.587
                                                  + color.b * 0.114;

                    image.setPixel(j, i, color);
                }
            }
        }
        sf::Texture t0;
        t0.loadFromImage(image);
        return t0;
    }
}

void FastFourier1D(std::vector<std::complex<double>> &input, bool inverse) {
    std::vector<std::complex<double>> result;
    result.resize(input.size());
    for (uint32_t x = 0; x < input.size(); ++x) {
        std::complex<double> suma;
        for (uint32_t sx = 0; sx < input.size(); ++sx) {
            using namespace std::complex_literals;
            double dx = x;
            double dsx = sx;
            double sizex = input.size();

            if (inverse) {
                suma += input[sx] * std::exp(1i * 2.0 * M_PI * dx * dsx / sizex);
            } else {
                suma += input[sx] * std::exp(-1i * 2.0 * M_PI * dx * dsx / sizex);
            }
        }
        result[x] = suma;
    }
    input = std::move(result);
}

std::vector<std::vector<std::complex<double>>>
rotateVector(const std::vector<std::vector<std::complex<double>>> &input) {
    std::vector<std::vector<std::complex<double>>> result;
    {
        std::vector<std::complex<double>> tym;
        tym.resize(input.size());
        result.resize(input[0].size(), tym);
    }
    /*
    for (uint32_t y = 0; y < input[0].size(); ++y) {
        result[y].resize(input.size());
    }*/

    for (uint32_t x = 0; x < input.size(); ++x) {
        for (uint32_t y = 0; y < input[x].size(); ++y) {
            result[y][x] = input[x][y];
        }
    }

    return result;
}

template<typename Tag, typename Tag::type Member>
struct break_in_ {
    friend constexpr typename Tag::type break_in(Tag) {
        return Member;
    }
};

#define DEFINE_BREAK_IN(name, t, member)\
    struct name {\
        using type = t;\
        friend constexpr t break_in(name);\
    };\
    template struct break_in_<name, member>

DEFINE_BREAK_IN(actualSize, sf::Vector2u sf::Texture::*, &sf::Texture::m_actualSize);

#define glCheck(expr) do { expr; glCheckError(__FILE__, __LINE__, #expr); } while (false)

void glCheckError(const char *file, unsigned int line, const char *expression) {
    // Get the last error
    GLenum errorCode = glGetError();

    if (errorCode != GL_NO_ERROR) {
        std::string fileString = file;
        std::string error = "Unknown error";
        std::string description = "No description";

        // Decode the error code
        switch (errorCode) {
            case GL_INVALID_ENUM: {
                error = "GL_INVALID_ENUM";
                description = "An unacceptable value has been specified for an enumerated argument.";
                break;
            }

            case GL_INVALID_VALUE: {
                error = "GL_INVALID_VALUE";
                description = "A numeric argument is out of range.";
                break;
            }

            case GL_INVALID_OPERATION: {
                error = "GL_INVALID_OPERATION";
                description = "The specified operation is not allowed in the current state.";
                break;
            }

            case GL_STACK_OVERFLOW: {
                error = "GL_STACK_OVERFLOW";
                description = "This command would cause a stack overflow.";
                break;
            }

            case GL_STACK_UNDERFLOW: {
                error = "GL_STACK_UNDERFLOW";
                description = "This command would cause a stack underflow.";
                break;
            }

            case GL_OUT_OF_MEMORY: {
                error = "GL_OUT_OF_MEMORY";
                description = "There is not enough memory left to execute the command.";
                break;
            }

            case GL_INVALID_FRAMEBUFFER_OPERATION_EXT: {
                error = "GL_INVALID_FRAMEBUFFER_OPERATION";
                description = "The object bound to FRAMEBUFFER_BINDING is not \"framebuffer complete\".";
                break;
            }
        }

        // Log the error
        std::cout << "An internal OpenGL call failed in "
                  << fileString.substr(fileString.find_last_of("\\/") + 1) << "(" << line << ")."
                  << "\nExpression:\n   " << expression
                  << "\nError description:\n   " << error << "\n   " << description << "\n"
                  << std::endl;
    }
}

sf::Texture PictureTransformer::fourier(const sf::Texture &picture) {
    if (sf::Shader::isAvailable()) {
        return shader_fourier(picture);
    }
    sf::Image image;
    image = picture.copyToImage();

    //to complex
    std::vector<std::vector<std::complex<double>>> complex_image;
    complex_image.resize(image.getSize().y);

    for (uint32_t y = 0; y < image.getSize().y; ++y) {
        complex_image[y].resize(image.getSize().x);

        for (uint32_t x = 0; x < image.getSize().x; ++x) {
            complex_image[y][x] = image.getPixel(x, y).r;
        }
    }

    //cout << "Transform to complex" << endl;

    for (auto &i : complex_image)
        FastFourier1D(i, false);

    complex_image = rotateVector(complex_image);

    for (auto &i : complex_image)
        FastFourier1D(i, false);

    complex_image = rotateVector(complex_image);

    //from complex
    double max_complex = 0;
    std::vector<double> pixel_before;
    for (uint32_t y = 0; y < image.getSize().y; ++y) {
        for (uint32_t x = 0; x < image.getSize().x; ++x) {
            double dc = std::abs(complex_image[y][x]);
            //dc = std::log10(dc + 1);
            if (max_complex < dc) {
                max_complex = dc;
            }
            pixel_before.push_back(dc);
        }
    }
    std::vector<float> pixels;
    pixels.reserve(4 * image.getSize().x * image.getSize().y);
    for (auto &it : pixel_before) {
        double dc = (it / max_complex);
        dc = std::log(999 * dc + 1) / std::log(1000);
        pixels.push_back(dc);
        pixels.push_back(dc);
        pixels.push_back(dc);
        pixels.push_back(1.0);
    }

    sf::Texture t0;
    ///t0.loadFromImage(image);
    ///GL_RGBA32F and GL_FLOAT no conversion 0-1 color nod clipped 0-**** size possible
    t0.create(image.getSize().x, image.getSize().y);
    {
        sf::Context context;

        auto m_actualSize = t0.*break_in(actualSize());
        glCheck(glBindTexture(GL_TEXTURE_2D, t0.getNativeHandle()));

        glCheck(glTexSubImage2D(GL_TEXTURE_2D, 0, 0, 0, image.getSize().x, image.getSize().y, GL_RGBA, GL_FLOAT,
                                pixels.data()));
        glCheck(glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST));

        glCheck(glFlush());
    }

    {
        sf::RenderTexture rt;
        rt.create(t0.getSize().x, t0.getSize().y);

        sf::Sprite s0(t0);
        t0.setRepeated(true);

        s0.setOrigin(t0.getSize().x / 2.0f, t0.getSize().y / 2.0f);
        s0.setTextureRect(sf::IntRect{0, 0,
                                      static_cast<int>(s0.getOrigin().x + t0.getSize().x + 1),
                                      static_cast<int>(s0.getOrigin().y + t0.getSize().y + 1)});

        rt.draw(s0);
        rt.display();
        return rt.getTexture();
    }
}

sf::Texture PictureTransformer::shader_fourier(const sf::Texture &picture) {
    sf::RenderTexture rt;
    rt.create(picture.getSize().x, picture.getSize().y);

    sf::RenderTexture rt2;
    rt2.create(picture.getSize().x, picture.getSize().y);

    {///to_complex
        rt.draw(sf::Sprite{picture}, &to_complex_shader);
        rt.display();
    }
    {///1d
        f1D_shader.setUniform("width", static_cast<float >(rt.getSize().x));
        f1D_shader.setUniform("horizontal", true);
        rt2.draw(sf::Sprite{rt.getTexture()}, &f1D_shader);
        rt2.display();
    }
    {///1d
        f1D_shader.setUniform("width", static_cast<float >(rt.getSize().y));
        f1D_shader.setUniform("horizontal", false);
        rt.draw(sf::Sprite{rt2.getTexture()}, &f1D_shader);
        rt.display();
    }
    /*f1D_shader.setUniform("forward", true);
    {///1d
        f1D_shader.setUniform("width", static_cast<float >(rt.getSize().x));
        f1D_shader.setUniform("horizontal", true);
        rt2.draw(sf::Sprite{rt.getTexture()}, &f1D_shader);
        rt2.display();
    }
    {///1d
        f1D_shader.setUniform("width", static_cast<float >(rt.getSize().y));
        f1D_shader.setUniform("horizontal", false);
        rt.draw(sf::Sprite{rt2.getTexture()}, &f1D_shader);
        rt.display();
        return rt.getTexture();
    }*/
    {///to_wath from complex
        sf::Sprite s0(rt.getTexture());
        rt.setRepeated(true);

        s0.setOrigin(rt.getSize().x / 2.0f, rt.getSize().y / 2.0f);
        s0.setTextureRect(sf::IntRect{0, 0,
                                      static_cast<int>(s0.getOrigin().x + rt.getSize().x + 1),
                                      static_cast<int>(s0.getOrigin().y + rt.getSize().y + 1)});

        rt2.draw(s0, &to_log_amplitude_shader);
        rt2.display();
    }
    {
        float max_v = max_value(rt2.getTexture());
        to_watch_shader.setUniform("max_value", max_v);

        sf::Sprite s0(rt2.getTexture());
        rt.draw(s0, &to_watch_shader);
        rt.display();
    }

    return rt.getTexture();
}

float PictureTransformer::max_value(const sf::Texture &picture) {
    /*{
        sf::ContextSettings context;
        auto m_actualSize = picture.*break_in(actualSize());
        std::vector<float> allPixels(m_actualSize.x * m_actualSize.y * 4);

        glCheck(glBindTexture(GL_TEXTURE_2D, picture.getNativeHandle()));
        glCheck(glGetTexImage(GL_TEXTURE_2D, 0, GL_RGBA, GL_FLOAT, &allPixels[0]));

        float m = 0;
        for(int32_t i = 0; i < allPixels.size(); i += 4){
            m = std::max(m, allPixels[i]);
        }

        return m;
    }*/

    sf::Texture t_final;
    sf::RenderTexture rt;
    rt.create(picture.getSize().x / 4.0 + 0.5, picture.getSize().y / 4.0 + 0.5);

    sf::RenderTexture rt2;
    rt2.create(picture.getSize().x / 16.0 + 0.5, picture.getSize().y / 16.0 + 0.5);

    sf::Vector2i size{picture.getSize()};
    sf::Sprite s0(picture);
    int cellsize = 4;
    max_shader.setUniform("size", cellsize);
    do {
        size.x = std::max((size.x + cellsize - 1) / cellsize, 1);
        size.y = std::max((size.y + cellsize - 1) / cellsize, 1);
        s0.setTextureRect({0, 0, size.x, size.y});
        rt.draw(s0, &max_shader);
        rt.display();
        t_final = rt.getTexture();

        if (size.x < 2.1 && size.y < 2.1) {
            break;
        }

        s0.setTexture(rt.getTexture(), false);
        size.x = std::max((size.x + cellsize - 1) / cellsize, 1);
        size.y = std::max((size.y + cellsize - 1) / cellsize, 1);
        s0.setTextureRect({0, 0, size.x, size.y});
        rt2.draw(s0, &max_shader);
        rt2.display();
        t_final = rt2.getTexture();

        if (size.x < 2.1 && size.y < 2.1) {
            break;
        }

        s0.setTexture(rt2.getTexture(), false);
    } while (size.x > 2.1 || size.y > 2.1);
    {
        rt.create(1, 1);
        sf::Vertex vertex;
        vertex.position = {0.f, 0.f};
        vertex.texCoords = {0.f, 0.f};
        sf::RenderStates states;
        states.shader = &max_shader;
        states.texture = &t_final;
        rt.draw(&vertex, 1, sf::Points, states);
        rt.display();
    }
    {
        sf::ContextSettings context;
        auto m_actualSize = rt.getTexture().*break_in(actualSize());
        std::vector<float> allPixels(m_actualSize.x * m_actualSize.y * 4);

        glCheck(glBindTexture(GL_TEXTURE_2D, rt.getTexture().getNativeHandle()));
        glCheck(glGetTexImage(GL_TEXTURE_2D, 0, GL_RGBA, GL_FLOAT, &allPixels[0]));

        return allPixels[0] < 0.02f ? 0.02f : allPixels[0];
    }
}
