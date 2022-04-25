
#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp" 

#include <string>
#include <iostream>

const std::string& Weapon::getType() const {

	return this->_typeRef;
}

void Weapon::setType(const std::string& type) {

	this->_type = type;
}

Weapon::Weapon(const std::string& type) : _type(type), _typeRef(_type){

	std::cout << GREEN << "[Weapon] constructor is called and created weapon [" << RESET << this->getType() << "]." << std::endl;
}

Weapon::~Weapon() {

	std::cout << RED << "[Weapon] destructor is called and destroyed weapon [" << RESET << this->getType() << "]." << std::endl;
}