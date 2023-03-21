#include <string>
#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

void my_own_test(void)
{
	ClapTrap Bob("Alessandro");
	ScavTrap test("Giacomo");
	FragTrap last("Damiano");

	std::cout << std::endl << " >>>> ClapTrap <<<< " << std::endl;
	Bob.takeDamage(5);
	Bob.beRepaired(3);
	Bob.attack("Xander");
	Bob.takeDamage(15);
	Bob.beRepaired(3);

	std::cout << std::endl << " >>>> ScavTrap <<<< " << std::endl;
	test.attack("Bob");
	test.beRepaired(10);
	test.takeDamage(1200);
	test.attack("Bob");
	test.guardGate();

	std::cout << std::endl << " >>>> FragTrap <<<< " << std::endl;
	last.attack("Tim");
	last.beRepaired(10);
	last.takeDamage(300);
	last.attack("Tim");
	last.highFiveGuys();

	std::cout << std::endl << " >>>> Destructors <<<< " << std::endl;
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
