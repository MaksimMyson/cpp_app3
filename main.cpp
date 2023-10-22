#include <iostream>

int main() {
    double num1, num2;

    std::cout << "Enter number: ";
    std::cin >> num1;

    std::cout << "Enter second number: ";
    std::cin >> num2;

    if (num1 < num2) {
        std::cout << "Smaller number: " << num1 << std::endl;
    }
    else {
        std::cout << "Smaller number: " << num2 << std::endl;
    }

    return 0;
}