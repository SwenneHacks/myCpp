//
// Created by xvoorvaa on 05/08/2022.
//

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#define NUMBER_ANIMALS 100

#include <iostream>

class Animal
{
public:
	Animal(void);
	Animal(const std::string& kind);
	Animal(const Animal& ref);
	virtual ~Animal(void);
	
	Animal& operator=(const Animal& ref);
	
	virtual void makeSound(void) const = 0;
	const std::string getType(void) const;
protected:
	std::string	_type;
};

#endif //ANIMAL_HPP
