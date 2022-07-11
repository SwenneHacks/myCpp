/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Human.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: swofferh <swofferh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/20 12:41:09 by swofferh      #+#    #+#                 */
/*   Updated: 2020/10/20 14:07:38 by swofferh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include "Human.hpp"

Human::Human() {}

std::string Human::identify() const {
    return (this->_brain.identify());
}

const Brain &Human::getBrain() const{
    return (this->_brain);
}

Human::~Human(){}