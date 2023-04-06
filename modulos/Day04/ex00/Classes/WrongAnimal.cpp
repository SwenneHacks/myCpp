/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongAnimal.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: swofferh <swofferh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/23 17:30:10 by swofferh      #+#    #+#                 */
/*   Updated: 2023/04/06 13:29:19 by swofferh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include "Animal.hpp"

static std::string WRONGANIMAL = CYAN "[Wrong Animal] " RESET;

WrongAnimal::WrongAnimal(void) : _type("WrongOne")
{ std::cout << WRONGANIMAL << "	Default construtor called" << std::endl;
	return ;
}

WrongAnimal::WrongAnimal(const std::string& kind) : _type(kind)
{ std::cout << WRONGANIMAL << "	Inherited construtor called for " 
	<< this->_type << std::endl;
	return ;
}

WrongAnimal::WrongAnimal(const WrongAnimal& ref)
{
	*this = ref;
	std::cout << WRONGANIMAL << "	Copy construtor called" << std::endl;
	return ;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& ref)
{ std::cout << WRONGANIMAL << "	Assignment operator" << std::endl;
	this->_type = ref._type;
	return (*this);
}

void WrongAnimal::makeSound(void) const
{ std::cout << RED << " Sound: " << RESET << "!!!!" << std::endl;
	return ;
}

const std::string WrongAnimal::getType(void) const
{ std::cout << RED << "Type: " << RESET << _type;
	return (_type);
}

WrongAnimal::~WrongAnimal(void)
{ std::cout << WRONGANIMAL << "	Destructor called" << std::endl;
	return ;
}
