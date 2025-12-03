#include <stdio.h>
#include "luhn.h"

int main(void)
{
    const char *card = "4539 3195 0343 6467";   // VALID
    // const char *card = "066 123 478";       // INVALID

    if (luhn(card))
        printf("VALID\n");
    else
        printf("INVALID\n");

    return 0;
}
