/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   add.class.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: swofferh <swofferh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/08 20:10:46 by swofferh      #+#    #+#                 */
/*   Updated: 2020/10/08 20:39:28 by swofferh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "add.class.hpp"

Contact::Contact(){}
Contact::~Contact(){}

std::string Contact::_fieldNames[FIELD_COUNT] = {
	"First name",
	"Last name",
	"Nickname",
	"Login",
	"Postal address",
	"Email address",
	"Phone number",
	"Birthday date",
	"Favorite Meal",
	"Underwear color",
	"Darkest secret",
};

void	 	Contact::Prompt(void) {
	std::cout << "Creating a new crappy contact" << std::endl;

	for (int i = 0; i < FIELD_COUNT; i++) {
		std::string input;
		while (!input.compare("")) {
			std::cout << _fieldNames[i] << " : ";
			std::getline(std::cin, input);
			if (!std::cin.good()) exit(0);
			if (!input.compare("")) {
				std::cerr << "Oh crap: empty input" << std::endl;
			}
		}
		this->SetField(i, input);
	}
	return ;
}

void		Contact::Display(void) const {
	for (int i = 0; i < FIELD_COUNT; i++) {
		std::cout << _fieldNames[i] << ": " << this->_fields[i] << std::endl;
	}
}

void		Contact::SetField(int i, std::string input){
	this->_fields[i] = input;
	return;
}

std::string	Contact::GetField(int i) const {
	return (this->_fields[i]);
}

int			Contact::FindField(std::string name) {
	for (int i = 0; i < FIELD_COUNT; i++) {
		if (!name.compare(Contact::_fieldNames[i]))
			return (i);
	}
	return (-1);
}
