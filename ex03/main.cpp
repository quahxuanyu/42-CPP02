#include "Fixed.hpp"
#include "Point.hpp"
#include <iostream>

bool bsp(Point const a, Point const b, Point const c, Point const point);

int main()
{
	Point a(0.0f, 0.0f);
	Point b(2.5f, 5.0f);
	Point c(4.0f, 0.12398192334f);
	Point p(1.3f, 2.51238798127897f);
	std::cout << "Point A: (" << a.getX().toFloat() << ", " << a.getY().toFloat() << ")" << std::endl;
	std::cout << "Point B: (" << b.getX().toFloat() << ", " << b.getY().toFloat() << ")" << std::endl;
	std::cout << "Point C: (" << c.getX().toFloat() << ", " << c.getY().toFloat() << ")" << std::endl;
	std::cout << "Point P: (" << p.getX().toFloat() << ", " << p.getY().toFloat() << ")" << std::endl;
	if (bsp(a, b, c, p))
		std::cout << "Point P is INSIDE the triangle ABC." << std::endl;
	else
		std::cout << "Point P is OUTSIDE the triangle ABC." << std::endl;

	return 0;
}