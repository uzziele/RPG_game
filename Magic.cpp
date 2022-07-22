
#include "Magic.hpp"

using namespace std;

Magic::Magic()
{
    m_nameSpell = "Basic spell";
    m_damageSpell = 10;
    m_usedMana = 10;
}

Magic::Magic(string nameSpell, int damageSpell, int usedMana)
{
    m_nameSpell = nameSpell;
    m_damageSpell = damageSpell;
    m_usedMana = usedMana;
}

Magic::~Magic()
{

}

void Magic::changeSpell(string nameSpell, int damageSpell, int usedMana)
{
    m_nameSpell = nameSpell;
    m_damageSpell = damageSpell;
    m_usedMana = usedMana;
}

void Magic::verifySpell() const
{
    cout << "The actual spell is: " << m_nameSpell << ". The Damage it produces is: " << m_damageSpell << ". It spends " << m_usedMana << " of mana" << endl;
}

int Magic::getDamageSpell() const
{
    return m_damageSpell;
}

int Magic::manageMana() const
{
    return m_usedMana;
}
