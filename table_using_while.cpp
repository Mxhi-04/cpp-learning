// Program to print table of a number.

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;

    int i = 1;

    while (i <= 10) {
        cout << n << " x " << i << " = " << n * i << endl;
        i++;
    }

    return 0;
}
