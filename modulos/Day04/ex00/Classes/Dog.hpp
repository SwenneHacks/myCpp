/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: swofferh <swofferh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/23 17:30:58 by swofferh      #+#    #+#                 */
/*   Updated: 2023/03/23 17:41:31 by swofferh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
public:
	Dog(void);
	Dog(const Dog& ref);
	~Dog(void);

	Dog& operator=(const Dog& ref);

	void makeSound(void) const;
};

#endif //DOG_HPP