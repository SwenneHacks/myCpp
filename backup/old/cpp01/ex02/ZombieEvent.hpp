/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieEvent.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: swofferh <swofferh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/13 16:22:22 by swofferh      #+#    #+#                 */
/*   Updated: 2020/10/16 21:33:26 by swofferh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

# include "Zombie.hpp"
# include <iostream>
# include <string>

class ZombieEvent {
	public:
                ZombieEvent();
                ~ZombieEvent();

                Zombie*     newZombie(std::string name);
                void        setZombieType(std::string type);
                void        randomChump(void);

        private:
                std::string             _event_type;
                static std::string      _names[8];
};

#endif