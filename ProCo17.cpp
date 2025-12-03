#include <iostream>
using namespace std;

// Function to calculate area of circle
float area(float radius) {
    return 3.14159 * radius * radius;
}

// Function to calculate area of rectangle
float area(float length, float breadth) {
    return length * breadth;
}

// Function to calculate area of triangle
float area(float base, float height, int dummy) {
    return 0.5 * base * height;
}

int main() {
    float r, l, b, base, height;

    cout << "Enter radius of circle: ";
    cin >> r;

    cout << "Enter length and breadth of rectangle: ";
    cin >> l >> b;

    cout << "Enter base and height of triangle: ";
    cin >> base >> height;

    cout << "Area of Circle: " << area(r) << endl;
    cout << "Area of Rectangle: " << area(l, b) << endl;
    cout << "Area of Triangle: " << area(base, height, 0) << endl;

    return 0;
}
