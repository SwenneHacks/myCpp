/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: swofferh <swofferh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/13 16:22:11 by swofferh      #+#    #+#                 */
/*   Updated: 2020/10/20 20:50:48 by swofferh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <sstream>

Brain::Brain(){
	std::cout << "[Brain turned on by a constructor]" << std::endl;
}

Brain::~Brain(){
	std::cout << "[Brain turned off by a destructor]" << std::endl;
}

std::string Brain::identify() const {
	std::stringstream test;
	test << (void*) this;
	return (test.str());
}
