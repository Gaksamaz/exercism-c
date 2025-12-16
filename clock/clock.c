#include "clock.h"
#include <stdio.h>
#include <string.h>

#define MINUTES_IN_DAY 1440

/* Normalize total minutes so that the value is always within
   the range 0 to 1439 (one full day). */
static int normalize_minutes(int total_minutes)
{
    total_minutes %= MINUTES_IN_DAY;
    if (total_minutes < 0) {
        total_minutes += MINUTES_IN_DAY;
    }
    return total_minutes;
}

/* Convert total minutes into a formatted "HH:MM" string.
   The output is always zero-padded and fits into MAX_STR_LEN. */
static void minutes_to_text(int total_minutes, char *text)
{
    int hour = (total_minutes / 60) % 24;
    int minute = total_minutes % 60;

    /* Cast to unsigned to guarantee a safe range for snprintf
       and avoid compiler truncation warnings. */
    snprintf(text, MAX_STR_LEN, "%02u:%02u",
             (unsigned)hour, (unsigned)minute);
}

/* Convert a "HH:MM" formatted string into total minutes. */
static int text_to_minutes(const char *text)
{
    int hour = 0;
    int minute = 0;

    sscanf(text, "%d:%d", &hour, &minute);
    return hour * 60 + minute;
}

/* Create a clock from the given hour and minute values.
   The resulting time is normalized and stored as "HH:MM". */
clock_t clock_create(int hour, int minute)
{
    clock_t clock;

    int total_minutes = hour * 60 + minute;
    total_minutes = normalize_minutes(total_minutes);

    minutes_to_text(total_minutes, clock.text);
    return clock;
}

/* Add the specified number of minutes to a clock and
   return a new normalized clock. */
clock_t clock_add(clock_t clock, int minute_add)
{
    int total_minutes = text_to_minutes(clock.text);
    total_minutes += minute_add;
    total_minutes = normalize_minutes(total_minutes);

    minutes_to_text(total_minutes, clock.text);
    return clock;
}

/* Subtract the specified number of minutes from a clock and
   return a new normalized clock. */
clock_t clock_subtract(clock_t clock, int minute_subtract)
{
    int total_minutes = text_to_minutes(clock.text);
    total_minutes -= minute_subtract;
    total_minutes = normalize_minutes(total_minutes);

    minutes_to_text(total_minutes, clock.text);
    return clock;
}

/* Check whether two clocks represent the same time. */
bool clock_is_equal(clock_t a, clock_t b)
{
    return strcmp(a.text, b.text) == 0;
}
