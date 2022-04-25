
#include "Zombie.hpp"
#include "ZombieHorde.hpp"

int main(void) {
    ZombieHorde horde(8);
    horde.announce();
	return 0;
}

// int		main(int ac, char **av)
// {
// 	test();
// 	std::cout << std::endl;
// 	std::string	s = av[0];
// 	s = "leaks " + s.erase(0,2);
// 	if (ac > 1 && !strcmp(av[1],"leaks"))
// 		system(s.c_str());
// 	else
// 	{
// 		s += " >> leaks.txt";
// 		system(s.c_str());
// 		system("grep \"total leaked bytes\" leaks.txt");
// 		system("rm leaks.txt");
// 	}
// 	return (0);
// }
