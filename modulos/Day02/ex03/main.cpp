
#include "Fixed.hpp"
#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point);

int main( void )
{
	Point a(1, 1);
	Point b(4, 2);
	Point c(2, 7);
	Point P1(2, 3);
	Point P2(1.5, 5);
	Point P3(1, 1);
	Point::check_point(a, b, c, P1);
	Point::check_point(a, b, c, P2);
	Point::check_point(a, b, c, P3);
	return 0;
}
