#include "Point.hpp"

Point::Point(): _x(Fixed(0)), _y(Fixed(0)){
}

Point::Point(float const x, float const y): _x(Fixed(x)), _y(Fixed(y)) {

}

Point::Point(const Point &other) : _x(other.getX()), _y(other.getY()) {
    // Copy constructor initializes _x and _y with the values from the other Point object
    // No need to do anything else since _x and _y are const
}

Point &Point::operator=(const Point &other) {
    // Assignment operator is not needed since _x and _y are const
    // If you want to allow assignment, you would need to remove the const qualifier from _x and _y
    // and implement the assignment logic here.
    (void) other;
    return *this; // Returning *this to allow chaining, but this is not a typical use case for const members
}

Point::~Point() {

}

Fixed const &Point::getX() const{
    return _x;
}

Fixed const &Point::getY() const{
    return _y;
}