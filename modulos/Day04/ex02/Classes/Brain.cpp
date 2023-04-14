/**
 * @file Brain.cpp
 * @author swofferh  
 * @brief 
 * @version 0.1
 * @date 2023-04-14
*/

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