/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Form.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: swofferh <swofferh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/21 18:40:06 by swofferh      #+#    #+#                 */
/*   Updated: 2023/07/21 18:40:08 by swofferh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

// con & dec

Form::Form(const std::string& new_name, int32_t new_minSignGrade, int32_t new_minExecuteGrade)
: _name(new_name), _isSigned(false), _minSignGrade(new_minSignGrade), _minExecuteGrade(new_minExecuteGrade)
{
	if (_minSignGrade < 1 || _minExecuteGrade < 1)
		throw GradeTooHighException();
	else if (_minSignGrade > 150 || _minExecuteGrade > 150)
		throw GradeTooLowException();
	return ;
}

Form::Form(const Form& ref)
		: _name(ref._name), _minSignGrade(ref._minSignGrade), _minExecuteGrade(ref._minExecuteGrade)
{
	*this = ref;
}

Form::~Form()
{
	return ;
}

// Operators

Form& Form::operator=(const Form& ref)
{
	if (this == &ref)
		return (*this);
	_isSigned = ref._isSigned;
	return (*this);
}

std::ostream& operator<<(std::ostream &out, const Form& ref)
{
	out << "Name form: " << ref.getName() << std::endl;
	out << "Minimum grade for signing " << ref.getMinSignGrade() << std::endl;
	out << "Minimum grade for execution " << ref.getMinExecuteGrade() << std::endl;
	if (ref.getSigned() == true)
		std::cout << "Form has been signed" << std::endl;
	else
		std::cout << "Form has not been signed" << std::endl;
	return (out);
}

// Functions

const std::string& Form::getName(void) const
{
	return (_name);
}

int32_t Form::getSigned(void) const
{
	return (_isSigned);
}

int32_t Form::getMinSignGrade(void) const
{
	return (_minSignGrade);
}

int32_t Form::getMinExecuteGrade(void) const
{
	return (_minExecuteGrade);
}

void Form::beSigned(const Bureaucrat& ref)
{
	if (getMinSignGrade() < ref.getGrade())
		throw (Bureaucrat::GradeTooLowException());
	_isSigned = true;
	return ;
}
