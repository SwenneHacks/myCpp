/*
	CPP PISCINE - 42 NETWORK
		STUDENT: swofferh
*/

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <list>
# include <stack>
# include <vector>
# include <iterator>
# include <iostream>
# include <algorithm>

static const std::string Y = "\x1b[33m";
static const std::string B = "\x1b[34m";
static const std::string R = "\x1b[0m\n";

//					container adaptor (stack is build on deque container)
template<typename T>
class MutantStack: public std::stack<T>
{
	public:
		MutantStack() {}
		~MutantStack() {}
		// ITERATOR
		typedef typename std::stack<T>::container_type::iterator iterator;
		iterator begin() { return(this->c.begin()); }
		iterator end() { return(this->c.end()); }
};

#endif
