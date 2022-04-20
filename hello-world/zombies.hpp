/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   zombies.hpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: swofferh <swofferh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/13 16:22:17 by swofferh      #+#    #+#                 */
/*   Updated: 2020/10/20 12:35:52 by swofferh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIES_HPP
# define ZOMBIES_HPP

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

class Zombie {
	public:
		Zombie(std::string name, std::string type);
		~Zombie();

    void announce(void);

	private:
        std::string    _name;
        std::string    _type;
};

#endif