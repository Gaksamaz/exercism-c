#include <stdio.h>
#include "darts.h"

int main(void)
{
    coordinate_t pos;

    printf("Enter the X coordinate and Y coordinate\n");
    printf("x: ");
    scanf("%lf", &pos.x);
    printf("y: ");
    scanf("%lf", &pos.y);

    int result = score(pos);

    printf("\nRESULT: You earned %d points!\n", result);

    return 0;
}
