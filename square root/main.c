#include "square_root.h"
#include <stdio.h>

int main()
{
    int input;
    printf("Enter the number: ");
    scanf("%d", &input);
    
    printf("Root of number is %d\n", square_root(input));
}

