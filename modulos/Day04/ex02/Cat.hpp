//
// Created by xvoorvaa on 13/08/2022.
//

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
public:
	Cat(void);
	Cat(const Cat& ref);
	virtual ~Cat(void);
	
	Cat& operator=(const Cat& ref);
	
	void makeSound(void) const;
private:
	Brain* _brain;
};

#endif //CAT_HPP