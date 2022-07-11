/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: swofferh <swofferh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/08 15:43:26 by swofferh      #+#    #+#                 */
/*   Updated: 2020/10/13 19:46:12 by swofferh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "pony.hpp"

void PonyOnHeap(std::string name, std::string color, std::string magic){
	Pony *heapy = new Pony(name, color, magic);
	if (!heapy){
		std::cerr << "Failed to allocate your pony." << std::endl;
		return;
	}
	heapy->GetPony();
	std::cout << "On Heap:" << name << " is going to " << magic << " now. Look at him go! *imagining*" << std::endl;
	delete(heapy);
}

void PonyOnStack(std::string name, std::string color, std::string magic){
	Pony stacky = Pony(name, color, magic);
	stacky.GetPony();
	std::cout << "On Stack:" << name << " is going to " << magic << ". Oh no, he did it! *imagining*" << std::endl;
}

int main(void) {
	std::string magic;
	std::string color;
	std::string name;
	
	std::cout << "\nDiscribe your magic STACK pony.\nName: ";
	std::cin >> name;
	std::cout << "Color: ";
	std::cin >> color;
	std::cout << "Magic Power: ";
	std::cin >> magic;
	std::cout << std::endl;
	//PonyOnStack("Blowjack", "pink", "read minds");
	
	PonyOnStack(name, color, magic);
	std::cout << "\nNow discribe your magic HEAP pony.\nName: ";
	std::cin >> name;
	std::cout << "Color: ";
	std::cin >> color;
	std::cout << "Magic Power: ";
	std::cin >> magic;
	std::cout << std::endl;
	//PonyOnHeap("Rainbowie", "multicolor", "fly");
	PonyOnHeap(name, color, magic);
	system("leaks pony");
	return 0;
}
