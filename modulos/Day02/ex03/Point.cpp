#include "Point.hpp"
#include "Fixed.hpp"
#include <cmath> //fabs

Point::Point() : x(0), y(0) {}

Point::Point(const Point &copy) : x(copy.x), y(copy.y) {}

Point::Point(const float x, const float y) : x(Fixed(x)), y(Fixed(y)) {}

Point& Point::operator=(const Point &ref) {
    (void) ref;
    std::cout << RED 
    << "Because const private atributes, "
    << "the copy assignment is not possible. "
    << "Default constructor used\n" << RESET;
	return (*this);
}

Fixed triangleArea(const Point a, const Point b, const Point c) {
}

void check_point( Point const a, Point const b, Point const c, Point const point) {
}

bool bsp( Point const a, Point const b, Point const c, Point const point) {
}

Point::~Point(void) {};
