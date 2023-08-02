/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ShrubberyCreationForm.cpp                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: swofferh <swofferh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/21 18:38:36 by swofferh      #+#    #+#                 */
/*   Updated: 2023/07/21 18:38:39 by swofferh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.h"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& new_target)
	: Form("ShrubberyCreationForm", 145, 137), _target(new_target)
{
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& ref)
	: Form("ShrubberyCreationForm", 145, 137), _target(ref._target)
{
	*this = ref;
	return ;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	return ;
}

// Operators

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& ref)
{
	(void) ref;
	return (*this);
}

void ShrubberyCreationForm::execute(const Bureaucrat& executor) const
{
	(void) executor;
	std::ofstream MyFile(_target);

	MyFile << "ASCII TREES";
	MyFile.close();
}
