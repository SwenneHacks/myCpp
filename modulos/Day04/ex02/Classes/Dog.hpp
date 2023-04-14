/**
 * @file Dog.hpp
 * @author swofferh
 * @brief 
 * @version 0.1
 * @date 2023-04-14
 */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
public:
	Dog(void);
	~Dog(void);
	
	Dog(const Dog& ref);
	Dog& operator=(const Dog& ref);
	
	void makeSound(void) const;
	Brain *getBrain() const;

private:
	Brain*	_brain;
};

#endif 