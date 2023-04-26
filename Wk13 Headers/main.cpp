#include <iostream>
#include <ctime>
#include "robot.h"
#include "army.h"
using std::cout;

// this is where our program goes.
int main() {
    srand(time(0));
    cout << "Creating a new robot...\n";
    robot bob("Bob");
    robot tom("Tom");

    cout << "Bob attacks Tom for no reason!\n";
    bob.attack(tom);

    army legion;
    
}