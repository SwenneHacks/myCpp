#include "Zombie.hpp"


void        randomChump(std::string name) {
    static std:: string type[5] = {
        "<brainless>",
        "<Homers>",
        "<Hawkins>",
        "<Ninjas>",
        "<Slow>",
    };
    Zombie random = Zombie(Zombie::name[rand() % 5]);
    random.announce();
}