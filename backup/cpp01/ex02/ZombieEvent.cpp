/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieEvent.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: swofferh <swofferh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/13 16:22:19 by swofferh      #+#    #+#                 */
/*   Updated: 2020/10/16 21:34:21 by swofferh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent(){}

Zombie*     ZombieEvent::newZombie(std::string name){
    return (new Zombie(name, this->_event_type));
}

std:: string ZombieEvent::_names[8] = {
        "Billy",
        "Jacky",
        "Loly",
        "Dudy",
        "Jonny",
        "Jenny",
        "Suzan",
        "Karen"
    };

void        ZombieEvent::setZombieType(std::string type){
    this->_event_type = type;
}

void        ZombieEvent::randomChump(void){
    Zombie random = Zombie(ZombieEvent::_names[rand() % 8], this->_event_type);
    random.announce();
}

ZombieEvent::~ZombieEvent(){}
