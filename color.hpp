#pragma once

#include "rtweekend.hpp"
#include "ray.hpp"
using color = vec3;

void write_color(std::ostream& out, const color& pixel_color){
    auto r=pixel_color.x();
    auto g=pixel_color.y();
    auto b=pixel_color.z();

    //[0,1]->[0,255]
    int rbyte=int(255.999*r);
    int gbyte=int(255.99*g);
    int bbyte=int(255.999*b);

    out<<rbyte<<' '<<gbyte<<' '<<bbyte<<'\n';
}