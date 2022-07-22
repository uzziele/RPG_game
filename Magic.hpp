#ifndef DEF_MAGIC
#define DEF_MAGIC

#include <iostream>
#include <string>

class Magic
{
    public:

        Magic();
        Magic(std::string nameSpell, int damageSpell, int usedMana);
        ~Magic();
        void changeSpell(std::string nameSpell, int damageSpell, int usedMana);
        void verifySpell() const;
        int getDamageSpell() const;
        int manageMana() const;

    private:

        std::string m_nameSpell;
        int m_damageSpell;
        int m_usedMana;
};

#endif // MAGIC_HPP
