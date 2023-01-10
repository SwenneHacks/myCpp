
#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie;

	Zombie*     newZombie(std::string name);
	void        randomChump(std::string name);

class Zombie {
	public:
		Zombie(std::string name);
		~Zombie();

    void announce(void);
	static std::string      name[8];

	private:
        std::string    		_name;
};

#endif