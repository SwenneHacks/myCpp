
#include "Harl.hpp"

int main()
{
	Harl Karen;
	std::string check[] = {"DEBUG","INFO","WARNING","ERROR"};
	std::string command;
	std::cout << "Give Harl a command: ";
	std::cin >> command;
	for (int i = 0; i < 4; i++){
		if (command == check[i]){
			Karen.complain(command);
			return 0;
		}
	}
	std::cout << BLUE << "Wrong command, Karen!" << std::endl;
	return 0;
}
