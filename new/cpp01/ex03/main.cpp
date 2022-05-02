
#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

int main(){
    {
        Weapon club = Weapon("crude spiked club");
        HumanA bob("Bob", club);
        bob.attack();
        club.setType("some other type of club");
        bob.attack();
    }
    {
        Weapon club = Weapon("crude spiked club");
        HumanB jim("Jim");
        jim.setWeapon(club);
        jim.attack();
        club.setType("some other type of club");
        jim.attack();
    }
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
