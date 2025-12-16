#include <stdio.h>
#include "clock.h"

int main(void)
{
    /* Create clocks */
    clock_t c1 = clock_create(10, 0);
    clock_t c2 = clock_create(9, 60);
    clock_t c3 = clock_create(23, 59);

    /* Print initial clocks */
    printf("Clock 1: %s\n", c1.text);
    printf("Clock 2: %s\n", c2.text);
    printf("Clock 3: %s\n", c3.text);

    /* Compare clocks */
    if (clock_is_equal(c1, c2)) {
        printf("Clock 1 and Clock 2 are equal\n");
    } else {
        printf("Clock 1 and Clock 2 are NOT equal\n");
    }

    /* Add minutes */
    clock_t c4 = clock_add(c3, 1);
    printf("Clock 3 + 1 minute: %s\n", c4.text);

    /* Subtract minutes */
    clock_t c5 = clock_subtract(c1, 70);
    printf("Clock 1 - 70 minutes: %s\n", c5.text);

    return 0;
}
