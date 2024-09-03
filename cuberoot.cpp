
#include <iostream>
#include <cmath> // for pow() function
using namespace std;

double cubeRoot(double num) {
    if (num < 0) {
        return -pow(-num, 1.0/3.0); // Cube root of a negative number
    } else if (num > 0) {
        return pow(num, 1.0/3.0); // Cube root of a positive number
    } else {
        return 0; // Cube root of zero
    }
}

int main() {
    double number;
    cout << "Enter a number: ";
    cin >> number;

    double result = cubeRoot(number);
    cout << "The cube root of " << number << " is " << result << endl;

    return 0;
}

