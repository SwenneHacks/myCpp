/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: swofferh <swofferh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/21 18:36:32 by swofferh      #+#    #+#                 */
/*   Updated: 2023/07/21 18:36:34 by swofferh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */


#include "Bureaucrat.hpp"

#define RED "\e[0;31m"
#define RESET "\e[0m"

int32_t	main(void)
{
	std::cout << "TOO LOW CHECK" << std::endl;
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
	catch (std::exception& e)
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

	}

	std::cout << std::endl << "TOO HIGH CHECK" << std::endl;

	try
	{
		Bureaucrat Jordan("Jordan", 1);

		std::cout << Jordan << std::endl;
		Jordan.promote();
		std::cout << Jordan << std::endl;
	}
	catch (const Bureaucrat::GradeTooHighException& e)
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
	catch (const Bureaucrat::GradeTooLowException& e)
	{
		std::cout << RED << e.what() << RESET << '\n';
	}
	return (0);
}