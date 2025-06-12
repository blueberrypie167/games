#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main(){
  int input, cinput;
  std::string moves[4] = {"Rock", "Paper", "Scissors"};
  
  cout << "Pick a Move!" << endl << "Rock: 1, Paper: 2, Scissors:3" << endl;
  cin >> input;
  --input;
// generate a random number each time the program runs from 0 to 2 (3 numbers)
  srand(time(0));
  cinput = rand() % 2;
    cout << "You picked: " << moves[input] << endl;
    cout << "Your opponent picked: " << moves[cinput] << endl;
// the comparison algorithm
    if (cinput == input){
        cout << "Tie!";
    }
  switch(input){
    case 0:
        if(cinput == 1){
            cout << "You Lose!";
        }
        if(cinput == 2){
            cout << "You Win!";
        }
        break;
    case 1:
        if(cinput == 0){
            cout << "You Win!";
        }
        if(cinput == 2){
            cout << "You Lose!";
        }
        break;
    case 2:
        if(cinput == 0){
            cout << "You Lose!";
        }
        if(cinput == 1){
            cout << "You Win!";
        }
        break;
  }
  
}
