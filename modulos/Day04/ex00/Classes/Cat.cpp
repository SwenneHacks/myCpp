/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: swofferh <swofferh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/23 17:31:12 by swofferh      #+#    #+#                 */
/*   Updated: 2023/04/03 15:55:50 by swofferh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Animal.hpp"

static std::string CAT = BLUE "[cat] " RESET;

Cat::Cat(void) : Animal("Cat")
{
	std::cout << CAT << "	 Default construtor called" << std::endl;
	return ;
}

Cat::Cat(const Cat& ref)
{
	*this = ref;
	std::cout << CAT << "	Copy construtor called" << std::endl;
	return ;
}

Cat& Cat::operator=(const Cat& ref)
{
	std::cout << CAT << "	Assignment operator" << std::endl;
	this->_type = ref._type;
	return (*this);
}

void Cat::makeSound(void) const
{
	std::cout << "Miauu" << std::endl;
	return ;
}

Cat::~Cat(void)
{
	std::cout << CAT << "	 Destructor called" << std::endl;
	return ;
}
