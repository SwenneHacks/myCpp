#include "ClapTrap.hpp"

#include <string>
#include <iostream>

ClapTrap::ClapTrap(std::string Name) : _name(Name), _energy(10), _damage(0), _hits(10) 
{   std::cout << Name << "is ready to fight." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& copy)
{   *this = copy; 
}

ClapTrap&	ClapTrap::operator=(const ClapTrap& target)
{   
    this->_name = target._name;
	this->_hits = target._hits;
	this->_energy = target._energy;
	this->_damage = target._damage;
    return(*this); 
}

std::ostream &operator<<(std::ostream &
out, const ClapTrap &in) 
{   out << in; return(out); 
}

ClapTrap::~ClapTrap() 
{   std::cout << "Destructor called for" << *this << std::endl; 
}

void 	ClapTrap::attack(const std::string& target)
{   
    this->_name = target;
    this->_damage = _damage - 1;
    this->_energy--;
    std::cout << target << "got DAMAGED. Damage is now: " << this->_damage << RESET << std::endl;
}

void 	ClapTrap::takeDamage(unsigned int amount)
{

}

void 	ClapTrap::beRepaired(unsigned int amount)
{
    this->_damage = _damage - amount;
    this->_energy--;
    std::cout << this->_name << "got HEALED. Damage is now: " << this->_damage << RESET << std::endl;
}
