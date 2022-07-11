/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   phonebook.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: swofferh <swofferh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/08 15:43:26 by swofferh      #+#    #+#                 */
/*   Updated: 2020/10/08 20:41:30 by swofferh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>
#include "add.class.hpp"
#include "search.class.hpp"

int main(void) {
	std::string command;
	Database base;

	std::cout << "~~~~ CRAPPY PHONEBOOK ~~~~" << std::endl;
	while (command.compare("EXIT")) {
		std::cout << "❯ ";
		std::getline(std::cin, command);
		if (!command.compare("ADD")) {
			if (base.Count() >= 8) {
				std::cerr << "Error: Max 8 crappy people" << std::endl;
				continue;
			}
			Contact person;
			person.Prompt();
			base.AddContact(person);
		} else if (!command.compare("SEARCH")) {
			base.List();
			if (!base.Count()) continue;
			std::string input;
			int	index;
			while (true) {
				std::cout << "Enter the name you're looking for: ";
				std::getline(std::cin, input);
				if (!std::cin.good()) break;
				std::stringstream convert(input);
				if (!(convert >> index) || index < 0 || index > base.Count()) {
					std::cerr << "Oh crap: Wrong index" << std::endl;
				} else {
					base.GetContact(index).Display();
				}
				break;
			}
		}
	}
	return 0;
}
