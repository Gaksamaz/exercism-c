#include <stdio.h>
#include <string.h>
#include "two_fer.h"

int main()
{
    char buffer[50];
    char name  [30];

    printf("Enter a name :");
    //We take the name that the user entered
    fgets(name, sizeof(name), stdin);

    //If the user just presses Enter (i.e. it's a blank line), we will set name to NULL.
    if (name[0] == '\n') 
    {
        two_fer(buffer, NULL);
    }
    else
    {
        //fgets also takes the '\n' character, we remove it.
        name[strcspn(name, "\n")] = '\0';
        two_fer(buffer, name);
    }
    
    printf("%s\n", buffer);

    return 0;
    
}