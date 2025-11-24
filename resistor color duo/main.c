#include <stdio.h>
#include "resistor_color_duo.h"

int main()
{

    resistor_band_t test_colors[] = {BROWN, GREEN};


    int result = color_code(test_colors);

    printf("%d\n", result);
}

