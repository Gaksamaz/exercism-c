#include "two_fer.h"
#include <string.h>
#include <stdio.h>


void two_fer(char *buffer, const char *name)
{
    const char *person;

    if (name != NULL)
    {
        person = name;
    }
    else
    {
        person = "you";
    }
    //const char *person = name ? name : "you";      short if condition
    
    sprintf(buffer, "one for %s one for me", person);
    
}
