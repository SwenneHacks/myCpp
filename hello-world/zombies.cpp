/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   zombies.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: swofferh <swofferh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/13 16:22:26 by swofferh      #+#    #+#                 */
/*   Updated: 2020/10/20 12:36:21 by swofferh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "zombies.hpp"

int test(void) {
    std::string name;
	std::string type;
	std::cout << "\nOh shit, a zombie! Let give it a funny name!\nName: ";
	std::cin >> name;
	std::cout << "What kind of zombie do you think it is?\nI heard on zombieland you'll find ones they call (Homers), who are kind of the dumber zombies.\nThere are also the (Ninjas) who are quite deadly - they'll sneak up on you out of nowhere.\nAnd then there's also the (Hawkings), who are freakin genious, they'll find ways to outsmart you.\nCould it be one of those?\nPick a type: ";
	std::cin >> type;
	std::cout << std::endl;
    Zombie zombieland = Zombie(name, type);
    zombieland.announce();
	return 0;
}

int		leaks(int ac, char **av)
{
	test();
	std::cout << std::endl;
	std::string	s = av[0];
	s = "leaks " + s.erase(0,2);
	if (ac > 1 && !strcmp(av[1],"leaks"))
		system(s.c_str());
	else
	{
		s += " >> leaks.txt";
		system(s.c_str());
		system("grep \"total leaked bytes\" leaks.txt");
		system("rm leaks.txt");
	}
	return (0);
}
