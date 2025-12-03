#include <iostream>
using namespace std;

// Recursive function to find sum of first n natural numbers
int sumNatural(int n) {
    if (n == 1)
        return 1;
    else
        return n + sumNatural(n - 1);
}

int main() {
    int n = 10;
    int result = sumNatural(n);
    cout << "Sum of first " << n << " natural numbers is: " << result << endl;
    return 0;
}
