#include <stdio.h>
#include <string.h>
#include "pangram.h"


int main()
{
    char sentence[] = "The quick brown fox jumps over the lazy dog";
    
    if (is_pangram(sentence))
    {
        printf("Sentence is PANAGRAM\n");
    }
    else
    {
        printf("Sentence is not PANAGRAM\n");
    }
    
    
}
