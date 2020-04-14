#version 150

precision highp float;
uniform sampler2D texture;
uniform float max_value;

void main(){
    vec4 Color = texture2D(texture, gl_TexCoord[0].xy);
    Color /= max_value;
    //Color *= 200;

    gl_FragColor = vec4(Color.rgb, 1f);
}