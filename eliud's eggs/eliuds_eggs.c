#include "eliuds_eggs.h"

unsigned int egg_count(unsigned int number) {
    unsigned int count = 0;

    while (number > 0) {
        if (number & 1) {  // if last bit is 1.
            count++;
        }
        number >>= 1;  // shift right 1 bits.
    }

    return count;
}
