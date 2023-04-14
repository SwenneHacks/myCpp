/**
 * @file Dog.cpp
 * @author swofferh  
 * @brief 
 * @version 0.1
 * @date 2023-04-14
 */

#include "Dog.hpp"
#include "Animal.hpp"

static std::string DOG = GREEN "[dog] " RESET;

Dog::Dog(void) : Animal("Dog")
{ std::cout << DOG << "	 Default construtor called" << std::endl;
	_brain = new Brain();
	return ;
}

Dog::Dog(const Dog& ref)
{ std::cout << DOG << "	 COPY construtor called" << std::endl;
	*this = ref;
	return ;
}

Dog& Dog::operator=(const Dog& ref)
{ std::cout << DOG << "	 Assignment operator" << std::endl;
	this->_type = ref._type;
	return (*this);
}

void Dog::makeSound(void) const
{ 
	std::cout << RED << "Type:" << RESET << getType();
	std::cout << RED << " Sound:" << RESET << "Woeff" << std::endl;
	return ;
}

Dog::~Dog(void)
{ std::cout << DOG << "	 Destructor called" << std::endl;
	delete _brain;
	return ;
}
