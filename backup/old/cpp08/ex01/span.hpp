/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   span.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: swofferh <swofferh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/10 21:34:55 by swofferh      #+#    #+#                 */
/*   Updated: 2020/11/11 16:46:31 by swofferh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <vector> //push_back, insert, clear (dynamic array)
#include <iostream> //cout & cerr output streams (print)
#include <stdlib.h> //abs absolute unsigned value 
#include <iterator> //distance (calculate number of elements)
#include <cstdlib> //srand time(NULL) for random numbers test
#include <stdexcept> //runtime_error message
#include <algorithm> //sort, min, max, clear 
#include <limits> //_MIN _MAX testing values

class Span
{
	private:
		std::vector<int>numbers;
		unsigned int length;
		unsigned int counter;
		Span();
	public:
		//store it
		Span(unsigned int N);
		//copy it
		Span(const Span &copy);
		Span &operator = (const Span &copy);
		//filling it
		void addNumber(unsigned int num);
		//error handling
		void addNumber(std::vector<int>::iterator, std::vector<int>::iterator);
		//returning values
		unsigned int shortestSpan() const;
		unsigned int longestSpan() const;
		~Span();
};

#endif
