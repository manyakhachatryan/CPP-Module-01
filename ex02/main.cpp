#include <iostream>
int main()
{
    std::string a = "HI THIS IS BRAIN";
    std::string* stringPTR = &a;
    std::string& stringREF = a;

    std::cout<<"The memory address of the string variable is "<<&a<<std::endl;
    std::cout<<"The memory address held by stringPTR is "<<stringPTR<<std::endl;
    std::cout<<"The memory address held by stringREF is "<<&stringREF<<std::endl;


    std::cout<<"The value of the string variable is "<<a<<std::endl;
    std::cout<<"The value pointed to by stringPTR is "<<*stringPTR<<std::endl;
    std::cout<<"The value pointed to by stringREF is "<<stringREF<<std::endl;

    return 0;
}