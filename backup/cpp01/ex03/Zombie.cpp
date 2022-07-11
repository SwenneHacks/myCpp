/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: swofferh <swofferh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/13 16:22:11 by swofferh      #+#    #+#                 */
/*   Updated: 2020/10/17 22:21:21 by swofferh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieHorde.hpp"

Zombie::Zombie(){
	std::cout << "[A " << Zombie::_type << "zombie raised out of a constructor's grave]." << std::endl;
}

Zombie::~Zombie(){
	std::cout << "[" << Zombie::_name << " killed (again) by a destructor] The endl." << std::endl;
}

void Zombie::announce() {
	std::cout << "<" << Zombie::_name << " (" << Zombie::_type << ")> Braiiiiiiinnnssss..." << std::endl;
}

void Zombie::setName(std::string name){
	Zombie::_name = name;
}

void Zombie::setType(std::string type){
	Zombie::_type = type;
}
