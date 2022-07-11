/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   phonebook.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: swofferh <swofferh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/08 15:43:26 by swofferh      #+#    #+#                 */
/*   Updated: 2020/10/16 18:34:39 by swofferh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.class.hpp"

int main(void) {
	std::string command;
	Phonebook contacts[9];
	int	input = 1;
	int output = 1;

	std::cout << "\n~~~~ WELCOME TO CRAPPY PHONEBOOK ~~~~\n" << std::endl;
	std::cout << "	ADD - create a new contact" << std::endl;
	std::cout << "	SEARCH - see existant contacts" << std::endl;
	std::cout << "	EXIT - Close crappy phonebook\n" << std::endl;
	while (command.compare("EXIT")) {
		std::cout << "Ok, choose a command = ";
		std::cin >> command;
		if (std::cin.fail())
			return 1;
		if (!command.compare("ADD")) {
			input = contacts[input].SetContact(input);
		}
		else if (!command.compare("SEARCH")) {
			std::cout << "\n    INDEX|" << "FIRST NAME|" << " LAST NAME|" << " NICK NAME|" << std::endl;
			for (output = 1; output < input; output++)
			{
				std::cout << "	" << output << "|";
				contacts[output].GetContacts();
				std::cout << '\n';
			}
			std::string index ("index");
			std::cout << "\nWho are you looking for?" << std::endl;
			std::cout << "index = ";
			std::cin >> index;
			output = std::atoi(index.c_str());
			if (output < input && output > 0)
				contacts[output].GetContactInfo();
			else
				std::cout << "No match found." << std::endl;
		}
	}
	return 0;
}
