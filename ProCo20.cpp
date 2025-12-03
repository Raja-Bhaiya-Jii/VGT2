#include <iostream>
using namespace std;

// Recursive function to calculate power
double power(double base, int exponent) {
    if (exponent == 0)
        return 1;
    else if (exponent > 0)
        return base * power(base, exponent - 1);
    else // for negative exponent
        return 1 / power(base, -exponent);
}

int main() {
    double base;
    int exponent;

    cout << "Enter base: ";
    cin >> base;
    cout << "Enter exponent: ";
    cin >> exponent;

    double result = power(base, exponent);
    cout << base << " raised to the power " << exponent << " is " << result << endl;

    return 0;
}
