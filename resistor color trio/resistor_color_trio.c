#include "resistor_color_trio.h"
#include <stdio.h>
#include <string.h>

resistor_value_t color_code(resistor_band_t bands[3]) {
    resistor_value_t result;

    long value = bands[0] * 10 + bands[1];
    long multiplier = 1;

    for (resistor_band_t i = 0; i < bands[2]; i++) {
        multiplier *= 10;
    }

    long total = value * multiplier;

    if (total >= 1000000000) {
        result.value = total / 1000000000;
        result.unit = GIGAOHMS;
    } else if (total >= 1000000) {
        result.value = total / 1000000;
        result.unit = MEGAOHMS;
    } else if (total >= 1000) {
        result.value = total / 1000;
        result.unit = KILOOHMS;
    } else {
        result.value = total;
        result.unit = OHMS;
    }

    return result;
}
