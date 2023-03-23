/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: swofferh <swofferh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/23 18:37:23 by swofferh      #+#    #+#                 */
/*   Updated: 2023/03/23 18:37:25 by swofferh      ########   odam.nl         */
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
	Dog(const Dog& ref);
	virtual ~Dog(void);
	
	Dog& operator=(const Dog& ref);
	
	void makeSound(void) const;
private:
	Brain* _brain;
};

#endif //DOG_HPP