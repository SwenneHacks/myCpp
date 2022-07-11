




#include "span.hpp"
#include <stdexcept>
#include <vector>
#include <algorithm>
#include <climits>
#include <iostream>
#include <map>

Span::Span() {}

Span::Span(unsigned int N) : length(N)
{
	if (!N)
		throw (std::runtime_error("Could not create a Span with length of 0"));
	this->numbers = std::vector<int>();
}

Span::Span(const Span& src) : length(src.length)
{
	*this = src;
}

Span &Span::operator = (const Span& src)
{
	this->length = src.length;
	this->numbers = std::vector<int>(src.numbers);
	return (*this);
}

Span::~Span() {}

void Span::addNumber(int num)
{
	if (this->numbers.size() >= this->length)
		throw (std::runtime_error("Tried to add to an already filled array"));
	this->numbers.push_back(num);
}

void Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	if (std::distance(begin, end) + this->numbers.size() > this->length)
		throw (std::runtime_error("Could not add, would exceed max size"));
	this->numbers.insert(this->numbers.end(), begin, end);
}

unsigned long Span::shortestSpan() const
{
	int mindiff;
	int diff;
	std::vector<int> copy;

	if (this->numbers.size() <= 1)
		throw (std::runtime_error("Array empty or only contains 1 integer"));
	copy = std::vector<int>(this->numbers);
	std::sort(copy.begin(), copy.end());
	mindiff = copy[1] - copy[0];
	for (unsigned int i = 1; i < copy.size(); i++)
	{
		diff = abs(copy[i] - copy[i - 1]);
		if (diff < mindiff)
			mindiff = diff;
	}
	return (mindiff);
}

unsigned long Span::longestSpan() const
{
	if (this->numbers.size() <= 1)
		throw (std::runtime_error("Array empty or only contains 1 integer"));
	std::vector<int> copy = this->numbers;
	std::sort(copy.begin(), copy.end());
	return (abs(copy[this->numbers.size() - 1] - copy[0]));
}
