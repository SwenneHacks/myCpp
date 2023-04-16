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
#include "Brain.hpp"

static std::string ARROW = "\n>>>>>>>>" RED;

void _print_sounds() { std::cout << ARROW <<" TESTING SOUNDS" << RESET << std::endl;}
void _print_inScope() { std::cout << ARROW <<" INSIDE OF SCOPE" << RESET << std::endl;}
void _print_outScope() { std::cout << ARROW <<" OUTSIDE OF SCOPE" << RESET << std::endl;}
void _print_destructors() { std::cout << ARROW << " DESTRUCTORS" << RESET << std::endl;}
void _print_unchanged() { std::cout << ARROW << " UNCHANGED IDEAS" << RESET << std::endl;}
void _print_copychange() { std::cout << ARROW << " COPY/CHANGED IDEAS" << RESET << std::endl;}

void test_deepness()
{
    Cat oldCat;
    _print_unchanged();
    oldCat.printIdeas();

    Cat CopyCat(oldCat);
    CopyCat.setIdea("NEW IDEA");
	_print_copychange();
    oldCat.printIdeas();

    // Dog oldDog;
    // Dog CopyDog(oldDog);
    // oldDog.getBrain()->setIdea(newIdea, 99);
    // std::cout << "---------------- COPY DOG HAS NOT CHANGED ITS IDEA 99 ----------------" << std::endl;
    // CopyDog.getBrain()->printIdeas();
    // std::cout << "---------------- CHANGED OLDDOG IDEA 99 ----------------" << std::endl;
    // oldDog.getBrain()->printIdeas();

	std::cout << ARROW << " DESTRUCTORS" << std::endl;
}

void test_subject(void)
{
	std::cout << ARROW <<" SUBJECT TEST" << RESET << std::endl;
	Animal* doggo = new Dog();
	Animal* kitty = new Cat();
	
	_print_sounds();
	doggo->makeSound();
	kitty->makeSound();
	
	_print_destructors();
	delete doggo;//should not create a leak
	delete kitty;
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
	std::cout << ARROW << " TEST DEAPNESS" << std::endl;
	test_deepness();
	check_leaks(av);
    return 0;
}