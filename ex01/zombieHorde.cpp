#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    Zombie* zombies;

    zombies = new Zombie[N];
    int i;
    for(i = 0; i<N; ++i)
    {
        zombies[i].setName(name);
    }
    return zombies;
}
