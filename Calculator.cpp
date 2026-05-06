#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <string>

using namespace std;

// Function declarations
double Addition(double num1, double num2);
double Subtraction(double num1, double num2);
double Multiplication(double num1, double num2);
double Division(double num1, double num2);


int main() 
{
    int operation{};
    double num1, num2;

    cout << " --------------- CALCULATOR  --------------- \n" ;
    
    cout << "1. ADDITION \n";
    cout << "2. SUBTRACTION \n";
    cout << "3. MULTIPLICATION \n";
    cout << "4. DIVISION \n \n";

    cout << "SELECT THE OPERATION TO PERFORM: " ;
    cin >> operation;

    //so the user doesn't input random numbers.
    if(operation!=1 && operation!=2 && operation!=3 && operation!=4 ) {
        cout << "invalid operation!!";
        return 0;
    }

    cout << "Enter num1: ";
    cin >> num1;

    cout << "Enter num2: ";
    cin >> num2;

    if(operation == 1) {
       double result=  Addition(num1, num2);
       cout << "Result= " << result ;
    } else if(operation ==2) {
        double result= Subtraction(num1, num2);
        cout << "Result= " << result;
    } else if(operation==3) {
        double result = Multiplication(num1, num2);
        cout << "Result= " << result;
    } else  {
        double result = Division(num1,num2);
        cout << "Result= " << result;
    } 
    return0;
    
}

// Function definitions:
double Addition(double num1, double num2) {
    
    return num1+ num2;
}

double Subtraction(double num1, double num2) {
    return num1-num2;
}

double Multiplication(double num1, double num2) {
    return num1*num2;
}

double Division(double num1, double num2)
{
    while(num2 == 0)
    {
        cout << "Cannot divide by zero!\n";
        cout << "Enter num2 again: ";
        cin >> num2;
    }

    return num1 / num2;
}
