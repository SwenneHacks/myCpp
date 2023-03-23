/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongCat.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: swofferh <swofferh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/23 17:30:26 by swofferh      #+#    #+#                 */
/*   Updated: 2023/03/23 18:22:36 by swofferh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include "../colors.hpp"

WrongCat::WrongCat(void) : WrongAnimal("WrongCat")
{
	std::cout <<MAGENTA<< "WrongCat:" <<RESET<< " Default construtor called" << std::endl;
	return ;
}

WrongCat::WrongCat(const WrongCat& ref)
{
	*this = ref;
	std::cout <<MAGENTA<< "WrongCat:" <<RESET<< " Copy construtor called" << std::endl;
	return ;
}

WrongCat::~WrongCat(void)
{
	std::cout <<MAGENTA<< "WrongCat:" <<RESET<< " Destructor called" << std::endl;
	return ;
}

WrongCat& WrongCat::operator=(const WrongCat& ref)
{
	std::cout <<MAGENTA<< "WrongCat:" <<RESET<< " Assignment operator" << std::endl;
	this->_type = ref._type;
	return (*this);
}

void WrongCat::makeSound(void) const
{
	std::cout <<MAGENTA<< "WrongCat:" <<RESET<< " Meouwww" << std::endl;
	return ;
}
