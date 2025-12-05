#include <stdio.h>
#include "sum_of_multiples.h"

int main(void)
{
    unsigned int factors[] = {3, 5};
    size_t count = 2;
    unsigned int limit = 20;

    unsigned int result = sum(factors, count, limit);

    printf("Sonuç: %u\n", result);

    return 0;
}
