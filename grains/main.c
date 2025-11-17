#include <stdio.h>
#include "grains.h"

int main(void)
{
    // square test
    printf("Square 1: %llu\n", (unsigned long long)square(1));
    printf("Square 2: %llu\n", (unsigned long long)square(2));
    printf("Square 3: %llu\n", (unsigned long long)square(3));
    printf("Square 4: %llu\n", (unsigned long long)square(4));
    printf("Square 64: %llu\n", (unsigned long long)square(64));

    // error index (0 or >64)
    printf("Square 0 (invalid): %llu\n", (unsigned long long)square(0));
    printf("Square 65 (invalid): %llu\n", (unsigned long long)square(65));

    // sum of squares
    printf("Total grains: %llu\n", (unsigned long long)total());

    return 0;
}

