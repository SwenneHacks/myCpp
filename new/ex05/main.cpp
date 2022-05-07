
#include "Harl.hpp"

int main()
{
	Harl Karen;
	int i = 0;
	std::string check[] = {"DEBUG","INFO","WARNING","ERROR"};
	std::string command;
	std::cout << "Give Harl a command: ";
	std::cin >> command;
	while(i < 4){
		if (command == check[i]){
			Karen.complain(command);
			return 0;
		}
		i++;
	}
	if (command != check[i])
		std::cout << BLUE << "Wrong command, Karen!" << std::endl;
	return 0;
}
