/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongAnimal.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: swofferh <swofferh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/23 17:30:19 by swofferh      #+#    #+#                 */
/*   Updated: 2023/04/03 15:22:15 by swofferh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_ANIMAL_HPP
#define WRONG_ANIMAL_HPP

#include <iostream>

class WrongAnimal
{
public:
	WrongAnimal(void);
	WrongAnimal(const std::string& kind);
	WrongAnimal(const WrongAnimal& ref);
	~WrongAnimal(void);
	
	WrongAnimal& operator=(const WrongAnimal& ref);
	
	void makeSound(void) const;
	const std::string getType(void) const;

protected:
	std::string	_type;
};

#endif //WRONG_ANIMAL_HPP
