/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongCat.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: swofferh <swofferh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/23 17:30:31 by swofferh      #+#    #+#                 */
/*   Updated: 2023/03/23 17:30:35 by swofferh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_CAT_HPP
#define WRONG_CAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
public:
	WrongCat(void);
	WrongCat(const WrongCat& ref);
	~WrongCat(void);
	
	WrongCat& operator=(const WrongCat& ref);
	
	void makeSound(void) const;
};

#endif //WRONG_CAT_HPP