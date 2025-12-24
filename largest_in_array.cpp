#include <iostream>
using namespace std;

int main () {

    int arr[5];

    cout << "Enter five numbers: ";
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    int max = arr[0];

    for (int i = 1; i < 5; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    cout << "Largest number is: " << max;

    return 0;
}
