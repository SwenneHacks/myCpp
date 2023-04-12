#include <iostream>
#include <map>
#include <vector>
#include <list>

template <typename T >
T max (T const &x , T const &y){
    return((x >= y) ? x : y);
}

int main(){

    int a = 21;
    int b = 42;

    std::cout << "Max of " << a << " and " << b << " is ";
    std::cout << max<int>(a,b) << std::endl;

    float c = -1.7f;
    float d = 4.2f;

    std::cout << "Max of " << c << " and " << d << " is ";
    std::cout << max<float>(c,d) << std::endl;

    char e = 'y';
    char f = 'Y';

    std::cout << "Max of " << e << " and " << f << " is ";
    std::cout << max<char>(e,f) << std::endl;
    std::cout << "Max of " << e + f << " and " << f + f << " is ";
    std::cout << max(e + f,f + f) << std::endl;

    return (0);
}