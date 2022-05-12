
#include "Harl.hpp"

int main(int argc, char **argv){
	Harl filter;
	int	level;
	std::string check[] = {"DEBUG","INFO","WARNING","ERROR"};
	if (argc != 2){
		std::cout << BLUE << "try giving this program the right input!" << std::endl;
		return 1;
	}
	for(int i = 0; i < 4; i++){
		if(argv[1] == check[i]){
			while (i < 4){
				std::cout << BLUE << "[" << check[i] << "]\n";
				filter.complain(check[i]);
				i++;
				std::cout << "\n";
			}
			return 0;
		}
	}
	std::cout << GREEN << "[ Probably complaining about insignificant problems ]" << std::endl;
	return 0;
}
