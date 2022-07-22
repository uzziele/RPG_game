
#include <iostream>
#include <string>
#include "Personnage.hpp"

using namespace std;


int main()
{
    Personnage David("David", "old sword", 10, "basic spell", 10, 5),
               Goliath("Goliath", "Golden sword", 20, "basic spell", 10, 5);  //2 objects creation type; Personnage: David and Goliath.
    David.verifyState();
    Goliath.verifyState();

    Goliath.attack(David);      //Goliath attacks David
    David.drinkPotionLife(20);  //David takes back 20 in life drikning the potion
    Goliath.attack(David);      //Goliath attacks David
    David.attack(Goliath);      //David attacks Goliath

    Goliath.changeWeapon("Double axe poisonous", 30);
    David.magicAttack(Goliath);
    Goliath.attack(David);

    David.verifyState();
    Goliath.verifyState();

    David.changeSpell("strong spell", 20, 15);
    Goliath.attack(David);
    David.magicAttack(Goliath);

    David.verifyState();
    Goliath.verifyState();  //We can continue adding actions

    return 0;

}
