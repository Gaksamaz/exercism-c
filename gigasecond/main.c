#include <stdio.h>
#include <time.h>
#include "gigasecond.h"   // <-- Bunu ekle

int main()
{
    struct tm date = {0};
    //dates
    date.tm_year = 2015 - 1900;
    date.tm_mon  = 0;     
    date.tm_mday = 24;
    date.tm_hour = 22;
    date.tm_min  = 0;
    date.tm_sec  = 0;

    time_t t = timegm(&date);  // UTC 

    char buffer[30];
    gigasecond(t, buffer, sizeof(buffer));

    printf("After 1 Gigasecond: %s\n", buffer);
    return 0;
}
