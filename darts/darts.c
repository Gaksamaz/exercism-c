#include "darts.h"
#include <math.h>

int score(coordinate_t pos)
{
    double distance = sqrt((pos.x * pos.x) + (pos.y * pos.y));

    if (distance <= 1.0) {
        return 10;
    } else if (distance <= 5.0) {
        return 5;
    } else if (distance <= 10.0) {
        return 1;
    } else {
        return 0;
    }
}
