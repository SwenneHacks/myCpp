#ifndef SERIALIZATION_HPP
# define SERIALIZATION_HPP

class	Serialization
{
public:
	Serialization();
	Serialization(const Serialization& ref);
	Serialization& operator=(const Serialization& ref);
	~Serialization();
};

#endif
