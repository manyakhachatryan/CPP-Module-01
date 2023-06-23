#include "Zombie.hpp"
int main()
{
    Zombie* zombie1 = zombieHorde(5, "foo");
    int i;
    for(i = 0; i<5; ++i)
    {
        zombie1[i].announce();;
    }
    delete []zombie1;
    return 0;
}