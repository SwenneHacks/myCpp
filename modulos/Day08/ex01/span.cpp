/*
	CPP PISCINE - 42 NETWORK
		STUDENT: swofferh
*/

#include "span.hpp"

/*______________________ ERROR HANDLING _______________________*/

void check_errorMaxSize(unsigned int size, unsigned int max) { if (size >= max)
	throw (std::length_error("Error: Could not add, limit (max size) exeeded"));
}

void check_errorMinSize(unsigned int size){ if (size <= 1)
	throw (std::runtime_error("Error: Array empty or only contains 1 integer"));
}

void check_errorEmpty(unsigned int N){ if (!N)
	throw (std::length_error("Error: Could not create a Span with length of 0"));
}

/*_______________________ BUILD UP _________________________*/

Span::Span(unsigned int N) : _length(N), counter(0) { check_errorEmpty(N);
	this->_numbers = std::vector<int>();
}

Span::Span(const Span &copy) : _length(copy._length){
	*this = copy;
}

Span::~Span() { 
	this->_numbers.clear();
}

/*________________________ OPERATORS _________________________*/

Span &Span::operator=(const Span &copy){
	_numbers = copy._numbers;
	return (*this);
}

template <typename T>
std::ostream &operator<<(std::ostream &out, const std::vector<T> &v){
	for (unsigned i = 0; i < v.size(); i++) { 
		if (i)
			out << " ";
		out << v[i];
	}
	return out;
}

/*______________________ Extra function ________________________*/

void Span::printNumbers(void){
	std::vector<int>::iterator it = this->_numbers.begin();
	for( *it; it != this->_numbers.end(); it++)
	{ 	std::cout << *it << " ";	}
	std::cout << std::endl;
}

/*______________________ ADD Number ______________________*/

void Span::addNumber(unsigned int n) {
	check_errorMaxSize(this->_numbers.size(), this->_length);
	this->_numbers.push_back(n);
	counter++;
}

void Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end){
	check_errorMaxSize(std::distance(begin, end), this->_length);
	counter += end - begin;
	this->_numbers.insert(this->_numbers.end(), begin, end);
}

/*______________________ SHORTEST SPAN _______________________*/

unsigned int Span::shortestSpan() const{
	std::vector<int>    numbers = std::vector<int>(this->_numbers);
	unsigned int        result = std::numeric_limits<unsigned int>::max();
	unsigned int      	diff = 0;

	check_errorMinSize(this->_numbers.size());
	std::sort(numbers.begin(), numbers.end());
	for (unsigned int i = 0; i < numbers.size() - 1; i++){
		diff = numbers[i + 1] - numbers[i];
		result = std::min<unsigned int> (diff, result);}
	return (result);
}

/*______________________ LONGEST SPAN ________________________*/

unsigned int Span::longestSpan() const {
	std::vector<int> 	copy = this->_numbers;
	unsigned int		max = *(std::max_element(copy.begin(), copy.end()));
	unsigned int		min = *(std::min_element(copy.begin(), copy.end()));
	unsigned int 		ret = max - min;

	check_errorMinSize(this->_numbers.size());
	std::sort(copy.begin(), copy.end());
	return (ret);
}
