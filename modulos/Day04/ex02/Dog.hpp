//
// Created by xvoorvaa on 13/08/2022.
//

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
public:
	Dog(void);
	Dog(const Dog& ref);
	virtual ~Dog(void);
	
	Dog& operator=(const Dog& ref);
	
	void makeSound(void) const;
private:
	Brain* _brain;
};

#endif //DOG_HPP