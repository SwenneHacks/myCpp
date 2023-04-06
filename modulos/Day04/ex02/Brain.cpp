//
// Created by xvoorvaa on 13/08/2022.
//

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
	for (int i = 0; i < NUMBER_ANIMALS; i++)
		_ideas[i] = ref._ideas[i];
	return (*this);
}
