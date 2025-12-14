// Program to check whether a number is positive, negative, or zero

#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter number: ";
    cin >> n;

    if (n < 0) {
        cout << "Number is negative\n";
    } else if (n > 0) {
        cout << "Number is positive\n";
    } else {
        cout << "Number is zero\n";
    }

    return 0;
}
