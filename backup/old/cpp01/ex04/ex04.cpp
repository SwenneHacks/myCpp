/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ex04.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: sofferha <sofferha@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/19 23:27:26 by sofferha      #+#    #+#                 */
/*   Updated: 2020/10/20 12:32:10 by swofferh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main()
{
    std::string brain = " HI THIS IS BRAIN";
    std::string *brain_ptr = &brain;
    std:: string &brain_ref = brain;
    std::cout << "[Str]: " << brain << std::endl;
    std::cout << "[Ptr]: " << brain_ptr << " " << *brain_ptr << std::endl;
    std::cout << "[Ref]: " << brain_ref << std::endl;
    return (0); 
}