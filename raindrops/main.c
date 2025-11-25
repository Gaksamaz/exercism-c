#include "raindrops.h"
#include <stdio.h>


int main()
{
    int number;
    char result[50];
    printf("Enter a number: ");
    scanf("%d", &number);

    convert(result, number);
    printf("%s\n", result);

    return 0;
}
