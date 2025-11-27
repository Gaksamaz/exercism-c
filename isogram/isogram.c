#include "isogram.h"
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

bool is_isogram(const char phrase[])
{
    bool freq[26] = {false};  // 'a' - 'z' all letters
    int phrase_len = strlen(phrase);
    

    for (int i = 0; i < phrase_len; i++)
    {
        char lower_phrase = tolower(phrase[i]); // convert all letters to lower-case

        if (!isalpha(lower_phrase)) // if it is number continue
        {
            continue;
        }
        
        int index = lower_phrase - 'a';

        if (freq[index] == true)
        {
            return false;
        }

        freq[index] = true;
        
    }

    return true;
     
}

