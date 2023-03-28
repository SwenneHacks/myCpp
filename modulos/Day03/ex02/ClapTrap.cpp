/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: swofferh <swofferh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/24 14:36:20 by swofferh      #+#    #+#                 */
/*   Updated: 2023/03/28 19:18:13 by swofferh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"


ClapTrap::ClapTrap(void) : _name("ClapTrap"), _health(10), _energy(10), _damage(0) 
{ 
    std::cout << CYAN << "default ClapTrap has been constructed" << std::endl;
    std::cout << "Health and Energy initialized with 10" << END;
    return ;
}

ClapTrap::ClapTrap(std::string Name) : _name(Name), _health(10), _energy(10), _damage(0) 
{   
    std::cout << Name << " is ready to fight [ClapTrap]" << std::endl;
    return ;
}

ClapTrap::ClapTrap(const ClapTrap& copy)
{   
    *this = copy;
    return ;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap& target){   
    this->_name = target._name;
	this->_health = target._health;
	this->_energy = target._energy;
	this->_damage = target._damage;
    return (*this);
}

void 	ClapTrap::attack(const std::string& target) 
{ 
    std::cout << BLUE << this->_name << " ATTACK " << "- ClapTrap" << END;

    if (this->_energy <= 0)
    {
        std::cout << RED << "No energy points left for " << this->_name << END;
        return ;
	}
    else {
        //ClapTrap Target(target);
        //CurrentTarget = target;
        //Target.takeDamage(10);
        this->_energy -= 1;
        if (this->_energy == 1)
            std::cout << RED << "Beware! Using last bit of energy" << END;
        std::cout << this->_name << " now attacking " << target << std::endl;
        std::cout << target << " got attacked badly" << std::endl;
    }
}

void 	ClapTrap::takeDamage(unsigned int amount) 
{
    std::cout << BLUE << this->_name <<" DAMAGE " << "- ClapTrap" << END;

    if (amount == 0){
        std::cout << "No Damage was taken." << std::endl;
        return ;
    }
    else {
        this->_damage += amount;
        std::cout << this->_name << " has taken " << this->_damage << " damage" << std::endl;
        this->_health -= amount;
        if (this->_health <= 0)
        {
            std::cout << RED << "Oh no, " << this->_name << " has been killed" << END;
            this->_energy = 0;
        }
        else
            std::cout << "And health is now " << this->_health << " left" << std::endl;
    }
}

void 	ClapTrap::beRepaired(unsigned int amount) 
{ 
    std::cout << BLUE << this->_name << " REPARE " << " - ClapTrap " << END;
    if (this->_health <= 0)
    {
        std::cout << RED << "Too late, " << this->_name << " is already dead." << END;
        this->_energy = 0;
    }
    else {
        this->_health += amount;
        this->_energy -= 1;
        std::cout << this->_name << " now healing itself" << std::endl;
        std::cout << "Health now repaired to " << this->_health << std::endl;
    }
}

ClapTrap::~ClapTrap() 
{ 
    std::cout << "Destructor called for " << this->_name << std::endl;
    return ;
}
