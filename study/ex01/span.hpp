




#ifndef SPAN_HPP
# define SPAN_HPP

#include <vector>

class Span
{
	private:
		std::vector<int>numbers;
		unsigned int length;
		Span();
	public:
		~Span();
		Span(unsigned int N);
		Span(const Span& src);
		Span &operator = (const Span& src);
		void addNumber(int num);
		void addNumber(std::vector<int>::iterator, std::vector<int>::iterator);
		unsigned long shortestSpan() const;
		unsigned long longestSpan() const;
};

#endif
