/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: swofferh <swofferh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/23 17:31:12 by swofferh      #+#    #+#                 */
/*   Updated: 2023/03/23 18:14:43 by swofferh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Animal.hpp"

Cat::Cat(void) : Animal("Cat")
{
	std::cout <<BLUE<< "Cat: " <<RESET<< "Default construtor called" << std::endl;
	return ;
}

Cat::Cat(const Cat& ref)
{
	*this = ref;
	std::cout <<BLUE<< "Cat: " <<RESET<< "Copy construtor called" << std::endl;
	return ;
}

Cat::~Cat(void)
{
	std::cout <<BLUE<< "Cat: " <<RESET<< "Destructor called" << std::endl;
	return ;
}

Cat& Cat::operator=(const Cat& ref)
{
	std::cout <<BLUE<< "Cat: " <<RESET<< "Assignment operator" << std::endl;
	this->_type = ref._type;
	return (*this);
}

void Cat::makeSound(void) const
{
	std::cout <<BLUE<< "Cat: " <<RESET<< "Meouwww" << std::endl;
	return ;
}
