/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Intern.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: swofferh <swofferh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/21 18:40:15 by swofferh      #+#    #+#                 */
/*   Updated: 2023/07/21 18:40:17 by swofferh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.h"
#include "PresidentialPardonForm.h"
#include "RobotomyRequestForm.h"
#include "ShrubberyCreationForm.h"

// Con & dec

Intern::Intern(void)
{
	return ;
}

Intern::Intern(const Intern& ref)
{
	*this = ref;
	return ;
}

Intern::~Intern(void)
{
	return ;
}

// Operator

Intern& Intern::operator=(const Intern& ref)
{
	(void) ref;
	return (*this);
}

// Functions

typedef Form* (*class_pointer)(const std::string&);

Form* President(const std::string& new_target)
{
	return (new PresidentialPardonForm(new_target));
}

Form* Robotomy(const std::string& new_target)
{
	return (new RobotomyRequestForm(new_target));
}
Form* Shrubberry(const std::string& new_target)
{
	return (new ShrubberyCreationForm(new_target));
}


Form* Intern::makeForm(std::string type_form, const std::string& target)
{
	struct s_functions
	{
		std::string type;
		class_pointer BaseClass;
	}	t_functions;

	for (uint64_t i = 0; i < type_form.length(); i++)
		type_form[i] = std::toupper(type_form[i]);

	const s_functions struct_array[3] = {
			{ "PRESIDENTIALPARDONFORM", &President },
			{ "ROBOTOMYREQUESTFORM", &Robotomy },
			{ "SHRUBBERYCREATIONFORM", &Shrubberry }
	};

	for (int i = 0; i < 3; i++)
	{
		if (type_form == struct_array[0].type)
			return (struct_array[i].BaseClass(target));
	}
	throw (Intern::TargetNotValidException());
}

// Exceptions

const char *Intern::TargetNotValidException::what() const throw()
{
	return ("Type of Form is not valid");
}
