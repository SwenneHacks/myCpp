/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: swofferh <swofferh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/11 19:24:00 by swofferh      #+#    #+#                 */
/*   Updated: 2020/11/11 19:24:53 by swofferh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"
#include <iostream>
#include <algorithm>

int main() {
	MutantStack<int> muta_stack;
	std::stack<int> real_stack;

	std::cout << "\n[PUSHING 2 values]" << std::endl;
	std::cout << "real one: 3, 10" << std::endl;
	std::cout << "mutant: 5, 17" << std::endl;
	
	std::cout << "\n.TOP" << std::endl;
	real_stack.push(10);
	real_stack.push(3);
	std::cout << "Real stack: " << real_stack.top() << std::endl;

	//PUSH: Inserts a new element at the top of the stack, above its current top element.
	muta_stack.push(5);
	muta_stack.push(17);
	std::cout << "Muta stack: " << muta_stack.top() << std::endl;

	//SIZE: Returns the number of elements in the stack.
	std::cout << "\n.SIZE" << std::endl;
	std::cout << "mutant size: " << muta_stack.size() <<std::endl;
	
	//POP: Removes the element on top of the stack, effectively reducing its size by one.
	std::cout << "\n.POP" << std::endl;
	muta_stack.pop();
	std::cout << "new size: " << muta_stack.size() << std::endl;
	
	//TOP: Returns a reference to the top element in the stack.
	std::cout << "\n.TOP" << std::endl;
	std::cout << "new top: "<< muta_stack.top() << std::endl;

	std::cout << "\n[PUSHING 4 values]" << std::endl;
	muta_stack.push(3);
	muta_stack.push(5);
	muta_stack.push(737);
	muta_stack.push(0);

	MutantStack<int>::iterator it = muta_stack.begin();
	MutantStack<int>::iterator ite = muta_stack.end();
	while (it != ite)
	{
		std::cout << *it << ((it + 1 < ite) ? ", " : "\n");
		++it;
	}

	std::cout << "\nEMPTYING ORIGINAL STACK" << std::endl;
	muta_stack.pop();
	muta_stack.pop();
	muta_stack.pop();
	muta_stack.pop();
	muta_stack.pop();
	std::cout << "done" << std::endl;

	return 0;
}
