/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Intern.h                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: swofferh <swofferh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/21 18:40:21 by swofferh      #+#    #+#                 */
/*   Updated: 2023/07/21 18:40:23 by swofferh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */


#ifndef CPP05_INTERN_H
#define CPP05_INTERN_H

#include <string>
#include <stdexcept>

#include "Form.hpp"

class Intern
{
public:
	Intern(void);
	Intern(const Intern& ref);
	~Intern(void);

	Intern& operator=(const Intern& ref);

	Form* makeForm(std::string, const std::string&);

	class TargetNotValidException : public std::exception
	{
	public:
		virtual const char* what() const throw();
	};
};


#endif //CPP05_INTERN_H
