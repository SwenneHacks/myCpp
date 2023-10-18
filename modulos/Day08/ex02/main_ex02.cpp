/*
	CPP PISCINE - 42 NETWORK
		STUDENT: swofferh
*/

#include "mutantstack.hpp"

template<typename Temp>
void EmptyStack(Temp container, MutantStack<int>::iterator begin, MutantStack<int>::iterator end){
	std::cout << Y << "\n [EMPTYING STACK]" << R << std::endl;
	while (begin != end)
		container.pop(begin++);
	std::cout << "done" << std::endl;
}
void test_mutant() {
	//PUSH: Inserts a new element at the top of the stack, above its current top element.
	std::cout << Y << "\n.PUSH()" << R << std::endl;
	std::stack<int> inScope;
	std::cout << "scope stack:";
	inScope.push(10); std::cout << " 10,";
	inScope.push(11); std::cout << " 11,";
	inScope.push(5); std::cout << " 5,";
	inScope.push(9); std::cout << " 9";
	//-----------------//
	MutantStack<int> Mutant;
	Mutant.push(2);
	Mutant.push(5);
	Mutant.push(7);
	Mutant.push(1);

	// Now using iterator to print MutantStack function, from begin to end.
	std::cout << "\nmutant stack: ";
	MutantStack<int>::iterator begin = Mutant.begin();
	MutantStack<int>::iterator end = Mutant.end();
	while (begin != end){ 
		std::cout << *begin << ((begin + 1 < end) ? ", " : "\n");
		++begin; }

	//TOP: Returns a reference to the top element in the stack.
	std::cout << Y << "\n.TOP()" << R << std::endl;
	std::cout << "on top scope: " << inScope.top() << std::endl;
	std::cout << "on top mutant: " << Mutant.top() << std::endl;

	//SIZE: Returns the number of elements in the stack.
	std::cout << Y << "\n.SIZE()" << R << std::endl;
	std::cout << "scope size: " << inScope.size() << std::endl;
	std::cout << "mutant size: " << Mutant.size() << std::endl;
	
	//POP: Removes the element on top of the stack, effectively reducing its size by one.
	std::cout << Y << "\n.POP()" << R << std::endl;
	Mutant.pop();
	std::cout << "new size: " << Mutant.size() << std::endl;
	std::cout << "new top: "<< Mutant.top() << std::endl;

	// NOW TESTING A LIST
	std::list<int> now_a_list;
	now_a_list.push_back(2);
	now_a_list.push_back(5);
	now_a_list.push_back(7);
	now_a_list.push_back(1);
	//--------------------//
	std::cout << Y << "\n[LIST]" << R << std::endl;
	std::list<int>::iterator iterator = now_a_list.begin(); 
	std::list<int>::iterator it_end = now_a_list.end(); 
	while (iterator != it_end) { std::cout << *iterator << ", "; ++iterator;}
	std::cout << "\n[SIZE]: " << now_a_list.size() <<std::endl;
}

int leaks(char **av)
{
	std::cout << B << std::endl;
	std::string	s = av[0];
	s = "leaks " + s.erase(0,2);
	s += " >> leaks.txt";
	system(s.c_str());
	system("grep \"total leaked bytes\" leaks.txt");
	system("rm leaks.txt");
	return(0);
}

int		main(int ac, char **av)
{
	test_mutant();
	(void)ac;
	return(leaks(av));
}
