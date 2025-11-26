#include <stdio.h>
#include "resistor_color.h"

int main(void) 
{

    // 1. only take one color value.
    printf("Color code of RED: %d\n", color_code(RED));
    printf("Color code of GREEN: %d\n", color_code(GREEN));

    // 2. İsme göre renk kodu bulma
    printf("Code for 'violet': %d\n", color_code_from_name("violet"));
    printf("Code for 'yellow': %d\n", color_code_from_name("yellow"));
    printf("Code for 'blue': %d\n", color_code_from_name("blue"));

    // Invalid color
    printf("Code for 'pink' (invalid): %d\n", color_code_from_name("pink"));

    // 3. Enum → string 
    printf("Name of color 3: %s\n", color_name(ORANGE));
    printf("Name of color 7: %s\n", color_name(VIOLET));

    // 4. list of all color
    const resistor_band_t *all = colors();
    printf("\nAll resistor colors (0–9):\n");
    for (int i = 0; i < 10; i++) {
        printf(" %d: %s\n", all[i], color_name(all[i]));
    }

    return 0;
}
