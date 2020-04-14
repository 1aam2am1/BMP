#version 150

precision highp float;
uniform sampler2D texture;
uniform float max_value;

void main(){
    vec4 Color = texture2D(texture, gl_TexCoord[0].xy);
    float dc = sqrt(dot(Color.xy, Color.xy));
    dc = log(dc + 1);

    gl_FragColor = vec4(dc, dc, dc, 1f);
}