#ifndef FRAG_TRAP_HPP
# define FRAG_TRAP_HPP

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

class	FragTrap : public ClapTrap
{
public:
	FragTrap();
	FragTrap(std::string Name);
	FragTrap(const FragTrap& ref);
	~FragTrap();
	// OPERATOR
	FragTrap& operator=(const FragTrap& ref);
	// MEMBERS
	void attack(const std::string& target);
	void highFiveGuys(void);
};

#endif
