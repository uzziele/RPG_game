#ifndef DEF_WEAPON
#define DEF_WEAPON

#include <iostream>
#include <string>

class Weapon
{

    public:

        Weapon();
        Weapon(std::string name, int damage);
        ~Weapon();
        void change(std::string name, int damage);
        void verifyWeapon() const;
        int getDamage() const;

    private:

        std::string m_name;
        int m_damage;
};

#endif // WEAPON_HPP_INCLUDED
