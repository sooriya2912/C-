#include <iostream>
using namespace std;

int main() {
    float length, breadth, area,height,volume;

    // Input length and breadth
    cout << "Enter the length of the rectangle: ";
    cin >> length;
    cout << "Enter the breadth of the rectangle: ";
    cin >> breadth;
    cout<<"enter the height of the rectangle:";
    cin>>height;

    // Calculate area
    area = length * breadth;
    volume=length*breadth*height;

    // Display area
    cout << "Area of the rectangle: " << area << endl;
    cout <<"Volume of the rectangle: "<<volume<<endl;

    return 0;
}

