
#include "Zombie.hpp"

int main()
{
	std::string name;
	std::string color = "\x1b[33m";
	std::cout << color << "\nOh shit, a zombie! Lets give it a funny name!\nName: \x1b[0m";
	std::cin >> name;
	std::cout << std::endl;
	
	Zombie master = Zombie(name);
	master.announce();

	std::cout << color << "\nWell, this zombie isn't happy with this name you gave...\n and is now summoning a new zombie with a cooler name.\n\x1b[0m" << std::endl;
	Zombie *newone = newZombie("Ronaldo");
	newone->announce();
	delete newone;

	std::cout << color << "Oh good, YOU SHOT HIM!!!\nBut WAIT! Other random zombies coming our way!\n\x1b[0m" << std::endl;
	std::srand(std::time(NULL));
	for(int i = 0; i < 3; i++)
		randomChump(name);
	std::cout << color << name << " seems to be the only brainless-man standing...\x1b[0m" << std::endl;
	return 0;
}
