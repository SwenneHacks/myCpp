/**
 * @file Animal.hpp
 * @author swofferh  
 * @brief 
 * @version 0.1
 * @date 2023-04-14
*/

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include "_colors.hpp"

#include <iostream>

class Animal
{
public:
	Animal(void);
	virtual ~Animal(void);
	
	Animal(const std::string& kind);
	Animal(const Animal& ref);
	Animal& operator=(const Animal& ref);
	
	virtual void makeSound(void) const;
	const std::string getType(void) const;

protected:
	std::string	_type;
};

#endif
