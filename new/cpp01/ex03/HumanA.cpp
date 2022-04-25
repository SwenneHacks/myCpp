
#include "HumanA.hpp"
#include <string>
#include <iostream>

void HumanA::attack() {

	std::cout << this->_getName() << " attacks with his " << this->_weaponARef.getType() << std::endl;
}

HumanA::HumanA(const std::string& name, const Weapon& weaponRef) : _weaponARef(weaponRef), _name(name){

	std::cout << GREEN << "[HumanA] constructor is called and created human [" << this->_getName() << "]." << RESET << std::endl;
}

HumanA::~HumanA() {

	std::cout << RED << "[HumanB] destructor is called and destroyed human [" << this->_getName() << "]." << RESET << std::endl;
}

std::string HumanA::_getName() {

	return this->_name;
}
