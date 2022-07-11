#ifndef SCAVTRAP_CLASS_H
#define SCAVTRAP_CLASS_H
#include <string>

class ScavTrap {

public:

		ScavTrap(void);
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const &src);
		~ScavTrap(void);

		ScavTrap & operator=(ScavTrap const &rhs);

		void			rangeAttack(std::string const & target);
		void			meleeAttack(std::string const & target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
		void			challengeNewcomer(std::string const & target);

private:

		int					_hit_pts;
		int					_max_hit_pts;
		int					_energy_pts;
		int					_max_energy_pts;
		unsigned int		_level;
		std::string			_name;
		unsigned int		_melee_attack_dmg;
		unsigned int		_ranged_attack_dmg;
		unsigned int		_armor_dmg_reduction;

};

#endif

