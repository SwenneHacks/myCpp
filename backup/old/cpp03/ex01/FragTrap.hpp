#ifndef FRAG_TRAP_HPP
#define FRAG_TRAP_HPP

#include <string>

class	FragTrap
{
public:
		FragTrap(void);
		FragTrap(std::string name);
		FragTrap(FragTrap const &ref);
		FragTrap& operator=(const FragTrap &ref);
		~FragTrap(void);

		void	rangeAttack(std::string const & target);
		void	meleeAttack(std::string const & target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		void	vaulthunter_dot_exe(std::string const & target);

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
