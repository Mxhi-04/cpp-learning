#include <iostream>
using namespace std;

int main () {

int arr[5];

    cout << "Enter five numbers :" ;
    for( int i =0; i < 5; i++) {
        cin >> arr[i];
    } 

    int key;

    cout << "Enter key to search: " ;
    cin >> key;

    int found = 0;

    for ( int i=0; i <5; i++) {
        if( arr[i]==key) {
            cout << "key found at index: " << i;
            found = 1;
            break;
        }
        }
        if(found==0) {
            cout << "Key not found" ;
        }
    
    return 0;

    
}
