#include "FragTrap.hpp"

#include <string>
#include <iostream>

FragTrap::FragTrap()
{ 
	std::cout << "Copy constructed called on FragTrap" << std::endl;
	return ;
}

FragTrap::FragTrap(std::string Name) : ClapTrap(Name)
{ 
	std::cout << Name << " has been constructed " << "[FragTrap]"  << std::endl;
	_name = Name;
    _health = 100;
	_energy = 100;
	_damage = 30;
}

FragTrap::FragTrap(const FragTrap& rhs)
{
    *this = rhs;
	return ;
}

FragTrap& FragTrap::operator=(const FragTrap& ref)
{ 
	std::cout << "FragTrap: Copy assignment operator called" << std::endl;
	_name = ref._name;
	_health = ref._health;
	_energy = ref._energy;
	_damage = ref._damage;
	return (*this);
}

// void FragTrap::attack(const std::string& target) 
// { 
// 	std::cout << YELLOW << "ATTACK - FragTrap" << END;
// 	if (_energy > 0 && _health > 0) {
// 		std::cout << "FragTrap " << _name << " attacks " << std::endl;
//         std::cout << target << " damaged with " << _damage << " points" << std::endl;
// 		_energy--;
// 	}
// 	else
// 		std::cout << RED << "No energy left for " << this->_name << std::endl;
// }

void FragTrap::highFiveGuys(void)
{ 
	std::cout << GREEN << "Let's all do this, high five guysssss" << END;
	return ;
}

FragTrap::~FragTrap() 
{ 
	std::cout << "Destructor called for Fragtrap" << std::endl;
	return ;
}