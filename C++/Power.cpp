#include<iostream>
using namespace std;
int power(int base, int exponent);

int main() {
    int base, exponent;

    // Input from the user
    cout << "Enter the base: ";
    cin >> base;
    cout << "Enter the exponent: ";
    cin >> exponent;

    // Calculate and display the result
    cout << base << " raised to the power of " << exponent << " is: " << power(base, exponent) << endl;

    return 0;
}

int power(int base, int exponent) {
    // Base case: any number raised to the power of 0 is 1
    if (exponent == 0) {
        return 1;
    } else {
        // Recursive case: base^exponent = base * base^(exponent-1)
        return base * power(base, exponent - 1);
    }
}
