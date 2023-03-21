#include "ScavTrap.hpp"

#include <string>
#include <iostream>

ScavTrap::ScavTrap() : ClapTrap() 
{ std::cout << "Default ScavTrap has been constructed." << std::endl; }

ScavTrap::ScavTrap(const ScavTrap& rhs) : ClapTrap(rhs) 
{ std::cout << "Copy constructed called on ScavTrap" << std::endl; }

ScavTrap::ScavTrap(std::string new_name)
{
	std::cout << "ScavTrap " << new_name << " has been constructed." << std::endl;
	_name = new_name;
	_health = 100;
	_energy = 50;
	_damage = 20;
}

ScavTrap::~ScavTrap() 
{ std::cout << "ScavTrap destructor called" << std::endl; }

ScavTrap& ScavTrap::operator=(const ScavTrap& ref)
{ 	std::cout << "ScavTrap: Copy assignment operator called" << std::endl;
	_name = ref._name;
	_health = ref._health;
	_energy = ref._energy;
	_damage = ref._damage;
	return (*this);
}

void ScavTrap::attack(const std::string& target)
{ std::cout << RED << "ATTACK [ScavTrap] " << END;
	if (_energy > 0 && _health > 0) {
		std::cout << "ScavTrap " << _name << " attacks " << std::endl;
        std::cout << target << " damaged with " << _damage << " points" << std::endl;
		_energy--;
	}
}

void ScavTrap::guardGate(void)
{ std::cout << "ScavTrap: Guarding the gate" << std::endl;
	return ;
}
