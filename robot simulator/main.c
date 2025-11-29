#include <stdio.h>
#include "robot_simulator.h"

const char* direction_to_string(robot_direction_t direction) {
    switch (direction) {
        case DIRECTION_NORTH: return "NORTH";
        case DIRECTION_EAST:  return "EAST";
        case DIRECTION_SOUTH: return "SOUTH";
        case DIRECTION_WEST:  return "WEST";
        default:              return "UNKNOWN";
    }
}

int main(void) {
    // Robot starting position
    robot_status_t robot = robot_create(DIRECTION_NORTH, 7, 3);

    // command
    const char *commands = "RAALAL";

    // apply commands
    robot_move(&robot, commands);

    // final position and direction
    printf("Final position: {%d, %d}\n", robot.position.x, robot.position.y);
    printf("Final direction: %s\n", direction_to_string(robot.direction));

    return 0;
}
