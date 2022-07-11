/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   pony.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: swofferh <swofferh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/08 20:10:46 by swofferh      #+#    #+#                 */
/*   Updated: 2020/10/13 16:03:53 by swofferh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "pony.hpp"

Pony::Pony(std::string name, std::string color, std::string magic){
	Pony::_name = name;
	Pony::_color = color;
	Pony::_magic = magic;
	std::cout << "[" << Pony::_name << " happily born out of a constructor] Full Description:" << std::endl;
}

Pony::~Pony(){
	std::cout << "[" << Pony::_name << " sadly was destructed by a destructor] The endl." << std::endl;
}

void Pony::GetPony(void) {
	std::cout << "This pony, known as " << Pony::_name << "," 
	<< " has this funny looking " << Pony::_color << " fur" 
	<< " and is famous for being able to " << Pony::_magic << std::endl;
}
