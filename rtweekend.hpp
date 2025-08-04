#pragma once
#include <cmath>
#include <iostream>
#include <limits>
#include <cstdlib>
#include <memory>

using std::make_shared;
using std::shared_ptr;

//Constants
const double infinity=std::numeric_limits<double>::infinity();
const double pi=3.1415926535897932385;

//Utility Functions
inline double degrees_to_radians(double degrees) {
    return degrees * pi / 180.0;
}

inline double random_double(){
    //random [0,1)
    return std::rand()/(RAND_MAX+1.0);
}
inline double random_double(double min,double max){
    //random [min,max)
    return min+(max-min)*random_double();
}
// Headers
#include "color.hpp"
#include "ray.hpp"
#include "vec3.hpp"
#include "interval.hpp"