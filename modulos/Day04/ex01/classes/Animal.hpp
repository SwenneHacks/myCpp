/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Animal.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: swofferh <swofferh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/23 17:31:16 by swofferh      #+#    #+#                 */
/*   Updated: 2023/04/06 13:48:36 by swofferh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include "../colors.hpp"

#include <iostream>

class Animal
{
public:
	Animal(void);
	virtual ~Animal(void);
	
	Animal(const std::string& kind);
	Animal(const Animal& ref);
	Animal& operator=(const Animal& ref);
	
	virtual void makeSound(void) const;
	const std::string getType(void) const;

protected:
	std::string	_type;
};

#endif
