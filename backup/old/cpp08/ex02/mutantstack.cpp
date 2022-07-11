/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mutantstack.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: swofferh <swofferh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/11 14:58:29 by swofferh      #+#    #+#                 */
/*   Updated: 2020/11/11 20:44:53 by swofferh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"

template<typename T>
MutantStack<T>::MutantStack() : std::stack<T>() {}

template<typename T>
MutantStack<T>::MutantStack(const MutantStack<T> &src) : std::stack<T>() {}

template<typename T>
MutantStack<T> &MutantStack<T>::operator=(MutantStack<T> const &src) 
{
	*this = src;
	return (*this);
}

template<typename T>
typename std::stack<T>::container_type::iterator MutantStack<T>::begin()
{
	return(this->c.begin());
}

template<typename T>
typename std::stack<T>::container_type::iterator MutantStack<T>::end()
{
	return(this->c.end());
}

template<typename T>
MutantStack<T>::~MutantStack() {}

//std lib suposed to be generic, but templates is like a recepy for classes
template class MutantStack<int>;
