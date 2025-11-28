#include "dnd_character.h"
#include <stdlib.h>
#include <time.h>

/*
 * Generate an ability score by rolling 4 six-sided dice,
 * discarding the lowest value, and summing the other three.
 */
int ability(void) {
    int dice[4];
    for (int i = 0; i < 4; i++) {
        // Random number between 1 and 6 (inclusive)
        dice[i] = rand() % 6 + 1;
    }

    int min = dice[0];
    int sum = 0;
    for (int i = 0; i < 4; i++) {
        // Track the lowest die to discard it later
        if (dice[i] < min) min = dice[i];
        sum += dice[i];
    }

    // Return the sum of the three highest dice
    return sum - min;  
}

/*
 * Calculate constitution modifier based on ability score.
 * Formula: floor((score - 10) / 2)
 * C division truncates toward zero, so additional correction
 * is required for negative odd values to properly apply floor().
 */
int modifier(int score) {
    int diff = score - 10;
    int mod = diff / 2;

    // If negative and not evenly divisible by 2, subtract 1 to apply floor
    if (diff < 0 && (diff % 2 != 0)) {
        mod -= 1;
    }
    return mod;
}

/*
 * Create a D&D character with random abilities using ability() function.
 * Hitpoints = 10 + constitution modifier.
 */
dnd_character_t make_dnd_character(void) {
    dnd_character_t c;
    c.strength = ability();
    c.dexterity = ability();
    c.constitution = ability();
    c.intelligence = ability();
    c.wisdom = ability();
    c.charisma = ability();
    c.hitpoints = 10 + modifier(c.constitution);
    return c;
}
