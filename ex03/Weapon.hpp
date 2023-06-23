#ifndef WEAPON_HPP
#define WEAPON_HPP
#include <iostream>

class Weapon
{
    public:
        Weapon(std::string str);
        ~Weapon();
        void setType(std::string type);
        const std::string& getType();
    private:
        std::string _type;
};

#endif