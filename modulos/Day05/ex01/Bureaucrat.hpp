/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.hpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: swofferh <swofferh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/21 18:37:11 by swofferh      #+#    #+#                 */
/*   Updated: 2023/07/21 18:37:12 by swofferh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */


#ifndef CPP05_BUREAUCRAT_HPP
#define CPP05_BUREAUCRAT_HPP

#include <iostream>
#include <exception>
#include <stdexcept>

class Form;

class Bureaucrat
{
public:
	Bureaucrat(const std::string&, int32_t);
	Bureaucrat(const Bureaucrat& ref);
	~Bureaucrat(void);

	Bureaucrat& operator=(const Bureaucrat& ref);

	int32_t	getGrade(void) const;
	const std::string&	getName(void) const;
	void promote(void);
	void demote(void);
	void signForm(Form& ref) const;

	class GradeTooHighException : public std::exception
	{
	public:
		virtual const char* what() const throw();
	};

	class GradeTooLowException : public std::exception
	{
	public:
		virtual const char* what() const throw();
	};

private:
	const std::string	_name;
	int32_t				_grade;
};

std::ostream& operator<<(std::ostream &out, const Bureaucrat& ref);

#endif //CPP05_BUREAUCRAT_HPP
