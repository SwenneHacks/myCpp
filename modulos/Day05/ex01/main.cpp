/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: swofferh <swofferh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/21 18:37:31 by swofferh      #+#    #+#                 */
/*   Updated: 2023/07/21 18:37:41 by swofferh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

#define RED "\033[0;31m"
#define RESET "\033[0m"

int32_t	main(void)
{
	std::cout << "INPUT TOO LOW CHECK" << std::endl;
	try
	{
		Bureaucrat Jordan("Jordan", 0);

		std::cout << Jordan << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cout << RED << e.what() << RESET << '\n';
	}

	std::cout << std::endl << "DEFAULT CHECK 1" << std::endl;

	try
	{
		Bureaucrat Jordan("Jordan", 1);

		std::cout << Jordan << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cout << RED << e.what() << RESET << '\n';
	}

	std::cout << std::endl << "DEFAULT CHECK 2" << std::endl;

	try
	{
		Bureaucrat Jordan("Jordan", 75);

		std::cout << Jordan << std::endl;
	}
	catch (...)
	{
		std::cout << "lol" << std::endl;
	}

	std::cout << std::endl << "TOO HIGH CHECK" << std::endl;

	try
	{
		Bureaucrat Jordan("Jordan", 1);

		std::cout << Jordan << std::endl;
		Jordan.promote();
		std::cout << Jordan << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cout << RED << e.what() << RESET << '\n';
	}

	std::cout << std::endl << "TOO LOW CHECK" << std::endl;

	try
	{
		Bureaucrat Jordan("Jordan", 150);

		std::cout << Jordan << std::endl;
		Jordan.demote();
		std::cout << Jordan << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cout << RED << e.what() << RESET << '\n';
	}

	std::cout << std::endl << "FORM CHECK 1" << std::endl;

	try
	{
		Bureaucrat Jordan("Jordan", 1);
		Form CodamForm("CodamForm", 50, 75);

		std::cout << Jordan << std::endl;
		std::cout << CodamForm << std::endl;
		Jordan.signForm(CodamForm);
		std::cout << CodamForm << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cout << RED << e.what() << RESET << '\n';
	}

	std::cout << std::endl << "GRADE TOO LOW TO SIGN" << std::endl;

	try
	{
		Bureaucrat Jordan("Jordan", 150);
		Form CodamForm("CodamForm", 50, 75);

		std::cout << Jordan << std::endl;
		std::cout << CodamForm << std::endl;
		Jordan.signForm(CodamForm);
		std::cout << std::endl;
		std::cout << CodamForm << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cout << RED << e.what() << RESET << '\n';
	}

	std::cout << std::endl << "GRADE TOO HIGH TO SIGN" << std::endl;

	try
	{
		Bureaucrat Jordan("Jordan", 150);
		Form CodamForm("CodamForm", 150, 75);
		Form Test("Test", 150, 75);
		CodamForm = Test;

		std::cout << Jordan << std::endl;
		std::cout << CodamForm << std::endl;
		Jordan.signForm(CodamForm);
		std::cout << std::endl;
		std::cout << CodamForm << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cout << RED << e.what() << RESET << '\n';
	}
	return (0);
}
