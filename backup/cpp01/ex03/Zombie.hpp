/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: swofferh <swofferh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/13 16:22:17 by swofferh      #+#    #+#                 */
/*   Updated: 2020/10/17 22:16:29 by swofferh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie {
	public:
		Zombie();
		~Zombie();

    void announce();
	void setName(std::string name);
	void setType(std::string type);

	private:
        std::string    _name;
        std::string    _type;
};

#endif