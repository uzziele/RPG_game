
#include "Weapon.hpp"

using namespace std;

Weapon::Weapon()
{
    m_name = "Old sword";
    m_damage = 10;
}

Weapon::Weapon(string name, int damage)
{
    m_name = name;
    m_damage = damage;
}

Weapon::~Weapon()
{

}

void Weapon::change(string name, int damage)
{
    m_name = name;
    m_damage = damage;
}

void Weapon::verifyWeapon() const
{
    cout << "Weapon: " << m_name << "(damage: " << m_damage << ")" << endl;
}

int Weapon::getDamage() const
{
    return m_damage;
}
