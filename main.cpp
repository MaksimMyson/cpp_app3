#include <iostream>

int main() {
    setlocale(LC_ALL, "Ukrainian");
    int number;

    std::cout << "Введіть чотиризначне число: ";
    std::cin >> number;

    if (number >= 1000 && number <= 9999) {
        
        int thousands = number / 1000;
        int hundreds = (number / 100) % 10;
        int tens = (number / 10) % 10;
        int ones = number % 10;

        
        int new_number = (hundreds * 1000) + (thousands * 100) + (ones * 10) + tens;

        std::cout << "Змінене число: " << new_number << std::endl;
    }
    else {
        std::cout << "Помилка! Введіть чотиризначне число." << std::endl;
    }

    return 0;
}