#include "ScavTrap.hpp"
#include <iostream>
#include <string>
#include <array>

ScavTrap::ScavTrap(void) : 	_hit_pts(100), _max_hit_pts(100), _energy_pts(50),
							_max_energy_pts(50), _level(1), _name("SCAVTRAP"),
						    _melee_attack_dmg(20), _ranged_attack_dmg(15),
						    _armor_dmg_reduction(3)
{
	std::cout << "[" << this->_name << "]";
	std::cout << " -- Let's get this party started!" << std::endl;
	return ;
}

ScavTrap::ScavTrap(std::string name) : _hit_pts(100), _max_hit_pts(100), _energy_pts(50),
									   _max_energy_pts(50), _level(1), _name(name),
						    		   _melee_attack_dmg(20), _ranged_attack_dmg(15),
						               _armor_dmg_reduction(3)
{
	std::cout << "[" << this->_name << "]";
	std::cout << " -- Look out everybody! Things are about to get awesome!" << std::endl;
	return ;
}

ScavTrap::ScavTrap(ScavTrap const &src)
{
	std::cout << "[" << this->_name << "]";
	std::cout << " -- I'm pulling tricks outta my hat!" << std::endl;
	*this = src;
	return ;
}

ScavTrap &		ScavTrap::operator=(ScavTrap const &rhs)
{
	std::cout << "[" << this->_name << "]";
	std::cout << " -- You can't just program this level of excitement!" << std::endl;
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

ScavTrap::~ScavTrap(void)
{
	std::cout << "[" << this->_name << "]";
	std::cout << " -- Why did they build me out of galvanized flesh?!. I'm only level " << this->_level << std::endl;
	return ;
}


void		ScavTrap::rangeAttack(std::string const & target)
{
	std::cout << " \nOh, " << target << " is big... REALLY big!"<< std::endl;
	std::cout << "[" << this->_name << "]" << " attacks " << target << " at range" << ", causing " << this->_ranged_attack_dmg << " points of damage" << std::endl;
	return ;
}


void		ScavTrap::meleeAttack(std::string const & target)
{
	std::cout << " \nScary " << target << " over there!"<< std::endl;
	std::cout << "[" << this->_name << "]" << " attacks " << target << " with melee " << ", causing " << this->_melee_attack_dmg << " points of damage" << std::endl;
	return ;
}


void		ScavTrap::takeDamage(unsigned int amount)
{
	if (amount < this->_armor_dmg_reduction)
		std::cout << "[" << this->_name << "]" << " -- My robotic flesh didn't feel anything of that!!" << " Got " << this->_hit_pts << " hp left" <<std::endl;
	else
	{
		this->_hit_pts -= (amount - this->_armor_dmg_reduction);
		if (this->_hit_pts > 0)
			std::cout << "[" << this->_name << "]" << " -- Woah! Oh! Jeez!" << " Got " << this->_hit_pts << " hp left" <<std::endl;
		else
		{
			this->_hit_pts = 0;
			std::cout << "[" << this->_name << "]" << " -- Oh, quit falling to pieces..  I feel so weak " << " Got " << this->_hit_pts << " hp left" <<std::endl;
		}
	}
	return ;
}


void		ScavTrap::beRepaired(unsigned int amount)
{
	if (this->_hit_pts == this->_max_hit_pts)
		std::cout << "[" << this->_name << "]" << " -- No thanks all juiced up and ready to go!" <<std::endl;
	else
	{
		this->_hit_pts += amount;
		if (this->_hit_pts > this->_max_hit_pts)
		{
			this->_hit_pts = this->_max_hit_pts;
			std::cout << "[" << this->_name << "]" << " -- Health! Eww, what flavor is red?" << " Got " << this->_hit_pts << " hp right now" <<std::endl;
		}
		else
			std::cout << "[" << this->_name << "]" << " -- I found health!" << " Got " << this->_hit_pts << " hp right now" <<std::endl;
	}
	return ;
}


void		ScavTrap::challengeNewcomer(std::string const & target)
{
	if (this->_max_energy_pts >= this->_energy_pts)
	{
		std::array<std::string, 5> challenges = {
		"I challenge you to a dance battle, but beware you won't have a chance against my sick moves!",
		"I challenge you to a karaoke sing off, stay sharp if you snooze you lose!",
		"I challenge you to oilpong, your parts will not be able to handle all that oil!",
		"I challenge you to dodge all my bullets from my bullets tornado, you probably don't and die",
		"I challenge you to outrun my bullets, so you better start running my friend!" };

		std::cout << challenges[rand() % 5] << std::endl;
		std::cout << "[" << this->_name << "]" << " -- That hit " << target << " hard! Causing 33 hp damage" << std::endl;
	}
	return ;
}
