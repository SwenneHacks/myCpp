/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: swofferh <swofferh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/23 17:30:53 by swofferh      #+#    #+#                 */
/*   Updated: 2023/04/03 15:56:21 by swofferh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "colors.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

void wrong(void)
{
    std::cout << "__________________________" << std::endl;
    std::cout << "        \n WRONG "            << std::endl;
    std::cout << "__________________________" << std::endl;
    const WrongAnimal* a = new WrongAnimal();
    const WrongAnimal* b = new WrongCat();
    const WrongCat* c = new WrongCat();

    std::cout << "__________________________" << std::endl;
    std::cout << "        \n SOUNDS"            << std::endl;
    std::cout << "__________________________" << std::endl;
    std::cout << RED << "getType: " << RESET << a->getType() << RED << " Sound: " << RESET;
    a->makeSound();
    std::cout << RED << "getType: " << RESET << b->getType() << RED << "    Sound: " << RESET;
    b->makeSound();
    std::cout << RED << "getType: " << RESET << c->getType() << RED << "    Sound: " << RESET;
    c->makeSound();

    std::cout << "__________________________" << std::endl;
    std::cout << "        \n DELETE"            << std::endl;
    std::cout << "__________________________" << std::endl;
    delete b;
    delete c;
}

void normal(void)
{
    std::cout << "__________________________" << std::endl;
    std::cout << "        \n ANIMAL"            << std::endl;
    std::cout << "__________________________" << std::endl;
    const Animal* animal = new Animal();
    const Animal* dog = new Dog();
    const Animal* cat = new Cat();

    std::cout << "__________________________" << std::endl;
    std::cout << "        \n SOUNDS"            << std::endl;
    std::cout << "__________________________" << std::endl;
    std::cout << RED << "getType: " << RESET << dog->getType() << RED << "  Sound: " << RESET;
    cat->makeSound();
    std::cout << RED << "getType: " << RESET << cat->getType() << RED << "  Sound: " << RESET;
    dog->makeSound();
    std::cout << RED << "getType: " << RESET << animal->getType() << RED << "  Sound: " << RESET;
    animal->makeSound();

    std::cout << "__________________________" << std::endl;
    std::cout << "        \n DELETE"            << std::endl;
    std::cout << "__________________________" << std::endl;
    delete animal;
    delete dog;
    delete cat;
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

int	 main(int ac, char **av)
{
	normal();
	wrong();

	(void)ac;
	check_leaks(av);

	return (0);
}
