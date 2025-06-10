#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main(){
  int input, cinput;
  cout << "Pick a weapon!" << endl << "Rock: 1, Paper: 2, Scissors:3" << endl;
  cin >> input;
// generate a random number each time the program runs from 0 to 2 (3 numbers)
  srand(time(0));
  cinput = rand() % 2;

// the comparison algorithm
  switch(input){
    
  }
  
}
