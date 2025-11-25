#include "binary.h"
#include <stdio.h>

int main()
{
    char binary_number[50];  
    int result;

    printf("Enter a binary number: ");
    scanf("%s", binary_number);  

    result = convert(binary_number);  

    if (result == INVALID)
    {
        printf("Invalid input!\n");
    }
    else
    {
        printf("Decimal equivalent: %d\n", result);
    }

    return 0;
}

