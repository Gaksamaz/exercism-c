#include <string.h>
#include "resistor_color.h"

static const char* color_names[] = 
{
    "black",
    "brown",
    "red",
    "orange",
    "yellow",
    "green",
    "blue",
    "violet",
    "grey",
    "white"
};

// Exercism testleri color_code() için sadece enum → sayı dönüşü bekliyor.
resistor_band_t color_code(resistor_band_t color) 
{
    return color;
}

int color_code_from_name(const char *color) 
{
    for (int i = 0; i < 10; i++) 
    {
        if (strcmp(color, color_names[i]) == 0) 
        {
            return i;
        }
    }
    return -1;
}

const char* color_name(resistor_band_t band) 
{
    if (band >= BLACK && band <= WHITE) 
    {
        return color_names[band];
    }
    return "invalid";
}

// Exercism: this must return an array of all enum values ordered from BLACK to WHITE
const resistor_band_t* colors(void) 
{
    static const resistor_band_t bands[] = 
    {
        BLACK, BROWN, RED, ORANGE, YELLOW,
        GREEN, BLUE, VIOLET, GREY, WHITE
    };
    return bands;
}
