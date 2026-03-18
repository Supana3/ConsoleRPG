#include "Player.h"
#include <iostream>


Player::Player() {
    name = "Hero";
    health = 100;
    maxHealth = 100;
    attackPower = 10;
    std::cout << "Default constructor called." << std::endl;
}


Player::Player(std::string name, int health, int attackPower) {
    this->name = name;
    this->health = health;
    this->maxHealth = health; 
    this->attackPower = attackPower;
    std::cout << "Overloaded constructor called." << std::endl;
}


Player::~Player() {
    std::cout << "The object for Player " << name << " has been destroyed." << std::endl;
}


void Player::takeDamage(int damage) {
    health -= damage;
    if (health < 0) health = 0;
    if (health == 0) {
        std::cout << name << " falls to the ground, defeated." << std::endl;
    }
}


std::string Player::getName() const { return name; }
int Player::getHealth() const { return health; }
int Player::getMaxHealth() const { return maxHealth; }
int Player::getAttackPower() const { return attackPower; }


void Player::displayStatus() const {
    std::cout << "[" << name << "] - HP: " << health << "/" << maxHealth << std::endl;
} 
