#ifndef CLAP_TRAP_HPP
# define CLAP_TRAP_HPP

#include <string>
#include <iostream>

#define YELLOW 	"\x1b[34m"
#define BLUE 	"\x1b[34m"
#define RESET 	"\x1b[0m\n"

class	ClapTrap
{
	private:

	std::string _name;
	int			_hits;
	int			_energy;
	int			_damage;

	public:

	ClapTrap(std::string Name);
	ClapTrap(const ClapTrap &copy);
	~ClapTrap();

	// Operators :
	ClapTrap	&operator=(const ClapTrap &copy);

	// Member Functions :
	void 		attack(const std::string& target);
	void 		takeDamage(unsigned int amount);
	void 		beRepaired(unsigned int amount);
};

#endif

std::ostream	&operator<<(std::ostream &out, ClapTrap const &in);