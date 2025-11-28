#include <stdio.h>
#include "resistor_color_trio.h"

int main(void)
{
    resistor_band_t example1[3] = {ORANGE, ORANGE, BLACK};   // 33 ohms
    resistor_band_t example2[3] = {ORANGE, ORANGE, RED};     // 3300 ohms
    resistor_band_t example3[3] = {ORANGE, ORANGE, ORANGE};  // 33 kiloohms

    resistor_value_t r1 = color_code(example1);
    resistor_value_t r2 = color_code(example2);
    resistor_value_t r3 = color_code(example3);

    printf("Example 1: %d ", r1.value);
    if (r1.unit == OHMS) printf("ohms\n");
    else if (r1.unit == KILOOHMS) printf("kiloohms\n");
    else if (r1.unit == MEGAOHMS) printf("megaohms\n");
    else if (r1.unit == GIGAOHMS) printf("gigaohms\n");

    printf("Example 2: %d ", r2.value);
    if (r2.unit == OHMS) printf("ohms\n");
    else if (r2.unit == KILOOHMS) printf("kiloohms\n");
    else if (r2.unit == MEGAOHMS) printf("megaohms\n");
    else if (r2.unit == GIGAOHMS) printf("gigaohms\n");

    printf("Example 3: %d ", r3.value);
    if (r3.unit == OHMS) printf("ohms\n");
    else if (r3.unit == KILOOHMS) printf("kiloohms\n");
    else if (r3.unit == MEGAOHMS) printf("megaohms\n");
    else if (r3.unit == GIGAOHMS) printf("gigaohms\n");

    return 0;
}
