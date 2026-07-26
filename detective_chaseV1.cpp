#include <iostream>
#include <cmath>
#include <fstream>
#include <ctime>

using namespace std;

string makeLower(string name)
{
    for(int c=0; c< name.length(); c++)
    {
       name[c]=tolower(name[c]) ;
    }

    return name;
}

void playGame(int place, int maxTries)
{   
    
    string locations[] =
{
    "Police HQ",
    "Metro Station",
    "Museum",
    "Airport",
    "Harbor",
    "Bank",
    "Theatre",
    "Hospital",
    "University",
    "Clock Tower",
    "Library",
    "Market",
    "City Hall",
    "Bridge",
    "Old Town",
    "Mall",
    "Park",
    "Power Plant",
    "Warehouse",
    "Safe House"
};
    
    string playerGuess;
    int tries=0;

    int random= (rand() % place);
    string mrX=  locations[random];

    while(maxTries>tries)

   {  
        
        cout << "Mr.X is hiding at one of the " << place << " locations from below \n";

        for(int i=0 ; i<place ; i++) 

        {
            cout << i+1<<". " << locations[i] << "  \n";
        }

        cout <<"\nYou have " << maxTries-tries <<" shots at it.\n";
        cout << endl;
        cout << "guess the location(1- " << place <<" ): ";

        
        getline(cin, playerGuess);

        string lowX= makeLower(mrX);
        playerGuess= makeLower(playerGuess);
        

        int locationIndex;
        bool key=false;

        {
         
         for(int i=0;i<place;i++)

        if(playerGuess== makeLower(locations[i]))
        {   
            locationIndex= i+1;
            key=true;
        }
         
        }

        if(!key)
        { 
            cout << "Enter a valid location!!";
            continue;
        }
        
        tries++;

        if ( lowX == playerGuess)
        {
            cout << "congratulations!! you caught mrX!!\n\n";
            cout << "\n he was hiding at: " << mrX;
            cout << "\n\nYou found him in " << tries << " tries\n";
            break;
        }

         int diff= abs(random-locationIndex);

        if(diff<=place/6)
        {
            cout << "Ahh! you were very close!\n\n";
        }

         else if(diff<=place/3)
        {
            cout << "close!!\n\n";
        }

        else
        {
            cout << "very far\n\n";
        }

        if(random>locationIndex)
        {
            cout << "HINT: Mr.X is at a higher numbered location\n\n";
        }
        
        else {
            cout << "HINT: Mr.X is at a lower numbered location\n\n";
        }

         
}

if (playerGuess != mrX)
{
    cout << "\nMr. X escaped!\n";
    cout << "He was hiding at location: " << mrX << ".\n";
}

}

int main() 
{
    srand(time(0));

    int difficulty;

    cout << "—————————————SCOTLAND YARD——————————————\n";

    cout << "Choose a difficulty from below—\n\n";
    cout << "1.EASY (10 locations,3 tries)\n";
    cout << "2.MEDIUM(15 locations, 4 tries)\n";
    cout << "3.HARD(20 locations, 5 tries)\n";
    cout << "\n Enter your choice(1-3): ";

    cin >> difficulty;
    cin.ignore();

    if(difficulty==1) {
        playGame(10,3);
    }
     else if(difficulty==2) {
        playGame(15,4);
    }
     else if(difficulty==3) {
        playGame(20,5);
    }
    else
    {
        cout << "enter a valid choice!!";
        
    }



    return 0;
}
