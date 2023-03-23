/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: swofferh <swofferh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/23 18:36:56 by swofferh      #+#    #+#                 */
/*   Updated: 2023/03/23 18:36:59 by swofferh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include "Animal.hpp"

Brain::Brain(void)
{
	std::cout << "Brain: Default construtor called" << std::endl;
	return ;
}

Brain::Brain(const Brain& ref)
{
	*this = ref;
	std::cout << "Brain: Copy construtor called" << std::endl;
	return ;
}

Brain::~Brain(void)
{
	std::cout << "Brain: Destructor called" << std::endl;
	return ;
}

Brain& Brain::operator=(const Brain& ref)
{
	std::cout << "Brain: Assignment operator" << std::endl;
	for (int i = 0; i < NUMBER_ANIMALS; i++)
        _ideas[i] = ref._ideas[i];
	return (*this);
}
