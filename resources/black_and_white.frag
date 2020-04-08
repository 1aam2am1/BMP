#version 150

uniform sampler2D texture;

void main()
{
    vec4 Color = texture2D(texture, gl_TexCoord[0].xy);
    vec3 lum = vec3(0.299, 0.587, 0.114);
    if (Color.r == Color.g && Color.g == Color.b) {
        gl_FragColor = Color;
    } else {
        gl_FragColor = vec4(vec3(dot(Color.rgb, lum)), Color.a);
    }
}