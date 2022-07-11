/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: swofferh <swofferh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/20 15:58:47 by swofferh      #+#    #+#                 */
/*   Updated: 2021/03/21 22:43:55 by sofferha      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <string>

# define RESET			"\033[0m"
# define RED			"\033[31m"
# define BLUE			"\033[34m"	
# define GREEN			"\033[32m"	

class Weapon {

private:
	std::string 		_type;
	std::string&		_typeRef;

public:
	const std::string&	getType() const;
	void				setType(const std::string& type);

	Weapon(const std::string& type);
	~Weapon();
};

#endif
