/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: swofferh <swofferh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/13 16:22:11 by swofferh      #+#    #+#                 */
/*   Updated: 2020/10/16 21:22:43 by swofferh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

Zombie::Zombie(std::string name, std::string type) : _name(name), _type(type){
	//std::cout << "[" << Zombie::_name << " raised out of a constructor's grave]." << std::endl;
}

Zombie::~Zombie(){
	//std::cout << "[" << Zombie::_name << " killed by a destructor] The endl." << std::endl;
}

void Zombie::announce(void) {
	std::cout << "<" << this->_name << " (" << this->_type << ")> Braiiiiiiinnnssss..." << std::endl;
}
