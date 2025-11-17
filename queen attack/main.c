#include <stdio.h>
#include "queen_attack.h"

void print_result(attack_status_t s) {
    switch (s) {
        case CAN_ATTACK:
            printf("Queens CAN attack each other.\n");
            break;
        case CAN_NOT_ATTACK:
            printf("Queens can NOT attack each other.\n");
            break;
        case INVALID_POSITION:
            printf("INVALID POSITION.\n");
            break;
    }
}

int main(void) {

    // Örnek: c5 (2,3) ve f2 (5,6)
    position_t white = {3, 2};
    position_t black = {6, 5};

    attack_status_t r = can_attack(white, black);
    print_result(r);

    // a4, f6
    position_t q1 = {0, 4};
    position_t q2 = {5, 2}; // diagonal
    print_result(can_attack(q1, q2));

    // Geçersiz durum
    position_t bad = {9, 2};
    print_result(can_attack(q1, bad));

    return 0;
}
