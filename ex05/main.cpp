#include "Harl.hpp"

int main()
{
    std::string str;
    Harl exemplar;
    while(1)
    {
        getline(std::cin, str);
        exemplar.complain(str);
    }
}
