#include <iostream>
#include "constants.h"
using namespace std;



//Function to show the current status of the gaming board

void display_board(){

    //Rander Game Board LAYOUT

    cout<<"PLAYER - 1 [X]t PLAYER - 2 [O]\n";
    cout<<"     |     |     \n";
    cout<<"  "<<board[0][0]<<"  | "<<board[0][1]<<"  |  "<<board[0][2]<<" \n";
    cout<<"_____|_____|_____\n";
    cout<<"     |     |     \n";
    cout<<"  "<<board[1][0]<<"  | "<<board[1][1]<<"  |  "<<board[1][2]<<" \n";
    cout<<"_____|_____|_____\n";
    cout<<"     |     |     \n";
    cout<<"  "<<board[2][0]<<"  | "<<board[2][1]<<"  |  "<<board[2][2]<<" \n";
    cout<<"     |     |     \n";
}
