#include "Zombie.hpp"
int main ()
{
    Zombie* zombie1 =  newZombie("Foo");
    zombie1->announce();

    randomChump("Boo");
    delete zombie1;
    return 0;
}