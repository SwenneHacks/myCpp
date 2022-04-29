
#include "Zombie.hpp"

Zombie::Zombie(){
	std::cout << "[A " << Zombie::_type << "zombie raised out of a constructor's grave]." << std::endl;
}

Zombie::~Zombie(){
	std::cout << "[" << Zombie::_name << " killed (again) by a destructor] The endl." << std::endl;
}

void Zombie::announce() {
	std::cout << "<" << Zombie::_name << " (" << Zombie::_type << ")> Braiiiiiiinnnssss..." << std::endl;
}

void Zombie::setName(std::string name){
	this->_name = name;
}

void Zombie::setType(std::string type){
	this->_type = type;
}