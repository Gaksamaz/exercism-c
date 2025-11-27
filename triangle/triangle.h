#ifndef TRIANGLE_H
#define TRIANGLE_H

#include <stdbool.h>  
#include <stddef.h>   

typedef struct {
    double a;
    double b;
    double c;
} triangle_t;

typedef enum {
    EQUILATERAL,
    ISOSCELES,
    SCALENE,
    ERROR
} triangle_type;

bool is_valid_triangle(triangle_t sides);
bool is_equilateral(triangle_t sides);
bool is_isosceles(triangle_t sides);
bool is_scalene(triangle_t sides);
triangle_type triangles(const triangle_t sides);

#endif
