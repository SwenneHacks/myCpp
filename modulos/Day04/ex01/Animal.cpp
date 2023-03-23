/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Animal.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: swofferh <swofferh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/23 18:36:40 by swofferh      #+#    #+#                 */
/*   Updated: 2023/03/23 18:36:42 by swofferh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) : _type("Animal")
{
	std::cout << "Animal: Default construtor called" << std::endl;
	return ;
}

Animal::Animal(const std::string& kind) : _type(kind)
{
	std::cout << "Animal: Default construtor called" << std::endl;
	return ;
}

Animal::Animal(const Animal& ref)
{
	*this = ref;
	std::cout << "Animal: Copy construtor called" << std::endl;
	return ;
}

Animal::~Animal(void)
{
	std::cout << "Animal: Destructor called" << std::endl;
	return ;
}

Animal& Animal::operator=(const Animal& ref)
{
	this->_type = ref._type;
	return (*this);
}

void Animal::makeSound(void) const
{
	std::cout << "Animal: ?????" << std::endl;
	return ;
}

const std::string Animal::getType(void) const
{
	return (_type);
}