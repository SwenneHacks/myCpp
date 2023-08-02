/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Form.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: swofferh <swofferh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/21 18:37:22 by swofferh      #+#    #+#                 */
/*   Updated: 2023/07/21 18:37:25 by swofferh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP05_FORM_HPP
#define CPP05_FORM_HPP

#include <iostream>

#include "Bureaucrat.hpp"

class Form
{
public:
	Form(const std::string&, int32_t, int32_t);
	Form(const Form& ref);
	~Form(void);

	Form& operator=(const Form& ref);
	bool operator!=(const Form& ref);

	const std::string& getName(void) const;
	int32_t getSigned(void) const;
	int32_t getMinSignGrade(void) const;
	int32_t getMinExecuteGrade(void) const;
	void beSigned(const Bureaucrat& ref);

	class GradeTooHighException : public Bureaucrat::GradeTooHighException {};

	class GradeTooLowException : public Bureaucrat::GradeTooLowException {};

private:
	const std::string _name;
	bool _isSigned;
	const int32_t _minSignGrade;
	const int32_t _minExecuteGrade;
};

std::ostream& operator<<(std::ostream &out, const Form& ref);

#endif //CPP05_FORM_HPP
