
#include "MutantStack.hpp"
#include <stack>
#include <iostream>
#include <list>
#include <algorithm>

int main() {
	MutantStack<int> mstack;
	std::stack<int> stack_real;
	std::cout << "PUSHING 2 values" << std::endl;
	stack_real.push(10);
	std::cout << "Real stack: " << stack_real.top() << std::endl;
	mstack.push(5);
	mstack.push(17);
	std::cout << "TOP" << std::endl;
	std::cout << mstack.top() << std::endl;
	std::cout << "POP 1" << std::endl;
	mstack.pop();
	std::cout << "SIZE" << std::endl;
	std::cout << mstack.size() << std::endl;
	std::cout << "TOP" << std::endl;
	std::cout << mstack.top() << std::endl;

	std::cout << "PUSHING 4 values" << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	
	while (it != ite)
	{
		std::cout << *it << ((it + 1 < ite) ? ", " : "\n");
		++it;
	}

	MutantStack<int> stackerino(mstack);
	std::cout << "EMPTYING ORIGINAL STACK.." << std::endl;
	mstack.pop();
	mstack.pop();
	mstack.pop();
	mstack.pop();
	mstack.pop();

	std::cout << "PRINTING COPY CONSTRUCTED STACK" << std::endl;
	MutantStack<int>::iterator iter = stackerino.begin();
	MutantStack<int>::iterator end = stackerino.end();
	
	while (iter != end)
	{
		std::cout << *iter << ((iter + 1 < end) ? ", " : "\n");
		++iter;
	}
	return 0;
}
