#include <string>
#include <iostream>
using std::cout;
using std::string;

class robot {
private:
    string name;
    int charge;
    int damage;
    int health;

public:
    robot(string givenName = "A robot");
    void attack(robot enemy);
    void status();
};