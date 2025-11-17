#include "collatz_conjecture.h"
#include <stdio.h>

int steps(int start) {
    if (start <= 0) {
        return ERROR_VALUE;  // ERROR Value
    }

    int count = 0;

    while (start != 1) {
        if (start % 2 == 0) {
            start /= 2;          // Even
        } else {
            start = 3 * start + 1; // Odd → 3n + 1
        }
        count++;
        printf("%d -> %d\n", count, start);
    }

    return count;
}
