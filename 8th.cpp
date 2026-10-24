
#include <iostream>
#include <string>
using namespace std;

int main() {
    double numerator, denominator;

    cout << "Enter numerator: ";
    if (!(cin >> numerator)) {
        cout << "Error: Please enter a valid number.\n";
        return 1;
    }

    cout << "Enter denominator: ";
    if (!(cin >> denominator)) {
        cout << "Error: Please enter a valid number.\n";
        return 1;
    }

    try {
        if (denominator == 0) {
            throw string("Division by zero is not allowed.");
        }

        cout << "Result = " << numerator / denominator << '\n';

    } catch (string error) {
        cout << "Exception caught: " << error << '\n';
    }

    cout << "Program execution completed.\n";

    return 0;
}
