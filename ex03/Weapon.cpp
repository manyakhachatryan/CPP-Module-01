#include "Weapon.hpp"

Weapon::Weapon(std::string str)
{
    _type = str;
}
Weapon::~Weapon(){}

void Weapon::setType(std::string type)
{
    _type = type;
}

const std::string& Weapon::getType()
{
    return _type;
}