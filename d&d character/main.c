#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "dnd_character.h"

int main() {
    srand(time(NULL)); 

    dnd_character_t ch = make_dnd_character();

    printf("Strength     : %d\n", ch.strength);
    printf("Dexterity    : %d\n", ch.dexterity);
    printf("Constitution : %d\n", ch.constitution);
    printf("Intelligence : %d\n", ch.intelligence);
    printf("Wisdom       : %d\n", ch.wisdom);
    printf("Charisma     : %d\n", ch.charisma);
    printf("Hitpoints    : %d\n", ch.hitpoints);

    return 0;
}
