#include "Zombie.hpp"

Zombie::Zombie()
{
    
}

Zombie::~Zombie()
{
    
}

void Zombie::setName(std::string name)
{
    _name = name;
}

void Zombie::announce(void)
{
     std::cout<<_name<<std::endl;
}