/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: swofferh <swofferh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/24 14:36:33 by swofferh      #+#    #+#                 */
/*   Updated: 2023/03/28 19:15:17 by swofferh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

#include <string>
#include <iostream>

ScavTrap::ScavTrap(void) : ClapTrap("ScavTrap") 
{ 
	std::cout << "Default ScavTrap has been constructed" << std::endl;
	return ;
}


ScavTrap::ScavTrap(std::string new_name) : ClapTrap(new_name)
{
	std::cout << new_name << " has been constructed" << " [ScavTrap]" << std::endl;
	_health = 100;
	_energy = 50;
	_damage = 20;
	return ;
}

ScavTrap::ScavTrap(const ScavTrap& copy) : ClapTrap(copy) 
{ 
	std::cout << "Copy constructed called on ScavTrap" << std::endl; 
	return ;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& ref)
{ 	
	std::cout << "ScavTrap: Copy assignment operator called" << std::endl;
	_name = ref._name;
	_health = ref._health;
	_energy = ref._energy;
	_damage = ref._damage;
	return (*this);
}

void ScavTrap::attack(const std::string& target)
{
	std::cout << BLUE << this->_name << " ATTACK " << "- ScavTrap" << END;
	
	if (_energy > 0 && _health > 0) 
	{
		std::cout << "ScavTrap attacks " << target << std::endl;
		_energy--;
	}
	else
		std::cout << RED << "No energy left for " << this->_name << END;
	return ;
}

void ScavTrap::guardGate(void)
{
	std::cout << GREEN << "The gate is being guarded by " << this->_name << END;
	return ;
}

ScavTrap::~ScavTrap() 
{ 
	std::cout << "Destructor called for ScavTrap" << std::endl; 
	return ;
}
