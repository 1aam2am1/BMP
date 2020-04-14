#version 150

uniform sampler2D texture;

void main(){
    vec4 Color = texture2D(texture, gl_TexCoord[0].xy);
    gl_FragColor = vec4(Color.r, 0f, 0f, 1f);
}