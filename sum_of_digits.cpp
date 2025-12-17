#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;

    int sum = 0;

    while (n > 0) {
        int digit = n % 10;   // get last digit
        sum = sum + digit;   // add to sum
        n = n / 10;           // remove last digit
    }

    cout << "Sum of digits = " << sum;

    return 0;
}
