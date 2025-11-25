#include "space_age.h"

static const float earth_year_seconds = 31557600.0f;

static const float orbital_periods[] = {
    [MERCURY] = 0.2408467f,
    [VENUS]   = 0.61519726f,
    [EARTH]   = 1.0f,
    [MARS]    = 1.8808158f,
    [JUPITER] = 11.862615f,
    [SATURN]  = 29.447498f,
    [URANUS]  = 84.016846f,
    [NEPTUNE] = 164.79132f
};

float age(planet_t planet, int64_t seconds)
{
    // Invalid enum check.
    if (planet < MERCURY || planet > NEPTUNE) {
        return -1.0f;  
    }

    float earth_years = (float)seconds / earth_year_seconds;
    return earth_years / orbital_periods[planet];
}
