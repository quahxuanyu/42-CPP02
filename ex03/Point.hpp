#ifndef POINT_HPP
#define POINT_HPP
#include <iostream>
#include "Fixed.hpp"

class Point {
    private:
        const Fixed _x;
        const Fixed _y;
    public:
        Point();
        Point(float const x, const float y);
        Point(const Point &other);
        Point &operator=(const Point &other);
        ~Point();
        Fixed const &getX() const;
        Fixed const &getY() const;
};

#endif