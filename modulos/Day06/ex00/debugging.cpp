#include <iostream>
#include <string>
#include <limits>

/* OLD VERSION 
void startConverter(const std::string& input) {
    try {
        if (input.find('.') == std::string::npos) {
            int value = std::stoi(input);
            std::cout << "Input type: int\n";
            std::cout << "Char: " << static_cast<char>(value) << '\n';
            std::cout << "Float: " << static_cast<float>(value) << '\n';
            std::cout << "Double: " << static_cast<double>(value) << '\n';
        } else {
            double value = std::stod(input);
            std::cout << "Input type: double\n";
            std::cout << "Char: " << static_cast<char>(value) << '\n';
            std::cout << "Int: " << static_cast<int>(value) << '\n';
            std::cout << "Float: " << static_cast<float>(value) << '\n';
        }
    } catch (const std::exception& e) {
        std::cout << "Error: Invalid input\n";
    }
}*/

void startConverter(const std::string& input) 
{
    try 
    {
        if (input.find('.') == std::string::npos) 
        {
            long long value = std::stoll(input);
            std::cout << "Type: int\n";
            std::cout << "Char: ";
            if (value >= std::numeric_limits<char>::min() && value <= std::numeric_limits<char>::max())
                std::cout << static_cast<char>(value) << '\n';
            else
                std::cout << "non displayable\n";
            std::cout << "Float: " << static_cast<float>(value) << "f\n";
            std::cout << "Double: " << static_cast<double>(value) << '\n';
        }
        else 
        {
            double value = std::stod(input);
            std::cout << "Type: double\n";
            std::cout << "Char: ";
            if (value >= std::numeric_limits<char>::min() && value <= std::numeric_limits<char>::max())
                std::cout << static_cast<char>(value) << '\n'; 
            else
                std::cout << "impossible\n";
            std::cout << "Int: ";
            if (value >= std::numeric_limits<int>::min() && value <= std::numeric_limits<int>::max())
                std::cout << static_cast<int>(value) << '\n';
            else
                std::cout << "impossible\n";
            std::cout << "Float: " << static_cast<float>(value) << "f\n";
        }
    } 
    catch (const std::exception& e) { std::cout << "Error: Invalid input\n"; }
}

int main(int argc, char* argv[]) 
{
    if (argc != 2){
        std::cout << "Expected input: ./program <value>" << std::endl;
        return 1;
    }
    std::string input = argv[1];
    startConverter(input);
    return 0;
}