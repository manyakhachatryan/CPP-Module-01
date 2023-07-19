#include <iostream>
#include <fstream>

void replace(std::string file, std::string world1,std::string world2)
{
    std::string myText;
    size_t n;
    int length1;
    int length2;

    length2 = world2.length();
    length1 = world1.length();

    std::ifstream MyReadFile; 
    MyReadFile.open(file);
    if(!MyReadFile) 
    {
        std::cout << "Error: file could not be opened\n";
    }
    else 
    {
        std::ofstream MyFile(file+".replace");
        while (getline (MyReadFile, myText)) 
        {
            n = myText.find(world1);
            while(n!=std::string::npos)
            {
                myText.erase(n, length1);
                myText.insert(n,world2);
                n = myText.find(world1, n + length2);
            }
            MyFile << myText<<"\n";
        }
    }
    MyReadFile.close();
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