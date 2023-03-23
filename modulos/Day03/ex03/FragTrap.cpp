#include "FragTrap.hpp"

#include <string>
#include <iostream>

FragTrap::FragTrap() : ClapTrap()
{ std::cout << "Copy constructed called on FragTrap" << std::endl; 
}

FragTrap::FragTrap(const FragTrap& rhs)
{ std::cout << "Copy constructed called on FragTrap" << std::endl; 
    *this = rhs;}

FragTrap::FragTrap(std::string Name)
{ std::cout << "FragTrap " << Name << " has been constructed." << std::endl;
	_name = Name;
    _health = 100;
	_energy = 100;
	_damage = 30;
}

FragTrap& FragTrap::operator=(const FragTrap& ref)
{ std::cout << "FragTrap: Copy assignment operator called" << std::endl;
	_name = ref._name;
	_health = ref._health;
	_energy = ref._energy;
	_damage = ref._damage;
	return (*this);
}

void FragTrap::attack(const std::string& target) 
{ std::cout << YELLOW << "ATTACK [FragTrap]" << END;
	if (_energy > 0 && _health > 0) {
		std::cout << "FragTrap " << _name << " attacks " << std::endl;
        std::cout << target << " damaged with " << _damage << " points" << std::endl;
		_energy--;
	}
}

void FragTrap::highFiveGuys(void)
{ std::cout << "FragTrap: Let's all do this, high five guysssss." << std::endl;
	return ;
}

FragTrap::~FragTrap() 
{ std::cout << "FragTrap destructor called" << std::endl; }