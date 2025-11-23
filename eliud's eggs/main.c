#include <stdio.h>
#include "eliuds_eggs.h"

int main() {
    unsigned int n = 89;  // 1011001
    printf("Eggs: %u\n", egg_count(n));  // result: 4
    return 0;
}
