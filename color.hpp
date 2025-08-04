#pragma once

#include "rtweekend.hpp"
#include "interval.hpp"
#include "vec3.hpp"
using color = vec3;

inline double linear_to_gamma(double linear_component){
    if(linear_component>0)
        return std::sqrt(linear_component);
    return 0;
}
void write_color(std::ostream& out, const color& pixel_color){
    auto r=pixel_color.x();
    auto g=pixel_color.y();
    auto b=pixel_color.z();

    r=linear_to_gamma(r);
    g=linear_to_gamma(g);
    b=linear_to_gamma(b);
    //[0,1]->[0,255]
    static const interval intesity(0.000,0.999);
    int rbyte=int(255.999*intesity.clamp(r));
    int gbyte=int(255.99*intesity.clamp(g));
    int bbyte=int(255.999*intesity.clamp(b));

    out<<rbyte<<' '<<gbyte<<' '<<bbyte<<'\n';
}