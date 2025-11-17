#include <stdio.h>
#include "collatz_conjecture.h"

int main(void) {
    int start;

    printf("Enter positive number: ");
    if (scanf("%d", &start) != 1) {
        fprintf(stderr, "ERROR \n");
        return 1;
    }

    int result = steps(start);

    if (result == ERROR_VALUE) {
        printf("ERROR: Enter positive number");
        return 1;
    }

    printf("number %d reached 1 in %d steps.\n", start, result);

    return 0;
}
