/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanB.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: swofferh <swofferh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/20 17:23:09 by swofferh      #+#    #+#                 */
/*   Updated: 2021/03/21 22:32:15 by sofferha      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

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
