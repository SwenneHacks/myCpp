
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