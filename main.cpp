#include <iostream>

using namespace std;

int main() {
    int number;

    cout << "Enter a six-digit number: ";
    cin >> number;

    if (number >= 100000 && number <= 999999) {
        int sum_first_half = 0;
        int sum_second_half = 0;


        for (int i = 0; i < 3; ++i) {
            sum_first_half += number % 10;
            number /= 10;
        }
        for (int i = 0; i < 3; ++i) {
            sum_second_half += number % 10;
            number /= 10;
        }

        if (sum_first_half == sum_second_half) {
            cout << "This number is lucky!" << endl;
        }
        else {
            cout << "This number is unlucky." << endl;
        }
    }
    else {
        cout << "Error! Enter a six-digit number." << endl;
    }

    return 0;
}