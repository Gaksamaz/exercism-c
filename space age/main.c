#include <stdio.h>
#include <stdint.h>
#include "space_age.h"

int main(void) {
    int64_t seconds;

    printf("Enter your age in seconds: ");
    if (scanf("%ld", &seconds) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    printf("\nYour age on each planet:\n");
    printf("-------------------------\n");

    printf("Mercury : %.2f years\n", age(MERCURY, seconds));
    printf("Venus   : %.2f years\n", age(VENUS, seconds));
    printf("Earth   : %.2f years\n", age(EARTH, seconds));
    printf("Mars    : %.2f years\n", age(MARS, seconds));
    printf("Jupiter : %.2f years\n", age(JUPITER, seconds));
    printf("Saturn  : %.2f years\n", age(SATURN, seconds));
    printf("Uranus  : %.2f years\n", age(URANUS, seconds));
    printf("Neptune : %.2f years\n", age(NEPTUNE, seconds));

    return 0;
}
