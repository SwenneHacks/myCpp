/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: swofferh <swofferh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/13 16:22:17 by swofferh      #+#    #+#                 */
/*   Updated: 2020/10/20 20:48:22 by swofferh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include "Human.hpp"
# include <string>

class Brain {
	public:
		Brain();
		~Brain();

    std::string identify()const;
};

#endif