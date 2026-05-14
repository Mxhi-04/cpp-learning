// ATM MACHINE
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <string>
#include <cctype>

using namespace std;

int pinValid(string num)
{
    if(num.length() != 4)
        return 1;

    for(char c : num)
    {
        if(!isdigit(c))
            return 2;
    }

    return 0;
}

int main()
{
    bool login = true;   // must initialize
    int choice;

    while(login == true)
    {
        cout << "——————————————————————————\n";
        cout << "   WELCOME TO SBI BANK\n";
        cout << "——————————————————————————\n\n";
        cout << "INSERT CARD / ENTER ACCOUNT NUMBER\n";
        cout << "1. Login\n";
        cout << "2. Exit\n";

        cin >> choice;
        cin.ignore();

        if(choice == 1)
        {
            int accNum;
            string pin;

            cout << "Enter account number: ";
            cin >> accNum;
            cin.ignore();

            int result{};
            int tries{};

            do
            {
                cout << "Enter account PIN: ";
                getline(cin, pin);

                result = pinValid(pin);

                if(result == 0)
                {
                    cout << "VALID PIN\n\n";
                    break;
                }

                tries++;

                if(result == 1)
                    cout << "PIN MUST BE 4 DIGITS\n\n";
                else
                    cout << "PIN MUST CONTAIN ONLY DIGITS\n\n";

                if(tries == 3)
                {
                    string forgetPin;

                    cout << "ENTERED WRONG PIN 3 TIMES.\n";
                    cout << "FORGOT PIN? (YES/NO)\n";
                    getline(cin, forgetPin);

                    if(forgetPin == "Yes" || forgetPin == "yes" || forgetPin == "YES")
                    {
                        cout << "Enter the phone number linked to your card:\n";
                        cout << "A SMS will be sent to your registered number with further instructions.\n";
                        cout << "THANK YOU FOR VISITING US\n";
                        return 0;
                    }
                    else
                    {
                        string preface;

                        cout << "WOULD YOU LIKE TO GO BACK TO THE PREFACE? (YES/NO): ";
                        getline(cin, preface);

                        if(preface == "Yes" || preface == "yes" || preface == "YES")
                        {
                            break;
                        }
                        else 
                        {
                            cout <<"please visit the SBI BANK for further queries";
                            return 0;
                        }
                    }
                }

            } while(result != 0);

            //nest two variables
            string history[100];
            int count{};
            int balance{5000};
            int deposit{};
            int withdraw{};
            int fastCash{};
            bool fourthSuccess{false};
            bool with{false};
            bool interface{true};
            

            while(interface==true)
            {
            
            cout << "———What would you like to do?———\n";
            cout << "1.CHECK BALANCE\n";
            cout << "2.DEPOSIT MONEY\n";
            cout << "3.WITHDRAW MONEY\n";
            cout << "4.FAST CASH\n";
            cout << "5.MINI STATEMENT\n";
            cout << "6.EXIT\n\n";

            cin >> choice;
            cin.ignore();

            

            switch (choice)
            {
            case 1:
                cout << "Your Bank balance is: " << balance << endl << endl;
                break;
            case 2:
                cout << "Enter the amount to be deposited: ";
                cin  >> deposit;
                cout << endl;
                cout << "Amount deposited succesfully.\n";
                cout << "Current Bank Balance: " << balance+deposit << endl << endl;
                balance+= deposit;

                history[count]= "deposited $" + to_string(deposit);
                count++;

                break;
            case 3:

            with = false;

            while(with!=true)
           {    cout << "Enter the amount you would like to withdraw: ";
                cin  >> withdraw ;
                cout << endl;

            if(withdraw> balance) 
            {
                cout << "Transaction delclined!\n"
                     << "insufficient funds.\n"
                     << "Current Balance: " << balance
                     << endl << endl;
            }
            else if(withdraw<0) 
            {
                cout << "withdrawn amount cannot be negative";
            }
            else
            {
            cout << "you have successfully withdrawn the following amount: " << withdraw << endl << endl;
            cout << "Current bank balance remaining: " << balance- withdraw << endl << endl;
            balance-=withdraw;

            history[count]= "withdrawn $" + to_string(withdraw);
            count++;
            with=true;
            }
            }
            break;

            case 4:
             while(fourthSuccess!=true)
             {
                   cout << "choose the amount you would like to withdraw: \n"
                     << "-> 500\n"
                     << "-> 1000\n"
                     << "-> 1500\n"
                     << "-> 2000\n\n";
                cin >> fastCash;

                if(fastCash != 500 && fastCash != 1000 && fastCash != 1500 && fastCash != 2000)
                {
                    cout << "please choose from the above options. \n \n";

                } 
                else
                {
                    cout << "Amount selected: " << fastCash << endl
                         << fastCash << " withdrawn successfully\n"
                         << "Remaining Balance: " << balance-fastCash << endl << endl;
                         balance-=fastCash;
                         fourthSuccess=true;

                         history[count]= "fast cash $" + to_string(fastCash);
                         count++;
                }
                }
            case 5:
                cout << "————— MINI STATEMENT ————— \n\n";

                    for(int i= count-1; i>=0 && i<=count; i--)
                    {
                        cout << history[i]<< endl;
                    }

                    cout << "balance: $" << balance << endl << endl;
                break;

            case 6:
                cout << "THANK YOU FOR VISITING US\n";
                login = false;
                return 0;
            
            default:
                cout << "Please Choose from the given options \n\n";
                break;
            }
            }
        }

        else if(choice == 2)
        {
            cout << "THANK YOU FOR VISITING US\n";
            login = false;
        }
    }

    return 0;
}
