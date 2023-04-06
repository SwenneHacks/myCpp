/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: swofferh <swofferh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/23 17:31:08 by swofferh      #+#    #+#                 */
/*   Updated: 2023/04/06 12:58:59 by swofferh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

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