/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: swofferh <swofferh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/13 16:22:17 by swofferh      #+#    #+#                 */
/*   Updated: 2020/10/14 20:46:03 by swofferh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie {
	public:
		Zombie(std::string name, std::string type);
		~Zombie();

    void announce(void);

	private:
        std::string    _name;
        std::string    _type;
};

#endif