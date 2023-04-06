/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: swofferh <swofferh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/23 18:37:02 by swofferh      #+#    #+#                 */
/*   Updated: 2023/04/06 15:12:54 by swofferh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
public:
	Brain(void);
	~Brain(void);
	
	Brain(const Brain& ref);
	Brain& operator=(const Brain& ref);

protected:
	std::string _ideas[100];
};

#endif //BRAIN_HPP
