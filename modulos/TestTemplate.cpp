#include <string>
#include <iostream>
//#include "Project.hpp"

#define COLOR "\x1b[34m"
#define RESET "\x1b[0m\n"

void my_own_test(void)
{
    
}

void subject_test(void)
{
    
}

void check_leaks(char **av)
{
	std::cout << COLOR << std::endl;
	std::string	s = av[0];
	s = "leaks " + s.erase(0,2);
	s += " >> leaks.txt";
	system(s.c_str());
	system("grep \"total leaked bytes\" leaks.txt");
	system("rm leaks.txt");
}

int main(int ac, char **av) 
{
    subject_test();
	my_own_test();
    (void)ac;
	check_leaks(av);
    return 0;
}
