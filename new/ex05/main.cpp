
#include "Harl.hpp"

int main()
{
	Harl bot;
	std::string check[4] = {"DEBUG","INFO","WARNING","ERROR"};
	std::string command;
	std::cout << "Give Harl a command: ";
	std::cin >> command;
	for (int i = 1; i < 5; i++)
	{
		if (command == check[i])
			std::cout << "OK." << std::endl;
			//bot.complain(command);
		else
			std::cout << "Wrong command!" << std::endl;
			break ;
	}
	return 0;
}
