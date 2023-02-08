#ifndef __POINT_HPP__
#define __POINT_HPP__

#include <string>
#include <iostream>

#include "Fixed.hpp"

class Point
{
private:
    const Fixed	x;
    const Fixed y;
public:
    Point();
    ~Point(void);
    Point(const Point &copy);
    Point(const float X, const float Y); 
    Point &operator=(const Point &ref);  // remove const?
    static Fixed    triangleArea( const Point a, const Point b, const Point c);
    static void     check_point( Point const a, Point const b, Point const c, Point const point);
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif
