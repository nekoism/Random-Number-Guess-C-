#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
  srand(time(NULL)); //makes sure that the number don't repeat
  int rand();
  // cout << rand() << endl;
  // (rand() % 10) + 1 generate number from 0 - 9 
  int userGuess;
  int computerNumber = (rand() % 11) + 1;
  do {
    cout << "Guess the number from 0 - 10" << endl;
    cin >> userGuess;
    if(userGuess == computerNumber){
      cout << "You have found the number Cool"<< endl;
    }else if(userGuess > computerNumber){
     cout << "guess low" << endl; 
    }else if(userGuess < computerNumber){
      cout << "Guess Higher" << endl;
    }else{
      cout << "..." << endl;
    }
  }while(userGuess != computerNumber);
}
