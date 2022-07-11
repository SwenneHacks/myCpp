/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   iter.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: swofferh <swofferh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/31 19:15:13 by swofferh      #+#    #+#                 */
/*   Updated: 2020/11/04 21:32:29 by swofferh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

template<typename T>
void iter(T *arr, size_t len, void (*f)(T const &)){
    size_t i = 0;
    while(i < len){
        f(arr[i]);
        i++;
    }
}

template<typename T>
void print(T value){
    std::cout << value << std::endl;
}

// class Awesome
// {
//     public:
//     Awesome( void ) : _n( 42 ) { return; }
//     int get( void ) const { return this->_n; }
//     private:
//     int _n;
// };

// std::ostream & operator<<( std::ostream & value, Awesome const & rhs ) { value << rhs.get(); return value; }

// int test(void) {
// std::cout << "Now testing with classes (with declared elements):" << std::endl;
// int tab[] = { 0, 1, 2, 3, 4 };
// iter( tab, 5, print );
// std::cout << "Now testing with classes (without assigned values):" << std::endl;
// Awesome tab2[5];
// iter( tab2, 5, print );
// }

int main(){
    std::cout << "Testing with strings:" << std::endl;
    std::string arr[3] = {"Hello", "World","!!!"};
    iter(arr, 3, print);
    std::cout << "Now trying with ints:" << std::endl;
    int ints[4] = {42, 41, 40, 0};
    iter(ints, 4, print);
    std::cout << "Now testing with floats:" << std::endl;
    float floats[5] = {1.0f, 2.2f, 3.33f, 0.01f, 1.111f};
    iter(floats, 5, print);
    //test();
    return 0;
}
