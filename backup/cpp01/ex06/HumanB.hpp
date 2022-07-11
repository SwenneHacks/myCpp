/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanB.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: swofferh <swofferh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/20 17:23:09 by swofferh      #+#    #+#                 */
/*   Updated: 2020/10/20 20:44:24 by swofferh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"
# include "HumanA.hpp"

class	HumanB
{
public:
	HumanB();
	HumanB(const HumanB& ref);
	HumanB& operator=(const HumanB& ref);
	~HumanB();
};

#endif
