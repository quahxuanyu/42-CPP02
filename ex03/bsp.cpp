#include "Point.hpp"

float tri_area(Point const a, Point const b, Point const c) {
    float area;
    area = (a.getX().toFloat() * (b.getY().toFloat() - c.getY().toFloat()) +
            b.getX().toFloat() * (c.getY().toFloat() - a.getY().toFloat()) +
            c.getX().toFloat() * (a.getY().toFloat() - b.getY().toFloat())) / 2.0f;
    if (area < 0)
        area = -area; // Ensure area is non-negative
    return area;
}

bool bsp(Point const a, Point const b, Point const c, Point const point) {
    float area_abc = tri_area(a, b, c);
    float area_abp = tri_area(a, b, point);
    float area_acp = tri_area(a, c, point);
    float area_bcp = tri_area(b, c, point);
    std::cout << "Area ABC: " << area_abc << std::endl;
    std::cout << "Area FULL: " << area_abp + area_acp + area_bcp << std::endl;
    return (area_abc == area_abp + area_acp + area_bcp);
}