
#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie;
Zombie* zombieHorde(int N, std::string name);

class Zombie {
	public:
		Zombie();
		~Zombie();

    void announce();
	void setName(std::string name);
	void setType(std::string type);

	private:
        std::string    _name;
        std::string    _type;
};

#endif