/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: swofferh <swofferh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/20 15:58:47 by swofferh      #+#    #+#                 */
/*   Updated: 2020/10/20 20:44:24 by swofferh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <string>

class	Weapon
{
public:
	Weapon();
	Weapon(const Weapon& ref);
	Weapon& operator=(const Weapon& ref);
	~Weapon();
};

#endif
