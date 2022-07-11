/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanA.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: swofferh <swofferh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/20 17:23:20 by swofferh      #+#    #+#                 */
/*   Updated: 2020/10/20 20:44:24 by swofferh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"
# include "HumanB.hpp"

class	HumanA
{
public:
	HumanA();
	HumanA(const HumanA& ref);
	HumanA& operator=(const HumanA& ref);
	~HumanA();
};

#endif
