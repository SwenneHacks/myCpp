#ifndef CLAP_TRAP_HPP
# define CLAP_TRAP_HPP

#include <string>
#include <iostream>

#define YELLOW "\033[33m"
#define BLUE "\x1b[34m"
#define CYAN "\x1b[35m"
#define RED "\x1b[31m"
#define END	"\x1b[0m\n"

class	ClapTrap
{
	private:

	std::string _name;
	int			_health;
	int			_energy;
	int			_damage;

	public:

	ClapTrap();
	ClapTrap(std::string Name);
	ClapTrap(const ClapTrap &copy);
	~ClapTrap();

	// Operators :
	ClapTrap	&operator=(const ClapTrap &copy);

	// Member Functions :
	void 		attack(const std::string& target);
	void 		takeDamage(unsigned int amount);
	void 		beRepaired(unsigned int amount);

	std::string CurrentTarget;
};

#endif
