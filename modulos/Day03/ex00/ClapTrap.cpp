#include "ClapTrap.hpp"



ClapTrap::ClapTrap(std::string Name) : _name(Name), _hits(10), _energy(10), _damage(0) {   
    std::cout << Name << "is ready to fight." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& copy){   
    *this = copy;
}

ClapTrap::~ClapTrap() {   
    std::cout << "Destructor called for" << *this << std::endl; 
}

/*_______________________ OPERATORS _________________________*/

ClapTrap&	ClapTrap::operator=(const ClapTrap& target){   
    this->_name = target._name;
	this->_hits = target._hits;
	this->_energy = target._energy;
	this->_damage = target._damage;
    return(*this);
}

std::ostream &operator<<(std::ostream &out, ClapTrap const &in){
	out << in;
	return (out);
}


/*_______________________ MEMBER FUNCTIONS _______________________*/

void 	ClapTrap::attack(const std::string& target) { std::cout << RED << "[ATTACKING]" << " ClapTrap " << END;   
    this->_name = target;
    this->_damage--;
    this->_energy--;
    std::cout << target << "got attacked. Damage is now: " << this->_damage << std::endl;
}

void 	ClapTrap::takeDamage(unsigned int amount){ std::cout << RED << "[DAMAGING]" << " ClapTrap " << END;
    if (this->_hits <= 0){
        this->_energy--; // as it should.
        std::cout << " why hit a dead body?! Don't waste your energy." << std::endl;
        return ;
    }
    if (this->_hits - amount <= 0)
    {
        std::cout << this->_name << " has taken " << amount << " damage. " << std::endl;
        std::cout << "Oh no, " << this->_name << "has been killed." << std::endl;
        this->_hits = 0;
    }
    else {
        this->_hits -= amount;
        std::cout << " has taken " << amount << " damage.";
        std::cout << " and has now " << this->_hits << " hit points left." << std::endl;
    }
}

void 	ClapTrap::beRepaired(unsigned int amount) { std::cout << RED << "[REPAIRING]" << " ClapTrap " << END;
    this->_damage -= amount;
    this->_energy--;
    std::cout << this->_name << "got HEALED. Damage is now: " << this->_damage << std::endl;
}
