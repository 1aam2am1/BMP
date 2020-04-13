#version 150

#define M_PI 3.1415926535897932384626433832795
#define TWOPI 2*M_PI

precision highp float;
uniform sampler2D texture;
uniform float width;
uniform bool forward;
uniform bool horizontal;

void main()
{
    vec2 sum = vec2(0, 0);

    vec2 my_work_position = gl_FragCoord.xy - vec2(0.5, 0.5);

    for (float index = 0; index < width; ++index){
        ivec2 position;
        float fi_x_pixel;
        vec2 color;

        if (horizontal){
            position = ivec2(index, my_work_position.y);
            fi_x_pixel = my_work_position.x;
        } else {
            position = ivec2(my_work_position.x, index);
            fi_x_pixel = my_work_position.y;
        }


        color = texelFetch(texture, position, 0).xy;

        float fi = (forward ? TWOPI : -TWOPI) * fi_x_pixel * index / width;
        vec2 e = vec2(cos(fi), sin(fi));

        color = vec2(color.x * e.x - color.y * e.y,
        color.x * e.y + color.y * e.x);

        sum += color;
    }
    if (!forward){ sum /= width; }


    gl_FragColor = vec4(sum.x, sum.y, 0, 1);
}

/*
for (float i=0; i <= width; ++i){
        ivec2 position;
        float int_position;
        if (xy){
            position = ivec2(i, gl_FragCoord.y);
            int_position = gl_TexCoord[0].x * width;
        } else {
            position = ivec2(gl_FragCoord.x, i);
            int_position = gl_TexCoord[0].y * width;
        }
        vec2 current = texelFetch(texture, position, 0).rg;

        float fi = 2 * M_PI * int_position * i/width;
        if (!inverse){
            fi = -fi;
        }

        vec2 e = vec2(cos(fi), sin(fi));

        sum += vec2(current.x*e.x-current.y*e.y, current.x*e.y+current.y*e.x);
    }
*/