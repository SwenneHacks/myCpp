#ifndef ARRAY_HPP
# define ARRAY_HPP
#include <string>
#include <iostream>

template<typename T>
class	Array
{

	private:
		T				*_array;
		unsigned int 	_size;

	public:
		//construction that creates an emppty array
		Array() : _array(NULL), _size(0){}
		//construction that creates 'new' allocated array
		Array(unsigned int n) : _array(new T[n]()), _size(n){}
		//construction by copy
		Array(Array const &copy) : _size(0){
			*this = copy;
		}
		//destructor with 'delete'
		~Array(){
			if (this->_size)
				delete[] this->_array;
		}
		//elements accessible through:
		Array& operator=(Array const &ref){
			if (this->_size)
				delete[] this-> _array;
			this->_size = ref._size;
			if (!this->_size)
				return (*this);
			this->_array = new T[this->_size];
			for (unsigned int i = 0; i< ref._size; i++)
				this->_array[i] = ref._array[i];
			return(*this);
		}
		//elements out of limits:
		T& operator[](unsigned int const &i) const{
		if(!this->_array || i < 0 || i >= this->_size)
			throw std::exception();
		return (this->_array[i]);
		}
		//member function
		unsigned int size(void) const{
			return(this->_size);
		}
};

#endif
