#version 150

uniform sampler2D texture;
uniform int size;

void main(){
    vec4 Color = vec4(0, 0, 0, 1);

    vec2 pixel_size = 1.0 / vec2(textureSize(texture, 0));
    ivec2 my_work_position = ivec2(gl_FragCoord.x - 0.5, gl_FragCoord.y - 0.5);
    float dc_max = 0;
    for (int i = 0; i < size; ++i){
        for (int j = 0; j < size; ++j){
            //vec4 Color_max =  texelFetch(texture, my_work_position + ivec2(i, j), 0);
            vec2 pixel_off = vec2(float(i), float(j));
            vec4 Color_max = texture(texture, gl_TexCoord[0].xy*size + pixel_off*pixel_size);
            float dc = Color.r;

            if (dc > dc_max){
                dc_max = dc;
                Color = Color_max;
            }
        }
    }

    gl_FragColor = vec4(Color.r, Color.g, Color.b, 1f);
}