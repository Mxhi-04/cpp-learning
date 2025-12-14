// Program to find the larger of two numbers

#include <iostream>
using namespace std;

int main() {
    int n1, n2;

    cout << "Enter two numbers: ";
    cin >> n1 >> n2;

    if (n1 < n2) {
        cout << n2 << " is larger\n";
    } else if (n1 > n2) {
        cout << n1 << " is larger\n";
    } else {
        cout << "Both numbers are equal\n";
    }

    return 0;
}
