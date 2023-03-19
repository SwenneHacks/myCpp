#ifndef SCAV_TRAP_HPP
# define SCAV_TRAP_HPP
#include "ClapTrap.hpp"


class	ScavTrap : public ClapTrap
{
public:
	ScavTrap();
	ScavTrap(std::string &);
	ScavTrap(const ScavTrap& ref);
	~ScavTrap();
	// OPERATOR
	ScavTrap& operator=(const ScavTrap& ref);
	// MEMBERS
	void attack(const std::string& target);
	void guardGate(void);
};

#endif
