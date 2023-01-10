/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   iter.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: swofferh <swofferh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/31 19:15:13 by swofferh      #+#    #+#                 */
/*   Updated: 2020/11/07 16:10:18 by swofferh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

template<typename T>
void iter(T *array, size_t len, void (*f)(T const &)){
    size_t i = 0;
    while(i < len){
        f(array[i]);
        i++;
    }
}

template<typename T>
void print(T value){
    std::cout << value << std::endl;
}

int main(){
    std::cout << "Testing with strings:" << std::endl;
    std::string array[3] = {"Hello", "World","!!!"};
    iter(array, 3, print);
    std::cout << "Now trying with ints:" << std::endl;
    int ints[4] = {42, 41, 40, 0};
    iter(ints, 4, print);
    std::cout << "Now testing with floats:" << std::endl;
    float floats[5] = {1.0f, 2.2f, 3.33f, 0.01f, 1.111f};
    iter(floats, 5, print);
    return 0;
}
