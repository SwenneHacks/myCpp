#ifndef PEON_HPP
# define PEON_HPP

class	Peon
{
public:
	Peon();
	Peon(const Peon& ref);
	Peon& operator=(const Peon& ref);
	~Peon();
};

#endif
