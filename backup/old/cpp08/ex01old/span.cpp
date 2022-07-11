/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   span.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: swofferh <swofferh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/10 20:50:24 by swofferh      #+#    #+#                 */
/*   Updated: 2020/11/11 13:55:43 by swofferh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span(unsigned int N) : length(N)
{
	if (!N)
		throw (std::runtime_error("Could not create a Span with length of 0"));
	this->numbers = std::vector<int>();
}

Span::Span(const Span& copy) : length(copy.length) {*this = copy;}

Span &Span::operator = (const Span& copy)
{
	this->length = copy.length;
	this->numbers = std::vector<int>(copy.numbers);
	return (*this);
}

void Span::addNumber(unsigned int num)
{
	if (this->numbers.size() >= this->length)
		throw (std::runtime_error("Failed. Tried to add to an already filled array"));
	this->numbers.push_back(num);
}

void Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	if (std::distance(begin, end) + this->numbers.size() > this->length)
		throw (std::runtime_error("Could not add, would exceed max size"));
	this->numbers.insert(this->numbers.end(), begin, end);
}

unsigned int Span::shortestSpan() const
{
	std::vector<int>    copy = std::vector<int>(this->numbers);
	unsigned int      	diff;
	unsigned int        rett;

	if (this->numbers.size() <= 1)
		throw (std::runtime_error("Array empty or only contains 1 integer"));
	std::sort(copy.begin(), copy.end());
	for (unsigned int i = 1; i < copy.size(); i++){
		diff = abs(copy[i] - copy[i - 1]);
		rett = std::min<unsigned int> (diff, rett);
	}
	return (rett);
}

unsigned int Span::longestSpan() const
{
	std::vector<int> 	copy = this->numbers;
	unsigned int		max = *(std::max_element(copy.begin(), copy.end()));
	unsigned int		min = *(std::min_element(copy.begin(), copy.end()));
	unsigned int 		ret = max - min;

	if (this->numbers.size() <= 1)
		throw (std::runtime_error("Array empty or only contains 1 integer"));
	std::sort(copy.begin(), copy.end());
	return (ret);
}

Span::~Span() { std::vector<int>().swap(this->numbers); }
