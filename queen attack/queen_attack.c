#include "queen_attack.h"

static int is_valid_position(position_t p) {
    return p.row < 8 && p.column < 8;
}

attack_status_t can_attack(position_t q1, position_t q2) {

    if (!is_valid_position(q1) || !is_valid_position(q2)) {
        return INVALID_POSITION;
    }

    // not be same square
    if (q1.row == q2.row && q1.column == q2.column) {
        return INVALID_POSITION;
    }

    // same row.
    if (q1.row == q2.row) {
        return CAN_ATTACK;
    }

    // same column.
    if (q1.column == q2.column) {
        return CAN_ATTACK;
    }

    // same diagonal.
    if ((q1.row > q2.row ? q1.row - q2.row : q2.row - q1.row) ==
        (q1.column > q2.column ? q1.column - q2.column : q2.column - q1.column)) {
        return CAN_ATTACK;
    }

    return CAN_NOT_ATTACK;
}
