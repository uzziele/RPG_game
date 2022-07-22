#ifndef DEF_PERSONNAGE
#define DEF_PERSONNAGE

#include <iostream>
#include <string>

#include "Weapon.hpp"
#include "Magic.hpp"

class Personnage
{
    public:

        Personnage();                                               //By deafult constructor
        Personnage(std::string name, std::string weapon, int damageWeapon, std::string spell, int damageSpell, int useMana);           //Method constructor overcharged (it sends nothing, neither return, same nama as the class)
        ~Personnage();                                              //Destructor
        void receiveDamage(int nbDamage);
        void attack(Personnage &objective);
        void magicAttack(Personnage &objective);
        void drinkPotionLife(int quantityPotion);
        void changeWeapon(std::string newWeapon, int damageNewWeapon);
        void changeSpell(std::string newSpell, int damageNewSpell, int manaNewSpell);
        bool isAlive();                                       //This is a constant method. We can't change the value of the variable (object), it just verifies the life's level
        void verifyState() const;
        std::string getName();

    private:

        std::string m_name;
        int m_life;
        int m_mana;
        Weapon m_weapon;
        Magic m_magic;
};

#endif

