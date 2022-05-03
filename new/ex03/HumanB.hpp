
#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"
# include "HumanA.hpp"
# include <string>

class HumanB {
private:
	Weapon*            	_weaponBPtr;
	const std::string	_name;
	std::string			_getName();

public:
	void 				attack();
	void				setWeapon(Weapon& weaponName);
	HumanB(const std::string& name);
	~HumanB();
};

#endif
