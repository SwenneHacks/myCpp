/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: swofferh <swofferh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/23 17:31:03 by swofferh      #+#    #+#                 */
/*   Updated: 2023/03/23 18:13:21 by swofferh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog")
{
	std::cout <<GREEN<< "Dog: " <<RESET<< "Default construtor called" << std::endl;
	return ;
}

Dog::Dog(const Dog& ref)
{
	*this = ref;
	std::cout << GREEN << "Dog: " << RESET << "Copy construtor called" << std::endl;
	return ;
}

Dog::~Dog(void)
{
	std::cout <<GREEN<< "Dog: " <<RESET<< "Destructor called" << std::endl;
	return ;
}

Dog& Dog::operator=(const Dog& ref)
{
	std::cout <<GREEN<< "Dog: " <<RESET<< "Assignment operator" << std::endl;
	this->_type = ref._type;
	return (*this);
}

void Dog::makeSound(void) const
{
	std::cout <<GREEN<< "Dog: " <<RESET<< "WOoooeeef" << std::endl;
	return ;
}
