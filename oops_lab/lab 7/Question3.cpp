#include <iostream>
#include <cmath>
using namespace std;
double area(double base, double height) {
    return 0.5 * base * height;
}
double area(double side) {
    return (sqrt(3) / 4) * side * side;
}
double area(double equalSide, double base, bool isIsosceles) {
    
    double height = sqrt(equalSide * equalSide - (base * base) / 4.0);
    return 0.5 * base * height;
}

int main() {
    double base, height, side, equalSide;

    cout << "Input base and height for a right triangle: ";
    cin >> base >> height;
    cout << "Calculated area (right triangle): " << area(base, height) << endl;
    cout << "Input side length of an equilateral triangle: ";
    cin >> side;
    cout << "Calculated area (equilateral triangle): " << area(side) << endl;
    cout << "Input equal side and base for an isosceles triangle: ";
    cin >> equalSide >> base;
    cout << "Calculated area (isosceles triangle): " << area(equalSide, base, true) << endl;
    return 0;
}
