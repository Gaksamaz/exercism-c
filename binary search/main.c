#include "binary_search.h"
#include <stdio.h>

int main()
{
    int numbers[] = {4, 8, 12, 16, 23, 28, 32};
    int input = 23;
    size_t len = sizeof(numbers) / sizeof(numbers[0]);

    printf("%d\n", *binary_search(input, numbers, len));
    
}
