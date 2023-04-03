/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongCat.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: swofferh <swofferh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/23 17:30:26 by swofferh      #+#    #+#                 */
/*   Updated: 2023/04/03 15:14:32 by swofferh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include "Animal.hpp"

static std::string WRONGCAT = MAGENTA "[Wrong Cat] " RESET;

WrongCat::WrongCat(void) : WrongAnimal("WrongCat")
{
	std::cout << WRONGCAT << "	Default construtor called" << std::endl;
	return ;
}

WrongCat::WrongCat(const WrongCat& ref)
{
	*this = ref;
	std::cout << WRONGCAT << "	Copy construtor called" << std::endl;
	return ;
}

WrongCat& WrongCat::operator=(const WrongCat& ref)
{
	std::cout << WRONGCAT << "	Assignment operator" << std::endl;
	this->_type = ref._type;
	return (*this);
}

WrongCat::~WrongCat(void)
{
	std::cout << WRONGCAT << "	Destructor called" << std::endl;
	return ;
}
