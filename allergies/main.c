#include <stdio.h>
#include "allergies.h"

int main(void)
{
    int score = 34; // Example score
    allergen_list_t list = get_allergens(score);

    printf("Allergy score: %d\n", score);
    printf("Detected allergies:\n");

    // Print which allergens are present
    for (int i = 0; i < ALLERGEN_COUNT; i++) {
        if (list.allergens[i]) {
            switch (i) {
                case ALLERGEN_EGGS:         printf("- Eggs\n"); break;
                case ALLERGEN_PEANUTS:      printf("- Peanuts\n"); break;
                case ALLERGEN_SHELLFISH:    printf("- Shellfish\n"); break;
                case ALLERGEN_STRAWBERRIES: printf("- Strawberries\n"); break;
                case ALLERGEN_TOMATOES:     printf("- Tomatoes\n"); break;
                case ALLERGEN_CHOCOLATE:    printf("- Chocolate\n"); break;
                case ALLERGEN_POLLEN:       printf("- Pollen\n"); break;
                case ALLERGEN_CATS:         printf("- Cats\n"); break;
            }
        }
    }

    printf("\nTotal allergens found: %d\n\n", list.count);

    return 0;
}
