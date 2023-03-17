#include <string>
#include <iostream>
#include "ClapTrap.hpp"

void my_own_test(void)
{
	ClapTrap Jelle("Jelle"), Xander("Xander"), Abbi("Abbi");

	Jelle.attack("Xander");
	Jelle.attack("Xander");
	Jelle.attack("Xander");
	Jelle.attack("Xander");
	Jelle.attack("Xander");
	Jelle.attack("Xander");
	Jelle.attack("Xander");
	Jelle.attack("Xander");
	Jelle.attack("Xander");
	Jelle.attack("Xander");
	Jelle.attack("Xander");
	Xander.takeDamage(50);
	Jelle.takeDamage(10);
	Jelle.attack("Xander");
	Abbi.beRepaired(2);
	Abbi.beRepaired(2);
	Abbi.beRepaired(2);
	Abbi.beRepaired(2);
	Abbi.beRepaired(2);
	Abbi.beRepaired(2);
	Abbi.beRepaired(2);
	Abbi.beRepaired(2);
	Abbi.beRepaired(2);
	Abbi.beRepaired(2);
	Abbi.beRepaired(2);

}

void check_leaks(char **av)
{
	std::cout << RED << std::endl;
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
