#ifndef SORCERER_HPP
# define SORCERER_HPP

class	Sorcerer
{
public:
	Sorcerer();
	Sorcerer(const Sorcerer& ref);
	Sorcerer& operator=(const Sorcerer& ref);
	~Sorcerer();
};

#endif
