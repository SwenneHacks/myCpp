/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieHorde.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: swofferh <swofferh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/14 19:50:36 by swofferh      #+#    #+#                 */
/*   Updated: 2020/10/17 22:38:09 by swofferh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int N) : _counter(N) {
    std::string italians[] = 
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
    ZombieHorde::_horde = new Zombie[N];
    for (int i = 0; i < N; i++){
        std::srand(std::time(NULL));
        ZombieHorde::_horde[i].setName(italians[std::rand() % 5]);
        ZombieHorde::_horde[i].setType(types[std::rand() % 7]);
    }
}

void ZombieHorde::announce(){
    for (int i = 0; i < ZombieHorde::_counter; i++){
        ZombieHorde::_horde[i].announce();
    }
}

ZombieHorde::~ZombieHorde(){
    delete [] _horde;
}