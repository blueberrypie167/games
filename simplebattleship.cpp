#include <iostream>
using namespace std;

/*  for a battleship game we need a 4x4 grid boolean array with 1's scattered around it
    each 1 represents a ship, 0 represents no ship, to win the game u must hit all ships
    player inputs a row and a column, if there is no ship, it's a miss, if there is, hit.
    the game must keep running until all ships are hit (using while loop)
    then check if a ship exists in the input coord's, count the number of turns it took to win
    i will try adding a graph or a computer opponent later
*/

int main(){
    // 4x4 boolean grid
    bool ships[4][4] = {
        {0, 1, 0, 0},
        {0, 0, 1, 0},
        {0, 0, 0, 1},
        {1, 0, 0, 0}
    };
    // input coords
    int row, column, numberturns = 1;
    int numberships = 4;
    while(numberships > 0){
        cout <<"Enter Row and Column coordinates: (between 1 and 4)" << endl;
        cin >> row >> column;
        --row;
        --column;
        if (ships[row][column]){
            numberships--;
            cout <<"Hit!" << endl;
            cout << numberships << " Left!" << endl;
            ships[row][column] = 0;
        }
        else {
            cout <<"Miss!" << endl;
        }
        numberturns++;
    }

    cout << "Victory!" << endl;
    cout << "Number of turns: " << numberturns << endl;

}
