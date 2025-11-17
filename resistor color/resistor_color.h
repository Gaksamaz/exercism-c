#ifndef RESISTOR_COLOR_H
#define RESISTOR_COLOR_H

typedef enum 
{
    BLACK = 0,
    BROWN,
    RED,
    ORANGE,
    YELLOW,
    GREEN,
    BLUE,
    VIOLET,
    GREY,
    WHITE
} 
resistor_band_t;

resistor_band_t color_code(resistor_band_t color);
int color_code_from_name(const char *color);
const char* color_name(resistor_band_t band);
const resistor_band_t* colors(void);

#endif
