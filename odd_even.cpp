// Program to check whether a number is odd or even

#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter number: ";
    cin >> n;

    if (n % 2 == 0) {
        cout << "EVEN\n";
    } else {
        cout << "ODD\n";
    }

    return 0;
}
