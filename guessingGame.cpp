#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <string>

using namespace std;

void playGame(int maxRange, int maxAttempts){

    int num = rand() % maxRange + 1;
    int guess = 0;
    int tries = 0;

    while(tries < maxAttempts){

        cout << "GUESS A NUMBER B/W 1 - " << maxRange << endl;

        cout << "Enter your guess: ";
        cin >> guess;
        tries++;

        int diff = abs(num - guess);

        if(guess == num){
            cout << "CORRECT!! Your guess was right on spot!\n";
            cout << "Score: " << (maxAttempts - tries) * 10 << endl;
            break;
        }

        else{

            if(diff < maxRange/6){
                cout << "Burning hot!!\n";

                if(guess > num)
                    cout << "Try a few numbers down\n";
                else
                    cout << "Maybe a little larger\n";
            }

            else if(diff < maxRange/4){
                cout << "Hot!!\n";

                if(guess > num)
                    cout << "Maybe a few numbers down\n";
                else
                    cout << "Add a few numbers\n";
            }

            else if(diff < maxRange/3){
                cout << "Warm\n";
            }

            else{
                cout << "Cold\n";
            }
        }
    }

    if(guess != num){
        cout << "Awww, you were so close!\n";
        cout << "The number was: " << num << endl;
    }
}

int main(){

    srand(time(0));

    int level;
    char play = 'Y';

    cout << "************** GUESS THE NUMBER CHALLENGE **************\n\n";

    while(play == 'Y'){

        cout << "1. EASY (range: 50, tries:5)\n";
        cout << "2. VETERAN (range:100, tries:5)\n";
        cout << "3. HARD (range:200, tries:8)\n\n";

        cout << "SELECT DIFFICULTY (1,2,3): ";
        cin >> level;

        if(level == 1)
            playGame(50,5);

        else if(level == 2)
            playGame(100,5);

        else if(level == 3)
            playGame(200,8);

        cout << "\nPLAY AGAIN? (Y/N): ";
        cin >> play;
    }

    return 0;
}
