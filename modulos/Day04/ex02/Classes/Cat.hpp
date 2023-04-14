/**
 * @file Cat.hpp
 * @author swofferh
 * @brief 
 * @version 0.1
 * @date 2023-04-14
 */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
public:
	Cat(void);
	~Cat(void);
	
	Cat(const Cat& ref);
	Cat& operator=(const Cat& ref);
	
	void makeSound(void) const;
	Brain *getBrain() const;

private:
	Brain*	_brain;
};

#endif