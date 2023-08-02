/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RobotomyRequestForm.cpp                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: swofferh <swofferh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/21 18:38:25 by swofferh      #+#    #+#                 */
/*   Updated: 2023/07/21 18:38:27 by swofferh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.h"

RobotomyRequestForm::RobotomyRequestForm(const std::string& new_target)
		: Form("RobotomyRequestForm", 72, 45), _target(new_target)
{
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& ref)
		: Form("RobotomyRequestForm", 72, 45), _target(ref._target)
{
	*this = ref;
	return ;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	return ;
}

// Operators

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& ref)
{
	(void) ref;
	return (*this);
}

void RobotomyRequestForm::execute(const Bureaucrat& executor) const
{
	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<> distr(0, 1);

	(void) executor;
	std::cout << "*Makes drilling noises...*" << std::endl;
	if (distr(gen) % 2 == 0)
		std::cout << _target << " has been robotomized" << std::endl;
	else
		std::cout << _target << " has been humanized" << std::endl;
	return ;
}
