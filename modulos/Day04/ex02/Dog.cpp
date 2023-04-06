//
// Created by xvoorvaa on 13/08/2022.
//

#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog"), _brain(new Brain)
{
	std::cout << "Dog: Default construtor called" << std::endl;
	return ;
}

Dog::Dog(const Dog& ref) : _brain(new Brain(*ref._brain))
{
	std::cout << "Dog: Copy construtor called" << std::endl;
	*this = ref;
	return ;
}

Dog::~Dog(void)
{
	delete _brain;
	std::cout << "Dog: Destructor called" << std::endl;
	return ;
}

Dog& Dog::operator=(const Dog& ref)
{
	std::cout << "Dog: Assignment operator" << std::endl;
	for (int i = 0; i < 100; i++)
		_brain->_ideas[i] = ref._brain->_ideas[i];
	this->_type = ref._type;
	return (*this);
}

void Dog::makeSound(void) const
{
	std::cout << "Dog: WOoooeeef" << std::endl;
	return ;
}