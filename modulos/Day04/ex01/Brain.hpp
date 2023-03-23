/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: swofferh <swofferh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/23 18:37:02 by swofferh      #+#    #+#                 */
/*   Updated: 2023/03/23 18:37:04 by swofferh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
public:
	Brain(void);
	Brain(const Brain& ref);
	~Brain(void);
	
	Brain& operator=(const Brain& ref);

	std::string _ideas[100];
};

#endif //BRAIN_HPP
