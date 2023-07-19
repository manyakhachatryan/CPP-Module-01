#include "HumanA.hpp"

HumanA::HumanA(std::string str, Weapon& weapon) : _weapon(weapon)
{
    _name = str;
}
HumanA::~HumanA(){}

void HumanA::attack()
{
    std::cout<<_name<<" attacks with their "<<_weapon.getType()<<std::endl;

}