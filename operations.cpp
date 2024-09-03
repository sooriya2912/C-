#include <iostream>

class Arithmetic {
private:
    double num1, num2;

public:
    // Constructor
    Arithmetic(double n1 = 0.0, double n2 = 0.0) : num1(n1), num2(n2) {}
 
    // Function to add two Arithmetic objects
    Arithmetic add(const Arithmetic &other) const {
        return Arithmetic(num1 + other.num1, num2 + other.num2);
    }

    // Function to subtract two Arithmetic objects
    Arithmetic subtract(const Arithmetic &other) const {
        return Arithmetic(num1 - other.num1, num2 - other.num2);
    }

    // Function to multiply two Arithmetic objects
    Arithmetic multiply(const Arithmetic &other) const {
        return Arithmetic(num1 * other.num1, num2 * other.num2);
    }

    // Function to divide two Arithmetic objects
    Arithmetic divide(const Arithmetic &other) const {
        // Check for division by zero
        if (other.num1 == 0 || other.num2 == 0) {
            std::cerr << "Error: Division by zero!" << std::endl;
            return Arithmetic();
        }
        return Arithmetic(num1 / other.num1, num2 / other.num2);
    }

    // Function to display the values
    void display() const {
        std::cout << "num1: " << num1 << ", num2: " << num2 << std::endl;
    }
};

int main() {
    Arithmetic obj1(10.5, 5.2);
    Arithmetic obj2(2.5, 2.0);

    Arithmetic sum = obj1.add(obj2);
    Arithmetic diff = obj1.subtract(obj2);
    Arithmetic product = obj1.multiply(obj2);
    Arithmetic quotient = obj1.divide(obj2);

    std::cout << "Sum: ";
    sum.display();

    std::cout << "Difference: ";
    diff.display();

    std::cout << "Product: ";
    product.display();

    std::cout << "Quotient: ";
    quotient.display();

    return 0;
}
