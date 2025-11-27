#include "pangram.h"
#include <string.h>
#include <ctype.h>

bool is_pangram(const char *sentence)
{
    
    char alphabet[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm',
                      'n', 'o', 'p', 'r', 's', 't', 'u', 'v', 'y', 'z', 'x', 'q', 'w'
                      };
    bool found[26] = {false};
    int sentence_len = strlen(sentence);
    int alphabet_len = strlen(alphabet);
    int count = 0;

    if(sentence == NULL) //If sentence is NULL
    {
        return false;
    }
    
    for (int i = 0; i < sentence_len; i++)
    {
        char lower_sentence = tolower(sentence[i]); //Sentence convert to lower-case

       for (int j = 0; j < alphabet_len; j++)
       {
            if (lower_sentence == alphabet[j] && !found[j]) //Letters check only one
            {
                found[j] = true;
                count++;
            }
       } 
    }
    
    if (count == 26)
    {
        return true;
    }
    else
    {
        return false;
    }
    
    
    
}
