/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.cpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: swofferh <swofferh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/21 18:36:16 by swofferh      #+#    #+#                 */
/*   Updated: 2023/07/21 18:36:19 by swofferh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

/* con & des */

Bureaucrat::Bureaucrat(std::string new_name, int32_t new_grade) : _name(new_name), _grade(new_grade)
{
	if (_grade < 1)
		throw GradeTooHighException();
	else if (_grade > 150)
		throw GradeTooLowException();
	return ;
}

Bureaucrat::Bureaucrat(const Bureaucrat& ref) : _name(ref.getName())
{
	*this = ref;
}

Bureaucrat::~Bureaucrat(void)
{
	return ;
}

/* Operators */

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& ref)
{
	_grade = ref.getGrade();
	return (*this);
}

std::ostream& operator<<(std::ostream &out, const Bureaucrat& ref)
{
	out << ref.getName() << ", bureaucrat grade " << ref.getGrade();
	return (out);
}

/* Functions */

const std::string& Bureaucrat::getName(void) const
{
	return (_name);
}

int32_t Bureaucrat::getGrade(void) const
{
	return (_grade);
}

void Bureaucrat::promote(void)
{
	if (_grade <= 1)
		throw (GradeTooHighException());
	_grade--;
}

void Bureaucrat::demote(void)
{
	if (_grade >= 150)
		throw (GradeTooLowException());
	_grade++;
}

/* Exceptions */

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Grade too high";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Grade too low";
}