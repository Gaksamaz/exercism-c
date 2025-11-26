#include <stdio.h>
#include <string.h>
#include "hamming.h"

int main()
{
    char lhs[] = "GAGCCTACTAACGGGAT";
    char rhs[] = "CATCGTAATGACGGCCT";
    printf("The Hamming Distance is %d\n", compute(lhs, rhs));
}
