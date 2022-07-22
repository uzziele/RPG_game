#include "Personnage.hpp"

using namespace std;

Personnage::Personnage():m_name("NoName")
{
    m_life = 100;
    m_mana = 100;
}

Personnage::Personnage(string name, string weapon, int damageWeapon, string spell, int damageSpell, int useMana):m_weapon(weapon, damageWeapon), m_name(name), m_magic(spell, damageSpell, useMana)
{
    m_life = 100;
    m_mana = 100;
}

Personnage::~Personnage()
{

}

void Personnage::receiveDamage(int nbDamage)
{
    cout << m_name << " receives: " << nbDamage << " of damage" << endl;
    m_life -= nbDamage;         //We decrease the life of the perso given by the damage

    if(m_life < 0)
    {             //To avoid a negative life
        m_life = 0;             //Life to 0 = dead
    }
}

void Personnage::attack(Personnage &objective)
{
    cout << m_name << " attacks " << objective.getName() << endl;
    objective.receiveDamage(m_weapon.getDamage());    //We damage the objective with the power of the weapon coming from the class Weapon
}

void Personnage::magicAttack(Personnage &objective)
{
    cout << m_name << " launches a magic attack for " << objective.getName() << endl;
    objective.receiveDamage(m_magic.getDamageSpell());
    m_mana -= m_magic.manageMana();
}

//TODO: Code a class for the potions
void Personnage::drinkPotionLife(int quantityPotion)
{
    cout << m_name << " drinkss " << quantityPotion << " to restore life" << endl;
    m_life += quantityPotion;
    if(m_life > 100){           //To avoid more than 100 in life
        m_life = 100;
    }
    cout << m_name << " has" << m_life << " of life" << endl;
}

void Personnage::changeWeapon(string newWeapon, int damageNewWeapon)
{
    cout << m_name << " changes the weapon to: " << newWeapon << endl;
    m_weapon.change(newWeapon, damageNewWeapon);
    m_weapon.verifyWeapon();
}

void Personnage::changeSpell(string newSpell, int damageNewSpell, int manaNewSpell)
{
    cout << m_name << " changes to spell: " << newSpell << endl;
    m_magic.changeSpell(newSpell, damageNewSpell, manaNewSpell);
    m_magic.verifySpell();
}

bool Personnage::isAlive()
{               ////This is a constant method. We can't change the value of the variable, it just verifies the life's level

    return m_life > 0;
}

void Personnage::verifyState() const
{
    cout << "Contender: " << m_name << endl;
    cout << "Life: " << m_life << endl;
    cout << "Mana: " << m_mana << endl;
    m_weapon.verifyWeapon();
    m_magic.verifySpell();
}

std::string Personnage::getName()
{
    return m_name;
}
