/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   add.class.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: swofferh <swofferh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/08 20:09:49 by swofferh      #+#    #+#                 */
/*   Updated: 2020/10/08 20:30:43 by swofferh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ADD_CLASS_H
# define ADD_CLASS_H

# define FIELD_COUNT 11

class Contact {
	public:
		Contact();
		~Contact();

		void				Prompt(void);
		void				Display(void) const;
		void				SetField(int field, std::string value);
		std::string			GetField(int field) const;
		static int			FindField(std::string field);

	private:
		static std::string	_fieldNames[FIELD_COUNT];
		std::string			_fields[FIELD_COUNT];
};

#endif
