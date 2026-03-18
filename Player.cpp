#include "Player.h"
#include <iostream>

// Default constructor - initializes a generic hero
Player::Player() {
    name = "Hero";
    health = 100;
    maxHealth = 100;
    attackPower = 10;
    std::cout << "Default constructor called." << std::endl;
}

// Overloaded constructor - initializes with provided values
Player::Player(std::string name, int health, int attackPower) {
    this->name = name;
    this->health = health;
    this->maxHealth = health; // maxHealth equals starting health
    this->attackPower = attackPower;
    std::cout << "Overloaded constructor called." << std::endl;
}

// Destructor - prints message when object is destroyed
Player::~Player() {
    std::cout << "The object for Player " << name << " has been destroyed." << std::endl;
}

// Subtracts damage from health, clamps to 0, prints defeat message if needed
void Player::takeDamage(int damage) {
    health -= damage;
    if (health < 0) health = 0;
    if (health == 0) {
        std::cout << name << " falls to the ground, defeated." << std::endl;
    }
}

// Getter functions
std::string Player::getName() const { return name; }
int Player::getHealth() const { return health; }
int Player::getMaxHealth() const { return maxHealth; }
int Player::getAttackPower() const { return attackPower; }

// Prints player status in format: [Name] - HP: health/maxHealth
void Player::displayStatus() const {
    std::cout << "[" << name << "] - HP: " << health << "/" << maxHealth << std::endl;
} 
