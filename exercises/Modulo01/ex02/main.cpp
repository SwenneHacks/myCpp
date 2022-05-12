
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


// int		main(int ac, char **av)
// {
// 	test();
// 	std::cout << std::endl;
// 	std::string	s = av[0];
// 	s = "leaks " + s.erase(0,2);
// 	if (ac > 1 && !strcmp(av[1],"leaks"))
// 		system(s.c_str());
// 	else
// 	{
// 		s += " >> leaks.txt";
// 		system(s.c_str());
// 		system("grep \"total leaked bytes\" leaks.txt");
// 		system("rm leaks.txt");
// 	}
// 	return (0);
// }
