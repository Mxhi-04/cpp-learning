#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>

using namespace std;

string computerChoice (){
  int num = rand() % 3 +1;

  if(num==1) { return "rock"; }

  if(num==2) { return "paper";}

               return "scissors";
  
}


int decider(string player, string computer) {
  if(player==computer) {
    cout << "draw! \n \n";
    return 0 ;
  }
    
  if(player== "rock" && computer == "scissors" |player== "paper" && computer == "rock" || player=="scissors" && computer=="paper" ) {
    cout << "you win! \n \n";
    return 1;
  }
  
  else {
    cout << "Computer wins \n \n";
    return -1;
  }
}

 int main() {

  srand(time(0));

  int pscore =0;
  int cscore= 0;

  while(pscore < 5 && cscore <5) {

  string player;
  string computer = computerChoice();

  cout << "********* ROCK, PAPER OR SCISSORS? *********\n";
  cout << "PLAYER CHOSE: ";
  cin >> player;

  if(player != "rock" && player != "paper" && player != "scissors") {
    cout << "Invalid choice!";
    return 0;
}

  cout << "COMPUTER CHOSE: " << computer << endl;

  int result =decider(player, computer);
  
  if(result==1) {
    pscore++;
  } 
  if(result==-1) {
    cscore++;
  }
  }

  cout << "********* score ********* \n";
  cout << "PLAYER: " << pscore << endl;
  cout << "COMPUTER: " << cscore << endl;

  if(pscore == 5)
        cout << "\n You won the game!\n";
    else 
        cout << "\n Computer won the game!\n";
   

  

  return 0;
}


