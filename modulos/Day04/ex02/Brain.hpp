//
// Created by xvoorvaa on 13/08/2022.
//

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
public:
	Brain(void);
	Brain(const Brain& ref);
	~Brain(void);
	
	Brain& operator=(const Brain& ref);

	std::string _ideas[100];
};

#endif //BRAIN_HPP
