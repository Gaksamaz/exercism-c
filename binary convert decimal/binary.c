#include "binary.h"
#include <stdio.h>
#include <string.h>

int convert(const char *input)
{
    int result = 0;
    int len = strlen(input); // Length of input
    
    for (int i = 0; i < len; i++)
    {
        if (input[i] != '0' && input[i] != '1')
        {
            return INVALID; //Invalid input.
        }
        
        result = result * 2 + (input[i] - '0');
    }
    
    return result;
}


