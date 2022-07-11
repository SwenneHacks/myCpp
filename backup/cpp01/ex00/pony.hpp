/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   pony.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: sofferha <sofferha@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/12 23:31:03 by sofferha      #+#    #+#                 */
/*   Updated: 2020/10/13 15:37:21 by swofferh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP

# include <iostream>

class Pony {
	public:
		Pony(std::string name, std::string color, std::string magic);
		~Pony();

		void				GetPony(void);

	private:
		std::string			_name;
		std::string			_color;
		std::string			_magic;
};

#endif
