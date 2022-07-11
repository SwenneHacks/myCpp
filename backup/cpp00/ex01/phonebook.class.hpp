/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   phonebook.class.hpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: swofferh <swofferh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/08 20:09:49 by swofferh      #+#    #+#                 */
/*   Updated: 2020/10/16 18:02:04 by swofferh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

# include <iostream>
# include <iomanip>

class Phonebook {
	public:
		Phonebook();
		~Phonebook();

		int					SetContact(int input_i);
		void				GetContacts(void) const;
		void				PrintContact(std::string field) const;
		void				GetContactInfo(void) const;

	private:
		std::string			_first_name;
		std::string			_last_name;
		std::string			_nick_name;
		std::string			_user_name;
		std::string			_postal_address;
		std::string			_email_address;
		std::string			_birthday_date;
		std::string			_favorite_meal;
		std::string			_underwear_color;
		std::string			_darkest_secret;
};

#endif
