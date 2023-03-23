/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: swofferh <swofferh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/23 17:30:53 by swofferh      #+#    #+#                 */
/*   Updated: 2023/03/23 18:40:33 by swofferh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "colors.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main(void)
{
    std::cout << "___________\n\n STARTING\n___________\n" << std::endl;
    const Animal* meta = new Animal();
    const Animal* dog = new Dog();
    const Animal* cat = new Cat();

    std::cout << "___________\n\n GETTERS\n___________\n" << std::endl;
    std::cout << dog->getType() << std::endl;
    std::cout << cat->getType() << std::endl;

    std::cout << "___________\n\n SOUNDS\n___________\n" << std::endl;
    cat->makeSound(); // will output the cat sound!
    dog->makeSound();
    meta->makeSound();

    std::cout << "___________\n\n DELETE\n___________\n" << std::endl;
    delete meta;
    delete dog;
    delete cat;

    std::cout << "___________\n\nWRONG ONES\n___________\n" << std::endl;
    const WrongAnimal* a = new WrongAnimal();
    const WrongAnimal* b = new WrongCat();
    const WrongCat* c = new WrongCat();

    std::cout << "___________\n\n GETTERS\n___________\n" << std::endl;
    std::cout << a->getType() << std::endl;
    std::cout << b->getType() << std::endl;
    std::cout << c->getType() << std::endl;

    std::cout << "___________\n\n SOUNDS\n___________\n" << std::endl;
    a->makeSound(); //will output of Animal sound
    b->makeSound();
    c->makeSound();

    std::cout << "___________\n\n DELETE\n___________\n" << std::endl;
    delete a;
    delete b;
    delete c;
    return 0;
}