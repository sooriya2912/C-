#include <iostream>
#include <climits> // For INT_MAX
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int smallest = INT_MAX;
    int i = 0;

    while (i < n) {
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
        i++;
    }

    cout << "The smallest element is: " << smallest << endl;

    return 0;
}

