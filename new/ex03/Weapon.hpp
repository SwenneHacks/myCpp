
#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <string>

# define RESET			"\033[0m"
# define RED			"\033[31m"
# define BLUE			"\033[34m"	
# define GREEN			"\033[32m"	

class Weapon {

private:
	std::string 		_type;
	std::string&		_typeRef;

public:
	const std::string&	getType() const;
	void				setType(const std::string& type);

	Weapon(const std::string& type);
	~Weapon();
};

#endif
