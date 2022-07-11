/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Human.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: swofferh <swofferh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/20 12:40:33 by swofferh      #+#    #+#                 */
/*   Updated: 2020/10/20 20:45:24 by swofferh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP

# include "Brain.hpp"
# include <iostream>

class Human {
	private:
        const Brain _brain;

	public:
		Human();
		~Human();

    std::string identify() const;
    const Brain &getBrain() const;

};

#endif
