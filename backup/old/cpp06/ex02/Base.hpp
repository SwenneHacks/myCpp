#ifndef BASE_HPP
# define BASE_HPP

class	Base
{
public:
	Base();
	Base(const Base& ref);
	Base& operator=(const Base& ref);
	~Base();
};

#endif
