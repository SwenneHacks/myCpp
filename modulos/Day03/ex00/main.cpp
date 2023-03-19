#include <string>
#include <iostream>
#include "ClapTrap.hpp"

void my_own_test(void)
{
	ClapTrap start;
	ClapTrap Jelle("Jelle"), Dudi("Dudi"), Abbi("Abbi");

	Dudi.attack("Jelle");
	Jelle.takeDamage(5);
	Abbi.attack("Jelle");
	Jelle.takeDamage(4);
	Jelle.beRepaired(10);
	Jelle.attack("Dudi");
	Jelle.attack("Dudi");
	Jelle.attack("Dudi");
	Jelle.attack("Dudi");
	Jelle.attack("Dudi");
	Jelle.attack("Dudi");
	Jelle.attack("Dudi");
	Jelle.attack("Dudi");
	Jelle.attack("Dudi");
	Jelle.attack("Dudi");
	Dudi.takeDamage(10);

}

void check_leaks(char **av)
{
	std::cout << YELLOW << std::endl;
	std::string	s = av[0];
	s = "leaks " + s.erase(0,2);
	s += " >> leaks.txt";
	system(s.c_str());
	system("grep \"total leaked bytes\" leaks.txt");
	system("rm leaks.txt");
}

int main(int ac, char **av) 
{
    my_own_test();
    (void)ac;
	check_leaks(av);
    return 0;
}
