#include "hamming.h"
#include <string.h>

int compute(const char *lhs, const char *rhs)
{
    int lhs_len = strlen(lhs);
    int rhs_len = strlen(rhs);
    int count = 0;

    if (lhs_len == rhs_len)
    {
        for (int i = 0; i < lhs_len; i++)
        {
            if (lhs[i] != rhs[i]) // compare step by step
            {
                count++; // if not same string count++
            }
            
        }
        return count;
    }
    else
    {
        return -1; //If length of sizes are not same return -1
    }
}

