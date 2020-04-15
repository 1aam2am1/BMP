#version 150

#define M_PI 3.1415926535897932384626433832795

precision highp float;
uniform sampler2D texture;
uniform float max_value;

void main(){
    vec4 Color = texture2D(texture, gl_TexCoord[0].xy);
    float dc = Color.y;
    dc = dc/M_PI;
    dc = dc*0.5+0.5;

    gl_FragColor = vec4(dc, dc, dc, 1f);
}