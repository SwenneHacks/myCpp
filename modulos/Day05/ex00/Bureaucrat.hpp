/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.hpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: swofferh <swofferh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/21 18:36:23 by swofferh      #+#    #+#                 */
/*   Updated: 2023/07/21 18:36:25 by swofferh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP05_BUREAUCRAT_HPP
#define CPP05_BUREAUCRAT_HPP

#include <iostream>
#include <stdexcept>

class Bureaucrat
{
public:
	Bureaucrat(std::string, int32_t);
	Bureaucrat(const Bureaucrat& ref);
	~Bureaucrat(void);

	Bureaucrat& operator=(const Bureaucrat& ref);

	int32_t	getGrade(void) const;
	const std::string&	getName(void) const;
	void promote(void);
	void demote(void);

	// Exceptions
	class GradeTooHighException : public std::exception
	{
	public:
		const char* what() const throw();
	};

	class GradeTooLowException : public std::exception
	{
	public:
		const char* what() const throw();
	};

private:
	const std::string	_name;
	int32_t				_grade;
};

std::ostream& operator<<(std::ostream &out, const Bureaucrat& ref);

#endif //CPP05_BUREAUCRAT_HPP
