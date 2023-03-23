/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Animal.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: swofferh <swofferh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/23 17:31:21 by swofferh      #+#    #+#                 */
/*   Updated: 2023/03/23 18:19:37 by swofferh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) : _type("Animal")
{
	std::cout << "Default construtor called for Animal" << std::endl;
	return ;
}

Animal::Animal(const std::string& kind) : _type(kind)
{
	std::cout << "Inherited construtor called for Animal" << std::endl;
	return ;
}

Animal::Animal(const Animal& copy)
{
	*this = copy;
	std::cout << "Copy construtor called for Animal" << std::endl;
	return ;
}

Animal::~Animal(void)
{
	std::cout << "Destructor called for Animal" << std::endl;
	return ;
}

Animal& Animal::operator=(const Animal& ref)
{
	std::cout << "Assignment operator" << std::endl;
	this->_type = ref._type;
	return (*this);
}

void Animal::makeSound(void) const
{
	std::cout << "????? sound" << std::endl;
	return ;
}

const std::string Animal::getType(void) const
{
	return (_type);
}