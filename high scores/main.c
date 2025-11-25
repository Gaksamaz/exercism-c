#include "high_scores.h"
#include <stdio.h>
#include <stdint.h> // for int32_t 

int main()
{
    int32_t scores[5] = {35, 20, 50, 75, 45};
    size_t len = sizeof(scores) / sizeof(scores[0]);

    printf("Latest score: %d\n", latest(scores, len));
    printf("Personal best: %d\n", personal_best(scores, len));

    int32_t top3[3]; 
    size_t count = personal_top_three(scores, len, top3);

    printf("Top %zu scores: ", count);
    for (size_t i = 0; i < count; i++)
    {
        printf("%d ", top3[i]);
    }
    printf("\n");

    return 0;
}
