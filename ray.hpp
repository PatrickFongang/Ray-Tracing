#pragma once

#include "vec3.hpp"

class ray{
    private:
        point3 origin;
        vec3 direction;
    public:
        ray(){}
        ray(const point3& origin, const vec3& direction): origin(origin), direction(direction){}
        point3 at(double t) const{
            return origin + t*direction;
        }
        const point3& getOrigin() const  { return origin; }
        const vec3& getDirection() const { return direction; }
};