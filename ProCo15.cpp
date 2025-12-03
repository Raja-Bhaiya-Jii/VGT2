#include <iostream>
using namespace std;

// Function to reverse a number
int reverseNumber(int num) {
    int reversed = 0;
    while(num != 0) {
        int remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }
    return reversed;
}

int main() {
    int number;
    cout << "Enter an integer: ";
    cin >> number;

    int reversed = reverseNumber(number);

    cout << "Reversed Number = " << reversed << endl;
    return 0;
}
