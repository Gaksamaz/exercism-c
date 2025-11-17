#include <stdio.h>
#include "difference_of_squares.h"

int main(void) {
    unsigned int n = 10;

    printf("sum_of_squares(%u) = %u\n", n, sum_of_squares(n));
    printf("square_of_sum(%u) = %u\n", n, square_of_sum(n));
    printf("difference_of_squares(%u) = %u\n", n, difference_of_squares(n));

    return 0;
}
