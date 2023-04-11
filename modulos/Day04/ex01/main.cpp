/**
 * @file main.cpp
 * @author swofferh (swofferh@student.codam.nl)
 * @brief 42 Network project CPP Modulo 4
 * @version 0.1
 * @date 2023-04-11
 */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

static std::string ARROW = "\n>>>>>>>>" RED;

void _print_sounds() { std::cout << ARROW <<" TESTING SOUNDS" << RESET << std::endl;}
void _print_inScope() {std::cout << ARROW <<" INSIDE OF SCOPE" << RESET << std::endl;}
void _print_outScope() {std::cout << ARROW <<" OUTSIDE OF SCOPE" << RESET << std::endl;}
void _print_destructors() { std::cout << ARROW << " DESTRUCTORS" << RESET << std::endl;}


void test_deepness(Cat out_cat, Dog out_dog)
{
	_print_outScope();
	Cat cat = out_cat;
	Dog dog = out_dog;

	_print_sounds();
	dog.makeSound();
	cat.makeSound();

	_print_destructors();
}

void test_subject(void)
{
	std::cout << ARROW <<" SUBJECT TEST" << RESET << std::endl;
	Animal* in_dog = new Dog();
	Animal* in_cat = new Cat();
	
	_print_sounds();
	in_dog->makeSound();
	in_cat->makeSound();
	
	_print_destructors();
	delete in_dog;//should not create a leak
	delete in_cat;
}

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

	_print_destructors();

	// DELETE ALL ANIMALS
	for (int i = 0; i < number_of_animals; i++) 
		delete animals[i];
	
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
	(void)ac;
	std::cout << ARROW << " STARTING TESTS" << std::endl;
    test_array();
	test_subject();
	std::cout << ARROW << " INSIDE SCOPE" << std::endl;
	Cat cat;
	Dog dog;
	std::cout << ARROW << " DEEP COPY ANIMALS" << std::endl;
	test_deepness(cat, dog);
	check_leaks(av);
	std::cout << ARROW << " DESTRUCTORS" << std::endl;
    return 0;
}