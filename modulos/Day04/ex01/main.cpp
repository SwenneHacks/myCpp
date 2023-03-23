/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: swofferh <swofferh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/23 18:37:37 by swofferh      #+#    #+#                 */
/*   Updated: 2023/03/23 18:37:40 by swofferh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

void test_array(void)
{
	std::cout << "Test basics" << std::endl;

	const Animal* animals[NUMBER_ANIMALS];

	for (int i = 0; i < NUMBER_ANIMALS; i++) {
		if (i % 2 == 0) {
			animals[i] = new Dog();
		} else {
			animals[i] = new Cat();
		}
	}

	for (int i = 0; i < NUMBER_ANIMALS; i++) {
		delete animals[i];
	}
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
	std::cout << "Deep Copy Cat" << std::endl;
	Cat Cat_outter_scope;

	if (true)
	{
		Cat inner_scope1 = Cat_outter_scope;
		Cat inner_scope2(Cat_outter_scope);
		// Cat_outter_scope = inner_scope1; // <- Second run
	}
}

int main(void)
{
    test_array();
    test_deepness_dog();
    test_deepness_cat();
	system("leaks polymorphism");
    return 0;
}