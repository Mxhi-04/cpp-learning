// Made a program to check password.

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <string>
#include <cctype>

using namespace std;

int main()
{
    string password;

    bool hasUpper{};
    bool hasDigit{};
    bool hasSpecial{};
    bool hasSpace{};
    bool valid= false;

    cout << "-------- PASSWORD VALIDATOR --------\n\n";

    cout << "Create a valid password\n";
    cout << "-- Minimum 8 characters\n";
    cout << "-- At least one uppercase\n";
    cout << "-- At least one digit\n";
    cout << "-- At least one special character \n";
    cout << "-- No spaces allowed \n\n";

    while(!valid) {

        hasUpper=   false;
        hasDigit=   false;
        hasSpecial= false;
        hasSpace=   false;

        cout << "Enter Password: ";
        getline(cin, password);
        cout << endl;

        if(password.length() < 8) {
            cout << "MINIMUM LENGTH 8!! \n\n";
            continue;
        }

        for(int i=0; i< password.length() ; i++) {
        if(isupper(password[i])) 
            hasUpper= true;
        
        if(isdigit(password[i])) 
            hasDigit= true;
        
        if(isspace(password[i])) 
            hasSpace= true;;

        if(!isalnum(password[i]) && !isspace(password[i]))
            hasSpecial= true;

        }

        if(hasSpace) {
            cout<< "NO SPACES!! \n\n";
            continue;
        }

        if(!hasUpper) {
            cout << "AT LEAST ONE UPPER CASE!! (A , B , C...) \n\n";
            continue;
        }

        if(!hasDigit) {
            cout << "AT LEAST ONE DIGIT!! (1 , 2 ,3...) \n\n";
            continue;
        }

        if(!hasSpecial) {
            cout << "AT LEAST ONE SPECIAL!! \n\n";
            continue;
        }

        cout << "PASSWORD ACCEPTED SUCCESSFULLY\n";
        
        valid= true;
    }

    return 0;
}
