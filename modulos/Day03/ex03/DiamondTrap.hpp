#ifndef DIAMOND_TRAP_HPP
# define DIAMOND_TRAP_HPP

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class	DiamondTrap : public ScavTrap, public FragTrap
{
	private:
	std::string name;
	public:
	DiamondTrap();
	DiamondTrap(std::string name);
	DiamondTrap(const DiamondTrap& ref);
	~DiamondTrap();
	// OPERATOR
	DiamondTrap& operator=(const DiamondTrap& ref);
	// MEMBERS
	void attack(const std::string& target);
	void whoAmI(void);
};

#endif
