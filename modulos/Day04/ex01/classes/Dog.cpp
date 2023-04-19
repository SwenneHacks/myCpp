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

Dog::Dog(const Dog& ref) : _brain()
{ std::cout << DOG << "	 COPY construtor called" << std::endl;
	*this = ref;
	return ;
}

Dog& Dog::operator=(const Dog& ref)
{ std::cout << DOG << "	 Assignment operator" << std::endl;
	if (this != &ref){
		delete this->_brain;
		this->_brain = new Brain(*ref._brain);
		this->_type = ref._type;
	}
	// this->_brain = ref._brain; //shallow copy
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

void	Dog::setIdea(const std::string& idea){
	_brain->setIdea(idea);
}

void	Dog::printIdeas() {
	_brain->printIdeas();
}

Brain	*Dog::getBrain() const {
	return (_brain);
}
