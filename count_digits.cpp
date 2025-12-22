#include <iostream>

using namespace std;

int main () {

    int n;

    cout << "Enter number:" ;
    cin >> n;

    int count=0;
    int original= n;

    while ( n>0) {
        count++ ;
        n= n/10;

      
    }
      if( original==0) {
            count=1;
        }
    
    cout << "digits :" << count;
    return 0;
}
