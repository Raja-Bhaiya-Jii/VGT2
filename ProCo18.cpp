#include <iostream>
using namespace std;

// Function to calculate square using call by value
int squareByValue(int num) {
    return num * num;
}

// Function to calculate square using call by reference
void squareByReference(int &num) {
    num = num * num;
}

int main() {
    int number;

    cout << "Enter a number: ";
    cin >> number;

    // Using call by value
    int squareValue = squareByValue(number);
    cout << "Square (Call by Value): " << squareValue << endl;

    // Using call by reference
    squareByReference(number);
    cout << "Square (Call by Reference): " << number << endl;

    return 0;
}
