#include "allergies.h"
#include <stdbool.h>

/*
 * Check whether the given score includes the specified allergen.
 *
 * Parameters:
 *   allergen - the allergen to check (enum value 0–7)
 *   score    - the allergy score containing bit flags
 *
 * Returns:
 *   true  - if the corresponding bit is set in the score
 *   false - otherwise
 */
bool is_allergic_to(allergen_t allergen, int score)
{
    // Each allergen corresponds to a bit: allergen 0 -> 1, allergen 1 -> 2, etc.
    int bit = 1 << allergen;

    // Check whether the bit is present in the score
    return (score & bit) != 0;
}

/*
 * Build a list of all allergens represented in the given score.
 *
 * Parameters:
 *   score - the allergy score containing bit flags
 *
 * Returns:
 *   allergen_list_t struct containing:
 *       - count: number of allergens found
 *       - allergens[]: boolean array marking which allergens are present
 */
allergen_list_t get_allergens(int score)
{
    allergen_list_t list;
    list.count = 0;

    // Iterate through all defined allergens (0–7)
    for (int i = 0; i < ALLERGEN_COUNT; i++) {
        int bit = 1 << i;

        // If the bit is set, the person is allergic to this item
        if (score & bit) {
            list.allergens[i] = true;
            list.count++;
        } else {
            list.allergens[i] = false;
        }
    }

    return list;
}
