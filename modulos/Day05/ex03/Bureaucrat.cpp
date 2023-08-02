/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.cpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: swofferh <swofferh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/21 18:39:56 by swofferh      #+#    #+#                 */
/*   Updated: 2023/07/21 18:39:59 by swofferh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

/* con & des */

Bureaucrat::Bureaucrat(const std::string& new_name, int32_t new_grade) : _name(new_name), _grade(new_grade)
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

void Bureaucrat::signForm(Form& ref) const
{
	try
	{
		ref.beSigned(*this);
		std::cout << this->getName() << " signed " << ref.getName() << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << this->getName() << " failed to sign " << ref.getName() << std::endl;
	}
}

void Bureaucrat::executeForm(const Form& ref) const
{
	try
	{
		if (ref.getSigned() == false || ref.getMinExecuteGrade() < _grade)
			throw (BureaucratDoesNotComplyException());
		ref.execute(*this);
		std::cout << this->getName() << " executed " << ref.getName() << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
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

const char* Bureaucrat::BureaucratDoesNotComplyException::what() const throw()
{
	return "Cannot execute, because the form is not signed,"
			" or the Bureaucrat grade is too low to execute";
}
