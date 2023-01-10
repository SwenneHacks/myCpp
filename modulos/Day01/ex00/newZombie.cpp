
#include "Zombie.hpp"

Zombie*     newZombie(std::string name){
    // Zombie(name).announce();
    return (new Zombie(name));
}
