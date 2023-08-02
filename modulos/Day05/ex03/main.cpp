/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: swofferh <swofferh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/21 18:40:27 by swofferh      #+#    #+#                 */
/*   Updated: 2023/07/21 18:40:29 by swofferh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "Intern.h"

#define RED "\033[0;31m"
#define RESET "\033[0m"

int32_t	main(void)
{
	Intern Leon;
	Bureaucrat Jordan("Jordan", 1);

	std::cout << "SUCCES!" << std::endl;

	try
	{
		Form *f = Leon.makeForm("PresidentialPardonForm", "Xander");
		Jordan.signForm(*f);
		Jordan.executeForm(*f);
		delete f;
	}
	catch (const Intern::TargetNotValidException& e)
	{
		std::cout << RED << e.what() << RESET << '\n';
	}
	catch (...)
	{

	}

	std::cout << std::endl << "FAIL!" << std::endl;

	try
	{
		Form *f = Leon.makeForm("Hi", "Xander");
		Jordan.signForm(*f);
		Jordan.executeForm(*f);
	}
	catch (const Intern::TargetNotValidException& e)
	{
		std::cout << RED << e.what() << RESET << '\n';
	}
	catch (...)
	{

	}
	return (0);
}
