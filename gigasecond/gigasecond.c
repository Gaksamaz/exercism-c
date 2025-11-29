#include "gigasecond.h"
#include <time.h>

void gigasecond(time_t input, char *output, size_t size)
{
    time_t future = input + 1000000000;  //add 1 Gigasecond
    struct tm *ptime = gmtime(&future);  //convert UTC

    if (ptime == NULL) {
        if (size > 0) output[0] = '\0';
        return;
    }

    if (strftime(output, size, "%Y-%m-%d %H:%M:%S", ptime) == 0) {
        if (size > 0) output[0] = '\0';
    }
}


