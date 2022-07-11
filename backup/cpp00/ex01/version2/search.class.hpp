/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   search.class.hpp                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: swofferh <swofferh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/08 20:09:44 by swofferh      #+#    #+#                 */
/*   Updated: 2020/10/08 20:31:40 by swofferh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SEARCH_CLASS_H
# define SEARCH_CLASS_H

# define MAX_CAPACITY 8

# include "add.class.hpp"

class Database {
	public:
		Database();
		~Database();

		int		Count(void) const;
		void	AddContact(Contact person);
		Contact	GetContact(int i) const;
		void	List(void);

	private:
		int		_count;
		Contact	_contacts[MAX_CAPACITY];
};

#endif
