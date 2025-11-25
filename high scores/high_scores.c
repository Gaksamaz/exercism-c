#include "high_scores.h"

//Return the latest score
int32_t latest(const int32_t *scores, size_t scores_len)
{
    if (scores_len == 0)
        return 0; // ERROR
    return scores[scores_len - 1];

}
//Return the personal best score
int32_t personal_best(const int32_t *scores, size_t scores_len)
{
    int best_score = scores[0];
    for (int i = 0; i < scores_len; i++)
    {
        if (scores[i] > best_score)
        {
            best_score = scores[i];
        }    
    }
    return best_score;
    
}
//Retrun tehe top three scores
size_t personal_top_three(const int32_t *scores, size_t scores_len, int32_t *output)
{
    
    size_t count = (scores_len < 3) ? scores_len : 3;

    // temp array (copy scores)
    int32_t temp[scores_len];
    for (size_t i = 0; i < scores_len; i++)
    {
        temp[i] = scores[i];
    }
    // Bubble sort
    for (size_t i = 0; i < scores_len - 1; i++)
    {
        for (size_t j = i + 1; j < scores_len; j++)
        {
            if (temp[j] > temp[i]) 
            {
                int32_t swap = temp[i];
                temp[i] = temp[j];
                temp[j] = swap;
            }
        }
    }
    for (size_t i = 0; i < count; i++)
    {
        output[i] = temp[i];
    }
    return count; 
}


