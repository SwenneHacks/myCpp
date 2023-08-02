/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RobotomyRequestForm.h                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: swofferh <swofferh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/21 18:38:29 by swofferh      #+#    #+#                 */
/*   Updated: 2023/07/21 18:38:33 by swofferh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP05_ROBOTOMYREQUESTFORM_H
#define CPP05_ROBOTOMYREQUESTFORM_H

#include "Form.hpp"

#include <fstream>
#include <random>

class RobotomyRequestForm : public Form
{
public:
	RobotomyRequestForm(const std::string&);
	RobotomyRequestForm(const RobotomyRequestForm& ref);
	~RobotomyRequestForm(void);

	RobotomyRequestForm& operator=(const RobotomyRequestForm& ref);

	void execute(const Bureaucrat& executor) const;

private:
	const std::string	_target;
};


#endif //CPP05_ROBOTOMYREQUESTFORM_H
