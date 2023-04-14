/**
 * @file Cat.cpp
 * @author swofferh  
 * @brief 
 * @version 0.1
 * @date 2023-04-14
*/

#include "Cat.hpp"
#include "Animal.hpp"

static std::string CAT = BLUE "[cat] " RESET;

Cat::Cat(void) : Animal("Cat") 
{ std::cout << CAT << "	 Default construtor called" << std::endl;
	_brain = new Brain();
	return ;
}

Cat::Cat(const Cat& ref)
{ std::cout << CAT << "	 COPY construtor called" << std::endl;
	*this = ref;
	return ;
}

Cat& Cat::operator=(const Cat& ref)
{ std::cout << CAT << "	 Assignment operator" << std::endl;
	this->_type = ref._type;
	return (*this);
}

void Cat::makeSound(void) const
{ 
	std::cout << RED << "Type:" << RESET << getType();
	std::cout << RED << " Sound:" << RESET << "Miauu" << std::endl;
	return ;
}

Cat::~Cat(void)
{ std::cout << CAT << "	 Destructor called" << std::endl;
	delete _brain;
	return ;
}
