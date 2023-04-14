/**
 * @file Brain.hpp
 * @author swofferh  
 * @brief 
 * @version 0.1
 * @date 2023-04-14
*/

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
public:
	Brain(void);
	~Brain(void);
	
	Brain(const Brain& ref);
	Brain& operator=(const Brain& ref);

protected:
	std::string _ideas[100];
};

#endif //BRAIN_HPP
