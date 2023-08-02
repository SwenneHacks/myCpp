/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: swofferh <swofferh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/08/01 14:21:26 by swofferh      #+#    #+#                 */
/*   Updated: 2023/08/01 14:21:28 by swofferh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */


#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.h"
#include "RobotomyRequestForm.h"
#include "PresidentialPardonForm.h"

#define RED "\033[0;31m"
#define RESET "\033[0m"

int32_t	main(void)
{
	std::cout << "DEFAULT CHECK" << std::endl;

	Bureaucrat BossJordan("BossJordan", 1);
	Bureaucrat WeakJordan("BossJordan", 150);

	Form *f_V1 = new ShrubberyCreationForm("ShrubberyCreationForm");

	try
	{
		std::cout << BossJordan << std::endl;
		std::cout << *f_V1 << std::endl;
		BossJordan.signForm(*f_V1);
		BossJordan.executeForm(*f_V1);
		std::cout << std::endl << *f_V1 << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cout << RED << e.what() << RESET << '\n';
	}

	delete f_V1;

	std::cout << std::endl << "GRADE TO EXECUTE TOO LOW" << std::endl;

	Form *f_V2 = new ShrubberyCreationForm("ShrubberyCreationForm");

	try
	{
		std::cout << WeakJordan << std::endl;
		std::cout << *f_V2 << std::endl;
		WeakJordan.signForm(*f_V2);
		WeakJordan.executeForm(*f_V2);
	}
	catch (const std::exception& e)
	{
		std::cout << RED << e.what() << RESET << '\n';
	}

	delete f_V2;

	std::cout << std::endl << "NOT SIGNED" << std::endl;

	Form *f_V3 = new ShrubberyCreationForm("ShrubberyCreationForm");

	try
	{
		std::cout << BossJordan << std::endl;
		std::cout << *f_V3 << std::endl;
		BossJordan.executeForm(*f_V3);
	}
	catch (const std::exception& e)
	{
		std::cout << RED << e.what() << RESET << '\n';
	}

	delete f_V3;

	std::cout << std::endl << "RobotomyRequestForm TEST" << std::endl;

	Form *f_V4 = new RobotomyRequestForm("RobotomyRequestForm");

	try
	{
		std::cout << BossJordan << std::endl;
		std::cout << *f_V4 << std::endl;
		BossJordan.signForm(*f_V4);
		BossJordan.executeForm(*f_V4);
	}
	catch (const std::exception& e)
	{
		std::cout << RED << e.what() << RESET << '\n';
	}

	delete f_V4;

	std::cout << std::endl << "PresidentialPardonForm TEST" << std::endl;

	Form *f_V5 = new PresidentialPardonForm("PresidentialPardonForm");

	try
	{
		std::cout << BossJordan << std::endl;
		std::cout << *f_V5 << std::endl;
		BossJordan.signForm(*f_V5);
		BossJordan.executeForm(*f_V5);
	}
	catch (const std::exception& e)
	{
		std::cout << RED << e.what() << RESET << '\n';
	}

	delete f_V5;

	std::cout << std::endl << "False PresidentialPardonForm TEST" << std::endl;

	Form *f_V6 = new PresidentialPardonForm("PresidentialPardonForm");

	try
	{
		std::cout << WeakJordan << std::endl;
		std::cout << std::endl << *f_V6 << std::endl;
		WeakJordan.signForm(*f_V6);
		WeakJordan.executeForm(*f_V6);
	}
	catch (const std::exception& e)
	{
		std::cout << RED << e.what() << RESET << '\n';
	}

	delete f_V6;
	return (0);
}
