#include "FragTrap.hpp"
#include <string>
#include <iostream>

int		main(void)
{
	srand (time(NULL));
	//Constructors
	FragTrap 	frag_one;
	FragTrap	frag_two("CU5TM-TP");

	//Assignation operator
	std::cout << '\n';
	frag_two = FragTrap("FR4G-TP");

	//Range attacks
	std::cout << '\n';
	frag_one.rangeAttack("LEADER");
	frag_two.rangeAttack("SOLDIER");

	//Melee attacks
	std::cout << '\n';
	frag_one.meleeAttack("LEADER");
	frag_two.meleeAttack("SOLDIER");

	//Take damage
	std::cout << '\n';
	frag_one.takeDamage(150);
	frag_two.takeDamage(3);
	frag_two.takeDamage(30);
	frag_two.takeDamage(1);

	//Be repaired
	std::cout << '\n';
	frag_one.beRepaired(150);
	frag_one.beRepaired(50);
	frag_two.beRepaired(3);
	frag_two.beRepaired(30);

	//vaulthunter_dot_exe
	std::cout << '\n';
	frag_one.vaulthunter_dot_exe("LEADER");
	frag_two.vaulthunter_dot_exe("SOLDIER");
	frag_one.vaulthunter_dot_exe("LEADER");
	frag_one.vaulthunter_dot_exe("LEADER");
	frag_one.vaulthunter_dot_exe("LEADER");
	frag_one.vaulthunter_dot_exe("LEADER");

	//Destructors
	std::cout << '\n';
}