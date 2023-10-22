#include <iostream>

int main() {
    int a, b;

    std::cout << "Enter number: ";
    std::cin >> a;

    std::cout << "Enter second number: ";
    std::cin >> b;

    if (a == b) {
        std::cout << "Enter a even numbers." << std::endl;
    }
    else {
        std::cout << "Entered numbers are not equal." << std::endl;

        if (a < b) {
            std::cout << "Numbers in ascending order: " << a << ", " << b << std::endl;
        }
        else {
            std::cout << "Numbers in ascending order: " << b << ", " << a << std::endl;
        }
    }

    return 0;
}