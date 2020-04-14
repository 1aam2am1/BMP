#version 150

precision highp float;
uniform sampler2D texture;
uniform int size;

void main(){
    vec4 maxColor = vec4(0);
    vec2 srcPixel = floor(gl_TexCoord[0].xy) * float(size) + 0.5;

    vec2 pixel_size = vec2(1) / vec2(textureSize(texture, 0));

    float dc_max = 0;
    for (int i = 0; i < size; ++i){
        for (int j = 0; j < size; ++j){
            maxColor = max(maxColor, texture(texture, srcPixel + vec2(i, j)*pixel_size));
        }
    }

    gl_FragColor = maxColor;
}