/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ex01.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: swofferh <swofferh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/13 20:23:46 by swofferh      #+#    #+#                 */
/*   Updated: 2020/10/13 20:25:56 by swofferh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void memoryLeak(){
    std::string*    panther = new std::string("String Panther");
    
    std::cout << *panther << std::endl;
    delete panther;
}

int main(void){
    memoryLeak();
    return 0;
}
