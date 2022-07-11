/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: swofferh <swofferh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/13 16:22:26 by swofferh      #+#    #+#                 */
/*   Updated: 2020/10/16 21:40:05 by swofferh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int main()
{
	std::string type;
	std::string name;
	std::cout << "\nOh shit, a zombie! Let give it a funny name!\nName: ";
	std::cin >> name;
	std::cout << std::endl;
	
	ZombieEvent new_zombie;
	Zombie *zombie = new_zombie.newZombie(name);
	
	std::cout << "What kind of zombie do you think it is? It looks like one of those <brainless> types.\nBut I heard on zombieland you'll find the ones they call <Homers>, who are kind of the dumber zombies.\nThere are also the <Ninjas> who are quite deadly - they'll sneak up on you out of nowhere.\nAnd then there's also the <Hawkings>, who are freakin genious, they'll find ways to outsmart you.\nCould it be one of those?\nPick a type: ";
	std::cin >> type;
	std::cout << std::endl;
	new_zombie.setZombieType(type);

	Zombie zombieland = Zombie(name, type);
    zombieland.announce();
	
	std::cout << "\nOh shit, other zombies coming our way!\n"<< std::endl;
	std::srand(std::time(NULL));
	for(int i = 0; i < 3; i++)
		new_zombie.randomChump();
	
	delete zombie;
	return 0;
}
