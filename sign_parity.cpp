//created a program to check sign and parity of a number.

#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter number: ";
    cin >> n;

    if (n == 0) {
        cout << "Zero";
    }
    else if (n % 2 == 0) {
        if (n > 0) {
            cout << "Even & Positive";
        } else {
            cout << "Even & Negative";
        }
    }
    else {
        if (n > 0) {
            cout << "Odd & Positive";
        } else {
            cout << "Odd & Negative";
        }
    }

    return 0;
}
