#ifndef VICTIM_HPP
# define VICTIM_HPP

class	Victim
{
public:
	Victim();
	Victim(const Victim& ref);
	Victim& operator=(const Victim& ref);
	~Victim();
};

#endif
