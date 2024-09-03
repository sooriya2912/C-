#include <iostream>
#include <cmath> // for sqrt function

using namespace std;

int main() {
    double num, result;

    cout << "Enter a number: ";
    cin >> num;

    if (num < 0) {
        cout << "Square root of a negative number is not defined in real numbers." << endl;
    } else if (num == 0) {
        cout << "Square root of 0 is 0." << endl;
    } else {
        result = sqrt(num); // using sqrt function from cmath
        cout << "Square root of " << num << " is " << result << endl;
    }

    return 0;
}

