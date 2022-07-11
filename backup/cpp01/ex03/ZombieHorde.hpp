/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieHorde.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: swofferh <swofferh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/14 19:52:24 by swofferh      #+#    #+#                 */
/*   Updated: 2020/10/17 22:34:54 by swofferh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HORDE_HPP
# define ZOMBIE_HORDE_HPP

# include "Zombie.hpp"
#include <iostream>

class ZombieHorde {
	public:
		ZombieHorde(int N);
		~ZombieHorde();

    void announce();
    
    private:
        int  _counter;
        Zombie* _horde;
};

#endif