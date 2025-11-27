#include "perfect_numbers.h"
#include <stdio.h>


int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);
    
    kind result = classify_number(num);

    if (result == PERFECT_NUMBER)
    {
        printf("Number is PERFECT NUMBER\n");
    }
    else if (result == ABUNDANT_NUMBER)
    {
        printf("Number is ABUNDANT NUMBER\n");
    }
    else if (result == DEFICIENT_NUMBER)
    {
        printf("Number is DEFICIENT NUMBER\n");
    }
    else
    {
        printf("ERROR!\n");
    }
    return 0;
    
}
