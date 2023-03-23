/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongAnimal.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: swofferh <swofferh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/23 17:30:10 by swofferh      #+#    #+#                 */
/*   Updated: 2023/03/23 18:22:32 by swofferh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include "../colors.hpp"

WrongAnimal::WrongAnimal(void) : _type("WrongAnimal")
{
	std::cout <<RED<< "WrongAnimal:" <<RESET<< " Default construtor called" << std::endl;
	return ;
}

WrongAnimal::WrongAnimal(const std::string& kind) : _type(kind)
{
	std::cout <<RED<< "WrongAnimal:" <<RESET<< " Default construtor called" << std::endl;
	return ;
}

WrongAnimal::WrongAnimal(const WrongAnimal& ref)
{
	*this = ref;
	std::cout <<RED<< "WrongAnimal:" <<RESET<< " Copy construtor called" << std::endl;
	return ;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout <<RED<< "WrongAnimal:" <<RESET<< " Destructor called" << std::endl;
	return ;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& ref)
{
	std::cout <<RED<< "WrongAnimal:" <<RESET<< " Assignment operator" << std::endl;
	this->_type = ref._type;
	return (*this);
}

void WrongAnimal::makeSound(void) const
{
	std::cout <<RED<< "WrongAnimal:" <<RESET<< " ?????" << std::endl;
	return ;
}

const std::string WrongAnimal::getType(void) const
{
	return (_type);
}
