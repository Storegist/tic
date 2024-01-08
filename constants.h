// constants.h
#ifndef CONSTANTS_H
#define CONSTANTS_H

//Array for the board
char board[3][3] = {{'1','2','3'},{'4','5','6'},{'7','8','9'}};
//Variable Declaration
int choice;
int row,column;
char turn = 'X';
bool draw = false;



// Function Declarations
void display_board();
void player_turn();
bool gameover();

#endif // CONSTANTS_H

