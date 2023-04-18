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
static std::string IDEAS = RED "[ideas]	 " RESET;

static std::string random_ideas[5] = {"eat ","run ", "sit ", "sleep ", "jump "};

Brain::Brain(void)
{ std::cout << BRAIN << " Constructing new ideas. " << std::endl;
    for (int i = 0; i < 100; i++)
        _ideas[i] = random_ideas[rand() % 5];
	std::cout << IDEAS << _ideas[0] << _ideas[1] << _ideas[2] << std::endl;
	return ;
}

Brain::Brain(const Brain& copy)
{ std::cout << BRAIN << " Copy construtor called" << std::endl;
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = copy._ideas[i];
	return ;
}

Brain& Brain::operator=(const Brain& ref)
{ std::cout << BRAIN << " Assignment operator" << std::endl;
	if (this != &ref){
		for (int i = 0; i < 100; i++)
			this->_ideas[i] = ref._ideas[i];
	}
	return (*this);
}

void    Brain::setIdea(std::string newIdea) 
{ std::cout << BRAIN << " Changing the first idea to: " << newIdea << std::endl;
	_ideas[1] = newIdea;
}

void    Brain::printIdeas() {
    for (int i = 0; i < 5; i++)
		std::cout << "[ " << i << " ] " << _ideas[i] << std::endl;
}

Brain::~Brain(void)
{ std::cout << BRAIN << " Destructing old ideas" << std::endl;
	return ;
}
