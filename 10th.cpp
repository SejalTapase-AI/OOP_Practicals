#include <iostream>
using namespace std;

// Class Template
template <typename T>
class Calculator {
private:
    T num1, num2;

public:
    Calculator(T a, T b) {
        num1 = a;
        num2 = b;
    }

    T add() {
        return num1 + num2;
    }

    T multiply() {
        return num1 * num2;
    }
};

// Function Template
template <typename T>
T findMaximum(T a, T b) {
    if (a > b)
        return a;
    else
        return b;
}

int main() {
    int a, b;
    double x, y;

    // Test with integers
    cout << "Enter two integers: ";
    cin >> a >> b;

    Calculator<int> intCalc(a, b);

    cout << "\nInteger Operations" << endl;
    cout << "Sum = " << intCalc.add() << endl;
    cout << "Product = " << intCalc.multiply() << endl;
    cout << "Maximum = " << findMaximum(a, b) << endl;

    // Test with decimal numbers
    cout << "\nEnter two decimal numbers: ";
    cin >> x >> y;

    Calculator<double> doubleCalc(x, y);

    cout << "\nDecimal Operations" << endl;
    cout << "Sum = " << doubleCalc.add() << endl;
    cout << "Product = " << doubleCalc.multiply() << endl;
    cout << "Maximum = " << findMaximum(x, y) << endl;

    return 0;
}
