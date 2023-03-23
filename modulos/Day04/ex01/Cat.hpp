/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: swofferh <swofferh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/23 18:37:12 by swofferh      #+#    #+#                 */
/*   Updated: 2023/03/23 18:37:14 by swofferh      ########   odam.nl         */
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
	Cat(const Cat& ref);
	virtual ~Cat(void);
	
	Cat& operator=(const Cat& ref);
	
	void makeSound(void) const;
private:
	Brain* _brain;
};

#endif //CAT_HPP