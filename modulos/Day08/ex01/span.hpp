/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   span.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: swofferh <swofferh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/10 21:34:55 by swofferh      #+#    #+#                 */
/*   Updated: 2023/02/14 19:41:07 by swofferh      ########   odam.nl         */
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
#include <limits> //_MIN _MAX testing value

static const std::string Y = "\x1b[33m\n";
static const std::string R = "\x1b[31m";
static const std::string W = "\x1b[0m\n";

class Span
{
	public:
		unsigned int counter;
		//store it
		Span(unsigned int N);
		//copy it
		Span(const Span &copy);
		//initialize it
		Span &operator=(const Span &copy);
		//filling it
		void addNumber(unsigned int num);
		//function overload - travessor for vectors
		void addNumber(std::vector<int>::iterator, std::vector<int>::iterator);
		//error handling
		unsigned int shortestSpan() const;
		unsigned int longestSpan() const;
		//extras
		void printNumbers(void);
		~Span();
	private:
		std::vector<int>_numbers;
		unsigned int _length;
		Span();
};

#endif

