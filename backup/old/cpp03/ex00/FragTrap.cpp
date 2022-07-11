#include "FragTrap.hpp"

#include <array>
#include <string>
#include <iostream>

FragTrap::FragTrap(void) : 	_hit_pts(100), _max_hit_pts(100), _energy_pts(100),
							_max_energy_pts(100), _level(1), _name("FRAGTRAP"),
						    _melee_attack_dmg(30), _ranged_attack_dmg(20),
						    _armor_dmg_reduction(5)
{
    std::cout << "[" << this->_name << "]";
	std::cout << " -- If I had veins, they'd be popping out right now!" << std::endl;
	return ;
}

FragTrap::FragTrap(std::string name) : _hit_pts(100), _max_hit_pts(100), _energy_pts(100),
									   _max_energy_pts(100), _level(1), _name(name),
						    		   _melee_attack_dmg(30), _ranged_attack_dmg(20),
						               _armor_dmg_reduction(5)
{
    std::cout << "[" << this->_name << "]";
	std::cout << " -- Tell me I'm the prettiest!" << std::endl;
	return ;
}

FragTrap::FragTrap(FragTrap const &src)
{
	std::cout << "[" << this->_name << "]";
	std::cout << " -- I'm pulling tricks outta my hat!" << std::endl;
	*this = src;
	return ;
}

FragTrap&	FragTrap::operator=(const FragTrap &ref)
{
    std::cout << "[" << this->_name << "]";
	std::cout << " -- It's about to get magical!" << std::endl;
	if (this != &rhs)
	{
		this->_hit_pts = rhs._hit_pts;
		this->_max_hit_pts = rhs._max_hit_pts;
		this->_energy_pts = rhs._energy_pts;
		this->_max_energy_pts = rhs._max_energy_pts;
		this->_level = rhs._level;
		this->_name = rhs._name;
		this->_melee_attack_dmg = rhs._melee_attack_dmg;
		this->_ranged_attack_dmg = rhs._ranged_attack_dmg;
		this->_armor_dmg_reduction = rhs._armor_dmg_reduction;
	}
	return (*this);
}

FragTrap::~FragTrap()
{
    std::cout << "[" << this->_name << "]";
	std::cout << " -- I can't feel my fingers! Gah! I don't have any fingers. I'm only level " << this->_level << std::endl;
	return ;
}

void		FragTrap::rangeAttack(std::string const & target)
{
	std::cout << " \nThat guy looks an awful lot like a " << target << "!"<< std::endl;
	std::cout << "[" << this->_name << "]" << " attacks " << target << " at range" << ", causing " << this->_ranged_attack_dmg << " points of damage" << std::endl;
	return ;
}


void		FragTrap::meleeAttack(std::string const & target)
{
	std::cout << " \nRUN FOR YOUR LIIIIIVES IT'S A " << target << "!"<< std::endl;
	std::cout << "[" << this->_name << "]" << " attacks " << target << " with melee " << ", causing " << this->_melee_attack_dmg << " points of damage" << std::endl;
	return ;
}


void		FragTrap::takeDamage(unsigned int amount)
{
	if (amount < this->_armor_dmg_reduction)
		std::cout << "[" << this->_name << "]" << " -- Really?! Is that all you got? That didn't even hurt me!" << " Got " << this->_hit_pts << " hp left" <<std::endl;
	else
	{
		this->_hit_pts -= (amount - this->_armor_dmg_reduction);
		if (this->_hit_pts > 0)
			std::cout << "[" << this->_name << "]" << " -- Extra ouch! That hurts!" << " Got " << this->_hit_pts << " hp left" <<std::endl;
		else
		{
			this->_hit_pts = 0;
			std::cout << "[" << this->_name << "]" << " -- Huh, robot's don't do that...  I feel exploded " << " Got " << this->_hit_pts << " hp left" <<std::endl;
		}
	}
	return ;
}


void		FragTrap::beRepaired(unsigned int amount)
{
	if (this->_hit_pts == this->_max_hit_pts)
		std::cout << "[" << this->_name << "]" << " -- No thanks already got everything I need!" <<std::endl;
	else
	{
		this->_hit_pts += amount;
		if (this->_hit_pts > this->_max_hit_pts)
		{
			this->_hit_pts = this->_max_hit_pts;
			std::cout << "[" << this->_name << "]" << " -- Sweet life juice!" << " Got " << this->_hit_pts << " hp right now" <<std::endl;
		}
		else
			std::cout << "[" << this->_name << "]" << " -- Health over here!" << " Got " << this->_hit_pts << " hp right now" <<std::endl;
	}
	return ;
}


void		FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	this->_energy_pts -= 25;
	if (this->_energy_pts >= 0 && this->_energy_pts <= this->_max_energy_pts)
	{
		std::array<std::string, 5> funny_attacks = {
		"You're listening to 'Short-Range Damage Radio', spoiler bullets comming your way!",
		"You really can double your fun! I will demonstrate with two rockets!",
		"I will cripple you with mean words, because everbody knows words do hurt!",
		"I cast magic missile and you can call me Gundalf! Avada kedavra!",
		"How many ways can I say... THROWING GRENADE?! Doesn't matter I brought you a present: EXPLOSIONS!" };

		std::cout << funny_attacks[rand() % 5] << std::endl;
		std::cout << "[" << this->_name << "]" << " -- That hit " << target << " hard! Causing 60 hp damage" << std::endl;
		std::cout << "[" << this->_name << "]" << " -- You got " << this->_energy_pts << " energy points left" << std::endl;
	}
	else
	{
		this->_energy_pts += 25;
		std::cout << "[" << this->_name << "]" << " -- I have many regrets! To weak to do this... Got " << this->_energy_pts << " energy points left" << std::endl;
	}
	return ;
}
