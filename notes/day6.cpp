
#include <iostream>
#include <limits>
#include <cfloat> // macros for floating point numbers

void printLimits(){
        std::cout << "Int Limits: " << std::endl
        << "    Min " << std::numeric_limits<int>::min() << std::endl
        << "    Max " << std::numeric_limits<int>::max() << std::endl;
        std::cout << "Unsigned Int Limits: " << std::endl
        << "    Min " << std::numeric_limits<unsigned int>::min() << std::endl
        << "    Max " << std::numeric_limits<unsigned int>::max() << std::endl;
        std::cout << "Unsigned Long Int Limits: " << std::endl
        << "    Min " << std::numeric_limits<long int>::min() << std::endl
        << "    Max " << std::numeric_limits<long int>::max() << std::endl;
        std::cout << "Unsigned Long Int Limits: " << std::endl
        << "    Min " << std::numeric_limits<unsigned long int>::min() << std::endl
        << "    Max " << std::numeric_limits<unsigned long int>::max() << std::endl;
        std::cout << "Float Limits: " << std::endl
        << "    Min " << FLT_MIN << std::endl
        << "    Max " << FLT_MAX << std::endl;
        std::cout << "Double Limits: " << std::endl
        << "    Min " << DBL_MIN << std::endl
        << "    Max " << DBL_MAX << std::endl;
}

class MathUtils {
public:
    static int add(int a, int b) {
        return a + b;
    }

    static int multiply(int a, int b) {
        return a * b;
    }
};

int main() {
    int x = 5;
    int y = 3;

    int sum = MathUtils::add(x, y);
    int product = MathUtils::multiply(x, y);

    std::cout << "Sum: " << sum << std::endl;
    std::cout << "Product: " << product << std::endl;

    printLimits();
    return 0;
}

