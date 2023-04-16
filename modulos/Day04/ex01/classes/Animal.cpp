/**
 * @file Animal.cpp
 * @author swofferh  
 * @brief 
 * @version 0.1
 * @date 2023-04-14
*/

#include "Animal.hpp"

static std::string ANIMAL = YELLOW "[animal] " RESET;

Animal::Animal(void) : _type("???")
{std::cout << ANIMAL << "Default construtor called" << std::endl;
	return ;
}

Animal::Animal(const std::string& kind) : _type(kind)
{std::cout << ANIMAL << "Inherited construtor called for " << this->_type << std::endl;
	return ;
}

Animal::Animal(const Animal& copy)
{std::cout << ANIMAL << "Copy construtor called" << std::endl;
	*this = copy;
	return ;
}

Animal& Animal::operator=(const Animal& ref)
{std::cout << ANIMAL << "Assignment operator" << std::endl;
	this->_type = ref._type;
	return (*this);
}

void Animal::makeSound(void) const
{ std::cout << RED << "sound:" << RESET << "?????" << std::endl;
	return ;
}

const std::string Animal::getType(void) const
{
	return (_type);
}

Animal::~Animal(void)
{std::cout << ANIMAL << "Destructor called for " << this->_type << std::endl;
	return ;
}
