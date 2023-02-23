#include "ClapTrap.hpp"

#include <string>
#include <iostream>

ClapTrap::ClapTrap(std::string Name) : _name(Name), _energy(10), _damage(0), _hits(10) 
{   std::cout << Name << "is ready to fight." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& copy)
{   *this = copy; 
}

ClapTrap&	ClapTrap::operator=(const ClapTrap& copy)
{   return(*this); 
}

ClapTrap::~ClapTrap() 
{   std::cout << "Destructor called for" << *this << std::endl; 
}

std::ostream &operator<<(std::ostream &out, const ClapTrap &in) 
{   out << in; return(out); 
}

void 	ClapTrap::attack(const std::string& target)
{   
    this->_damage--;
    std::cout << target << "got attacked. Damage is now: " << this->_damage << RESET << std::endl;
}

void 	ClapTrap::takeDamage(unsigned int amount)
{

}

void 	ClapTrap::beRepaired(unsigned int amount)
{

}
