#include <iostream>
#include <fstream>

void replace(std::string file, std::string world1,std::string world2)
{
    std::cout<<file<<std::endl;
    std::cout<<world1<<std::endl;
    std::cout<<world2<<std::endl;
     ofstream MyFile("filename.txt");
}

int main(int argc, char **argv)
{
    (void)argv;
    if(argc==4){
        replace(argv[1], argv[2], argv[3]);
 
    } 
    else 
    {
        std::cout<<"Must be 3 arguments"<<std::endl;
    }
}