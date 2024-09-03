#include <iostream>
using namespace std;

bool isPerfect(int n) {
    int sum = 1; // 1 is a proper divisor for any number
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            if (i * i != n)
                sum += i + n / i;
            else
                sum += i;
        }
    }
    return (sum == n && n != 1);
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isPerfect(num))
        cout << num << " is a perfect number." << endl;
    else
        cout << num << " is not a perfect number." << endl;

    return 0;
}

