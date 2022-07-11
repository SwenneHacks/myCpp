/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   phonebook.class.cpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: swofferh <swofferh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/08 20:10:46 by swofferh      #+#    #+#                 */
/*   Updated: 2020/10/17 20:36:41 by swofferh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.class.hpp"

Phonebook::Phonebook(){}

int	Phonebook::SetContact(int i)
{
	if (i < 9)
	{
		i++;
		std::cout << "What is your first name? ";
		std::cin >> this->_first_name;
		std::cout << "what is your last name? ";
		std::cin >> this->_last_name;
		std::cout << "what is your nickname? ";
		std::cin >> this->_nick_name;
		std::cout << "what is your username? ";
		std::cin >> this->_user_name;
		std::cout << "what is your postal address? ";
		std::cin >> this->_postal_address;
		std::cout << "what is your email address? ";
		std::cin >> this->_email_address;
		std::cout << "when is your birthday? ";
		std::cin >> this->_birthday_date;
		std::cout << "what is your favorite meal? ";
		std::cin >> this->_favorite_meal;
		std::cout << "what is your underwear color? ";
		std::cin >> this->_underwear_color;
		std::cout << "what is your darkest secret? ";
		std::cin >> this->_darkest_secret;
	}
	else
		std::cout << "\noh crap, phonebook is full...\n" << std::endl;
	return (i);
}

void Phonebook::GetContacts(void)const
{
	PrintContact(this->_first_name);
	PrintContact(this->_last_name);
	PrintContact(this->_nick_name);
}

void Phonebook::PrintContact(std::string output)const
{
	if(output.length() > 10){
		output.at(9) = '.';
		output.resize(10);
	}
	else{
		for (int i = (int)output.length(); i < 10; i++)
			std::cout << " ";
	}
	std::cout << output << "|";
	return;
}

void Phonebook::GetContactInfo(void)const
{
		std::cout << "\nfirst name = " << this->_first_name << std::endl;
		std::cout << "last name = " << this->_last_name << std::endl;
		std::cout << "nickname = " << this->_nick_name << std::endl;
		std::cout << "username = " << this->_user_name << std::endl;
		std::cout << "postal address = " << this->_postal_address << std::endl;
		std::cout << "email address = " << this->_email_address << std::endl;
		std::cout << "birthday = " << this->_birthday_date << std::endl;
		std::cout << "favorite meal = " << this->_favorite_meal << std::endl;
		std::cout << "underwear color = " << this->_underwear_color << std::endl;
		std::cout << "darkest secret = " << this->_darkest_secret << std::endl;
}

Phonebook::~Phonebook(){}