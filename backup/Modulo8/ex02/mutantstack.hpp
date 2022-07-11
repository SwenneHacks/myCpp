/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mutantstack.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: swofferh <swofferh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/11 14:50:52 by swofferh      #+#    #+#                 */
/*   Updated: 2020/11/11 19:24:29 by swofferh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <stack>
#include <iterator>

template<typename T>
//container adaptor (stack is build on deque container)
class MutantStack: public std::stack<T>
{
		public:
			MutantStack();
			MutantStack(const MutantStack<T> &src);
			MutantStack<T> &operator=(MutantStack<T> const &src);
			typedef typename std::stack<T>::container_type::iterator iterator;
			iterator begin();
			iterator end();
			virtual ~MutantStack();
};

#endif
