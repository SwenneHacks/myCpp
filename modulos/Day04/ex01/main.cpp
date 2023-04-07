/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: swofferh <swofferh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/23 18:37:37 by swofferh      #+#    #+#                 */
/*   Updated: 2023/04/07 13:31:10 by swofferh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

void test_array(void)
{
	int number_of_animals;
	std::cout << "\nChoose how many animals you want to create: ";
	std::cin >> number_of_animals;

	// ARRAY OF ANIMALS
	const Animal* animals[number_of_animals];
	for (int i = 0; i < number_of_animals; i++) 
	{
		if (i % 2 == 0)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();	
	}

	std::cout << "\n>>>>>>>>" << RED <<" DESTRUCTORS:" << RESET << std::endl;
	
	// DELETE ALL ANIMALS
	for (int i = 0; i < number_of_animals; i++) 
		delete animals[i];
}

void test_deepness_dog(void)
{
	std::cout << "Deep Copy Dog" << std::endl;

	Dog Dog_outter_scope;
	
	if (true)
	{
		Dog inner_scope1 = Dog_outter_scope;
		Dog inner_scope2(Dog_outter_scope);
		// Dog_outter_scope = inner_scope1; // <- Second run
	}
}

void test_deepness_cat(void)
{
	Cat Cat_outter_scope;
	std::cout << "Deep Copy Cat" << std::endl;

	if (true)
	{
		Cat inner_scope1 = Cat_outter_scope;
		Cat inner_scope2(Cat_outter_scope);
		// Cat_outter_scope = inner_scope1; // <- Second run
	}
}

void check_leaks(char **av)
{
	std::cout << RED_BOLD << "\nLEAKS: " << WHITE_BOLD << std::endl;
	std::string	s = av[0];
	s = "leaks " + s.erase(0,2);
	s += " >> leaks.txt";
	system(s.c_str());
	system("grep \"total leaked bytes\" leaks.txt");
	system("rm leaks.txt");
}

int main(int ac, char **av)
{
    test_array();
    // test_deepness_dog();
    // test_deepness_cat();
	(void)ac;
	check_leaks(av);
    return 0;
}