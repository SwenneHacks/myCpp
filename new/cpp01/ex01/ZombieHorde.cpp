
#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name){
    std::string types[] = {
        "nerd eater"
        "shooter"
        "speedo"
        "jumpy"
        "lurker"
        "brainiac"
        "creeper"
    };
    Zombie *horde;
    for(int i = 0; i < N; i++){
        horde[i].setName(name);
        //horde[i].setType(types[std::rand() % 7]);
    }
    return (new Zombie[N]);
}
