#ifndef PLAYER_H
#define PLAYER_H

#include <string>

// Player class declaration — defines what a Player is and can do
class Player {
private:
    std::string name;
    int health;
    int maxHealth;
    int attackPower;

public:
    // Default constructor
    Player();

    // Overloaded constructor
    Player(std::string name, int health, int attackPower);

    // Destructor
    ~Player();

    // Mutator
    void takeDamage(int damage);

    // Accessors (getters)
    std::string getName() const;
    int getHealth() const;
    int getMaxHealth() const;
    int getAttackPower() const;

    // Display helper
    void displayStatus() const;
};

#endif
