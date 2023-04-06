/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: swofferh <swofferh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/23 17:30:58 by swofferh      #+#    #+#                 */
/*   Updated: 2023/04/06 13:52:46 by swofferh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

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