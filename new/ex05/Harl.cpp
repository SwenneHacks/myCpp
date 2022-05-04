
#include "Harl.hpp"

class Harl;

Harl::Harl() 
{
	std::cout << RED << "Constructor called" << RESET << std::endl;
}

// How to declare a pointer-to-member function:
// Return_Type (Class_Name::* pointer_name) (Argument_List);

// To assign a member function to the pointer, the grammar is:
// fptr = &Class::function;

void complain( std::string level )
{
	Harl bot;
	void (Harl::*funPtr)(void);

	switch(level[0]) {
		// case 'D' :
		// 	funPtr = &Harl::debug();
		// 	break;
		// case ' I' :
	}
}

void Harl::debug()
{
	//These messages contain contextual information. 
	//They are mostly used for problem diagnosis.
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void info()
{
	//These messages contain extensive information. 
	//They are helpful for tracing program execution in a production environment.
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}
void warning()
{
	//Warning messages indicate a potential issue in the system.
	//However, it can be handled or ignored.
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void error()
{
	//These messages indicate an unrecoverable error has occurred.
	//This is usually a critical issue that requires manual intervention.
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

Harl::~Harl()
{
	std::cout << RED << "Destructor called" << RESET << std::endl;
}
