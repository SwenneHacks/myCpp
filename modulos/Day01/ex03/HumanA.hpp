
#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"
# include "HumanB.hpp"
# include <string>

class HumanA {

private:
	const Weapon& 	_weaponARef;
	std::string 	_name;
	std::string		_getName();

public:
	void			attack();
	HumanA(const std::string& name, const Weapon& weaponRef);
	~HumanA();
};

#endif
