/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: swofferh <swofferh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/23 17:31:03 by swofferh      #+#    #+#                 */
/*   Updated: 2023/04/03 15:56:02 by swofferh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

static std::string DOG = GREEN "[dog] " RESET;

Dog::Dog(void) : Animal("Dog")
{
	std::cout << DOG << "	 Default construtor called" << std::endl;
	return ;
}

Dog::Dog(const Dog& ref)
{
	*this = ref;
	std::cout << DOG << "	Copy construtor called" << std::endl;
	return ;
}

Dog& Dog::operator=(const Dog& ref)
{
	std::cout << DOG << "	Assignment operator" << std::endl;
	this->_type = ref._type;
	return (*this);
}

void Dog::makeSound(void) const
{
	std::cout << "Woeff" << std::endl;
	return ;
}

Dog::~Dog(void)
{
	std::cout << DOG << "	 Destructor called" << std::endl;
	return ;
}
