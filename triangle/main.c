#include <stdio.h>
#include "triangle.h"  
int main(void)
{
    triangle_t sides;
    triangle_type result;

    printf("Enter edges (a b c): ");
    scanf("%lf %lf %lf", &sides.a, &sides.b, &sides.c);

    result = triangles(sides);

    switch (result)
    {
        case EQUILATERAL:
            printf("EQUILATERAL Triangle.\n");
            break;
        case ISOSCELES:
            printf("ISOSCELES Triangle.\n");
            break;
        case SCALENE:
            printf("SCALENE Triangle.\n");
            break;
        default:
            printf("INVALID Input.\n");
    }

    return 0;
}
