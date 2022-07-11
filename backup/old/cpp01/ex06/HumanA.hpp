/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanA.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: swofferh <swofferh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/20 17:23:20 by swofferh      #+#    #+#                 */
/*   Updated: 2021/03/21 22:31:07 by sofferha      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

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
