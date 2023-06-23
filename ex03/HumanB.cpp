#include "HumanB.hpp"

HumanB::HumanB(std::string str)
{
    _name = str;
}
HumanB::~HumanB(){}

void HumanB::attack()
{
    std::cout<<_name<<" attacks with their "<<_weapon->getType()<<std::endl;
}

void  HumanB::setWeapon(Weapon& weapon)
{
    _weapon = &weapon;
}

