#include "DiamondTrap.hpp"

#include <string>
#include <iostream>

DiamondTrap::DiamondTrap() 
{ 
	std::cout << "Deafault constructor called on DiamondTrap" << std::endl;
	return ;
}

DiamondTrap::DiamondTrap(std::string Name)
{
	std::cout << "Constructor called on DiamondTrap" << std::endl;
	ScavTrap scav(Name);
	FragTrap frag(Name);
	//going to make a Fragtrap
	//goiong to make a scavtrap
	// this->_health = frag._health;
	// this->_damage = frag._damage;
	// this->_energy = ScavTrap::_energy;
	return ;
}

DiamondTrap::DiamondTrap(const DiamondTrap& copy)
{ 
	*this = copy;
	return ;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& ref)
{ 
	std::cout << "DiamondTrap: Copy assignment operator called" << std::endl;
	// _name = ref._name;
	// _health = ref._health;
	// _energy = ref._energy;
	// _damage = ref._damage;
	return (*this);
}

void DiamondTrap::attack(const std::string& target) 
{ 
	std::cout << YELLOW << "ATTACK [DiamondTrap]" << END;
	// if (_energy > 0 && _health > 0) {
	// 	std::cout << "DiamondTrap " << _name << " attacks " << std::endl;
    //     std::cout << target << " damaged with " << _damage << " points" << std::endl;
	// 	_energy--;
	// }
}

void DiamondTrap::whoAmI(void)
{ 
	//std::cout << this->name << "and ClapTrap:" << ClapTrap::_name << std::endl;
}

DiamondTrap::~DiamondTrap() 
{ 
	std::cout << "DiamondTrap destructor called" << std::endl; 
}