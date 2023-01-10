
#include "Zombie.hpp"

Zombie::Zombie(){
	//std::cout << "[ A zombie raised out of a constructor's grave ]." << std::endl;
}

void Zombie::announce() {
	std::cout << Zombie::_name << " > Braiiiiiiinnnssss..." << std::endl;
}

void Zombie::setName(std::string name){
	this->_name = name;
}

Zombie::~Zombie(){
	//std::cout << "[ " << Zombie::_name << " killed by a destructor." << std::endl;
}
