
#include <iostream>
#include <string>

int main()
{
    std::string brain = "HI THIS IS BRAIN";
    std::string *brain_ptr = &brain;
    std::string &brain_ref = brain;
    //now the printing part:
    std::cout << "[Str]: " << brain << std::endl;
    std::cout << "[Ptr]: " << brain_ptr << " " << *brain_ptr << std::endl;
    std::cout << "[Ref]: " << brain_ref << std::endl;
    return (0); 
}