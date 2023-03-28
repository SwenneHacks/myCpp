#ifndef SCAV_TRAP_HPP
# define SCAV_TRAP_HPP
#include "ClapTrap.hpp"

#define YELLOW "\033[33m"
#define BLUE "\x1b[34m"
#define GREEN "\x1b[32m"
#define CYAN "\x1b[35m"
#define RED "\x1b[31m"
#define RESET "\x1b[0m"
#define END	"\x1b[0m\n"

class	ScavTrap : public ClapTrap
{
public:
	ScavTrap();
	ScavTrap(std::string new_name);
	ScavTrap(const ScavTrap& ref);
	~ScavTrap();
	// OPERATOR
	ScavTrap& operator=(const ScavTrap& ref);
	// MEMBERS
	void attack(const std::string& target);
	void guardGate(void);
};

#endif
