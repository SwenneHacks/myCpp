
#include "Zombie.hpp"

Zombie::Zombie(std::string name) : _name(name) {
	std::cout << "[A zombie named '" << _name << "' raised out of a constructor's grave]." << std::endl;
}

Zombie::~Zombie(){
	std::cout << "[BANG!] " << Zombie::_name << " was killed by a destructor.\n" << std::endl;
}

void Zombie::announce(void) {
	std::cout << this->_name << ": Braiiiiiiinnnssss..." << std::endl;
}

std:: string Zombie::name[8] = {
        "Billy",
        "Jacky",
        "Loly",
        "Dudy",
        "Jonny",
        "Jenny",
        "Suzan",
        "Karen"
    };
