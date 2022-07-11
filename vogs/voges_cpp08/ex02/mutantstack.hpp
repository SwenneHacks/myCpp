/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mutantstack.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: swofferh <swofferh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/11 14:50:52 by swofferh      #+#    #+#                 */
/*   Updated: 2020/11/11 20:47:55 by swofferh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <stack>
#include <iterator>

template<typename T>
class MutantStack: public std::stack<T>
{
		public:
		typedef typename std::stack<T>::container_type::iterator iterator;
			iterator begin(){return(this->c.begin());}
			iterator end(){return(this->c.end());}
};

#endif
