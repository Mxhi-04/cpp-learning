// Program to check if three given numbers form a triangle

#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    if (a + b > c && b + c > a && a + c > b) {
        cout << "It's a valid triangle\n";
    } else {
        cout << "Invalid triangle\n";
    }

    return 0;
}
