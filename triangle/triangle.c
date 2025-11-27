#include "triangle.h"

bool is_valid_triangle(triangle_t sides)
{
    return (sides.a > 0 && sides.b > 0 && sides.c > 0) &&
           (sides.a + sides.b >= sides.c) &&
           (sides.b + sides.c >= sides.a) &&
           (sides.a + sides.c >= sides.b);
}

bool is_equilateral(triangle_t sides)
{
    if (!is_valid_triangle(sides)) return false;
    return (sides.a == sides.b) && (sides.b == sides.c);
}

bool is_isosceles(triangle_t sides)
{
    if (!is_valid_triangle(sides)) return false;
    return (sides.a == sides.b) || (sides.a == sides.c) || (sides.b == sides.c);
}

bool is_scalene(triangle_t sides)
{
    if (!is_valid_triangle(sides)) return false;
    return (sides.a != sides.b) && (sides.a != sides.c) && (sides.b != sides.c);
}

triangle_type triangles(const triangle_t sides)
{
    if (is_equilateral(sides)) return EQUILATERAL;
    if (is_isosceles(sides)) return ISOSCELES;
    if (is_scalene(sides)) return SCALENE;
    return ERROR;
}
