#include "robot.h"
#include <cstdlib>


// the definition of our robot constructor.
robot::robot(string givenName) {
    cout << "A new robot has been created.\n";
    damage = 4;
    health = rand() % 6 + 5;
    name = givenName;
    charge = 6;
    status();
}

void robot::attack(robot enemy) {
    enemy.health -= damage;
    charge -= 1;
    enemy.status();
}

void robot::status() {
    cout << name << " has " << health << " health and ";
    cout  << charge << " charge.\n";
}