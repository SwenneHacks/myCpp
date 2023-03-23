/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: swofferh <swofferh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/23 18:37:07 by swofferh      #+#    #+#                 */
/*   Updated: 2023/03/23 18:37:09 by swofferh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Animal.hpp"

Cat::Cat(void) : Animal("Cat"), _brain(new Brain)
{
	std::cout << "Cat: Default construtor called" << std::endl;
	return ;
}

Cat::Cat(const Cat& ref) : _brain(new Brain(*ref._brain))
{
	std::cout << "Cat: Copy construtor called" << std::endl;
	*this = ref;
	return ;
}

Cat::~Cat(void)
{
	std::cout << "Cat: Destructor called" << std::endl;
	if (_brain)
		delete _brain;
	return ;
}

Cat& Cat::operator=(const Cat& ref)
{
	std::cout << "Cat: Assignment operator" << std::endl;
	for (int i = 0; i < 100; i++)
		_brain->_ideas[i] = ref._brain->_ideas[i];
	_type = ref._type;
	return (*this);
}

void Cat::makeSound(void) const
{
	std::cout << "Cat: Meouwww" << std::endl;
	return ;
}
