#include <stdio.h>
#include <string.h>
#include "isogram.h"

int main()
{
    char phrase[100];

    printf("Enter a word or phrase: ");
    fgets(phrase, sizeof(phrase), stdin); // get spaces too

    phrase[strcspn(phrase, "\n")] = '\0'; // clear \n from fgets

    if (is_isogram(phrase))
    {
        printf("\"%s\" is an isogram.\n", phrase);
    }
    else
    {
        printf("\"%s\" is NOT an isogram.\n", phrase);
    }

    return 0;
}
