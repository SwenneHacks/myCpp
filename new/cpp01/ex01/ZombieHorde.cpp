
#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name){
    std::string names[] = 
    {
        "Mario"
        "Carlo"
        "Luigi"
        "Julio"
        "Pablo"
    };
    std::string types[] = 
    {
        "nerd eater"
        "shooter"
        "speedo"
        "jumpy"
        "lurker"
        "brainiac"
        "creeper"
    };
    horde = new Zombie[N];
    for (int i = 0; i < N; i++){
        std::srand(std::time(NULL));
        horde[i].setName(names[std::rand() % 5]);
        horde[i].setType(types[std::rand() % 7]);
    }
}

void Zombie::announce(){
    for (int i = 0; i < counter; i++){
        horde[i].announce();
    }
}
