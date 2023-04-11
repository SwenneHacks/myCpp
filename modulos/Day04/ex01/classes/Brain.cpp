/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: swofferh <swofferh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/23 18:36:56 by swofferh      #+#    #+#                 */
/*   Updated: 2023/04/11 15:49:30 by swofferh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include "Animal.hpp"

#include <cstdlib>
#include <ctime>

static std::string BRAIN = MAGENTA "[brain] " RESET;
static std::string random_ideas[5] = {"eat","run", "sit", "sleep", "jump"};

Brain::Brain(void)
{ std::cout << BRAIN << " Constructing new ideas. ";
    for (int i = 0; i < 100; i++)
        _ideas[i] = random_ideas[rand() % 5];
	std::cout <<"Current one: " << _ideas[0] << std::endl;
	return ;
}

Brain::Brain(const Brain& copy)
{ std::cout << BRAIN << " Copy construtor called" << std::endl;
	*this = copy;
	return ;
}

Brain& Brain::operator=(const Brain& ref)
{ std::cout << BRAIN << " Assignment operator" << std::endl;
	for (int i = 0; i < 100; i++)
        _ideas[i] = ref._ideas[i];
	return (*this);
}

Brain::~Brain(void)
{ std::cout << BRAIN << " Destructing old ideas" << std::endl;
	for (int i = 0; i < 100; i++)
        _ideas[i] = "";
	return ;
}