// main.cpp
#include <iostream>
#include "constants.h"
#include "display_board.cpp"
#include "player_turn.cpp"
#include "gameover.cpp"

using namespace std;



// Function Declarations

int main()
{
    cout<<"tttT I C K -- T A C -- T O E -- G A M Ettt";
    cout<<"nttttFOR 2 PLAYERSnttt";
    while(gameover()){
        display_board();
        player_turn();
        gameover();
    }
    if(turn == 'X' && draw == false){
        cout<<"Congratulations!Player with 'O' has won the game \n";
        
    }
    else if(turn == 'O' && draw == false){
        cout<<"Congratulations!Player with 'X' has won the game \n";
    }    
    display_board();    
    }
