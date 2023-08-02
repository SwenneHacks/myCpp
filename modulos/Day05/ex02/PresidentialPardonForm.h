/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PresidentialPardonForm.h                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: swofferh <swofferh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/21 18:38:20 by swofferh      #+#    #+#                 */
/*   Updated: 2023/07/21 18:38:22 by swofferh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP05_PRESIDENTIALPARDONFORM_H
#define CPP05_PRESIDENTIALPARDONFORM_H

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
public:
	PresidentialPardonForm(const std::string&);
	PresidentialPardonForm(const PresidentialPardonForm& ref);
	~PresidentialPardonForm(void);

	PresidentialPardonForm& operator=(const PresidentialPardonForm& ref);

	void execute(const Bureaucrat& executor) const;

private:
	const std::string	_target;
};


#endif //CPP05_PRESIDENTIALPARDONFORM_H
