#include "resistor_color_duo.h"

int color_code(resistor_band_t colors[])
{
    int value = colors[0] * 10 + colors[1];
    return value;
}
