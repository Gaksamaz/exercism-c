#include <stdio.h>
#include "armstrong_numbers.h"

int main(void)
{
    int n;
    printf("Enter a integer number: ");
    scanf("%d", &n);
    printf("%d\n", is_armstrong_number(n));
}