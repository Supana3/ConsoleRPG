#include <iostream>
#include "Player.h"

int main() {
   
    Player hero;

   
    Player wizard("Gandalf", 120, 15);

    
    std::cout << "\n--- Initial Status ---" << std::endl;
    hero.displayStatus();
    wizard.displayStatus();

   
    std::cout << "\n--- Hero takes damage! ---" << std::endl;
    hero.takeDamage(25);
    hero.displayStatus();

  
    std::cout << "\n--- Wizard takes damage! ---" << std::endl;
    wizard.takeDamage(150);
    wizard.displayStatus();

    return 0;
}
