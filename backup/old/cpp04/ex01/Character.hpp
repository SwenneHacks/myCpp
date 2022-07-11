#ifndef CHARACTER_HPP
# define CHARACTER_HPP

class	Character
{
public:
	Character();
	Character(const Character& ref);
	Character& operator=(const Character& ref);
	~Character();
};

#endif
