/*
Author: Ryan Camp
Purpose: Challenge 11 build a tic tac toe game
Date: 10-28-2020
*/

/*
Notes:
    Info:
        - 2d array to store the state of the board.
        - isPlayer1 to store whos turn it is.

        - open rows (no data) (for building board)
        - populated rows (with data) (for building board)
        - horizontal divider (no data) (for building board)
            - I figure the columns will build themselves if I do it right...

    Functions:
        - drawBoard() redraw board based on current state of the board for each players turn
        - checkForWin() check for winning confitions based on current state of the board.
        - markBoard() update state of the board with players symbol (replace numerical placeholder)
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define OPENROW "     |     |     "
#define DIVIDER "_____|_____|_____"

void printBuiltRow(char state[3][3], int rowNumber);
void printRow(char *row);
void drawBoard(char boardState[3][3]);

void markBoard(bool isPlayer1, int playerChoice, char boardState[3][3]);
bool choiceIsValid(int playerChoice, char boardState[3][3]);

bool compareValues(char val1, char val2, char val3);
bool checkRow(char boardState[3][3], int idx);
bool checkColumn(char boardState[3][3], int idx);
bool checkRowsAndColumnsForWin(char boardState[3][3]);
bool checkForWin(char boardState[3][3]);

int main(){
    //DECLARE AND INITIALIZE VARIABLES
    //KEEP TRACK OF WHO PUT WHAT WHERE.
    char boardState[3][3] = {
        {'1', '2', '3'},
        {'4', '5', '6'},
        {'7', '8', '9'}
    };
    //TRACK PLAYERS CHOICE EACH ROUND.
    int playerChoice;
    //TRACK WHOS TURN IT IS
    bool isPlayer1 = true;

    for(int turns = 1; turns <= 9; turns++){
      //DRAW BOARD
      drawBoard(boardState);

      //INTAKE INITIAL USER INPUT
      printf("\n%s, Enter a number: ", isPlayer1 ? "Player 1" : "Player 2");
      scanf(" %1d", &playerChoice);

      //VALIDITY CHECK
      while(!choiceIsValid(playerChoice, boardState)){
        printf("Please make a different choice: ");
        scanf(" %1d", &playerChoice);
      }
      //MODIFY THE BOARD
      markBoard(isPlayer1, playerChoice, boardState);

      //CHECK FOR A WINNER.
      if(checkForWin(boardState)){
        drawBoard(boardState);
        printf("\n%s, Has won the game!\n\n", isPlayer1 ? "Player 1" : "Player 2");
        return 0;
      };

      //SWITCH WHOS TURN IT IS.
      isPlayer1 = !isPlayer1;
    }

    drawBoard(boardState);
    printf("\n\nNo body wins! The game is a draw!\n\n");
    return 0;
}

/*****************
DEFINE FUNCTIONS
*****************/
/*
BUILDS A ROW BASED ON THE ROW NUMBER.
*/
void printBuiltRow(char state[3][3], int rowNumber){
    char value1 = state[rowNumber][0];
    char value2 = state[rowNumber][1];
    char value3 = state[rowNumber][2];

    printf("\t  %c  |  %c  |  %c  \n", value1, value2, value3);
}
/*
PRINTS A ROW BASED ON INPUT, I BUILT THIS FOR COMMON FORMATTING.
*/
void printRow(char *row){
    printf("\t%s\n", row);
}
/*
USES printBuiltRow() & printRow() TO BUILD THE BOARD ON EACH ITERATION.
*/
void drawBoard(char boardState[3][3]){
  //CLEAR THE SCREEN ON EACH BUILD.
  system("clear");
  //OPENING STATEMENT FOR THE GAME
  printf("\n\tTic Tac Toe\n");
  printf("Player 1 (X) - Player 2 (O)\n\n");
  //BUILD AND DISPLAY BOARD
  for(int i = 0; i < 3; i++){
    printRow(OPENROW);
    printBuiltRow(boardState, i);
    if(i == 2){
      printRow(OPENROW);
    } else {
      printRow(DIVIDER);
    }
  }
}
/*
TAKES IN PLAYER, PLAYER CHOICE AND THE BOARD TO MARK THE BOARD
*/
void markBoard(bool isPlayer1, int playerChoice, char boardState[3][3]){
  char mark = isPlayer1 ? 'X' : 'O';
  int rowIndex = (playerChoice - 1) / 3;
  int columnIndex = (playerChoice - 1) % 3;

  boardState[rowIndex][columnIndex] = mark;
}
/*
TAKES PLAYER CHOICE AND BOARD AND CHECKS IS CHOICE IS VALID.
*/
bool choiceIsValid(int playerChoice, char boardState[3][3]){
  bool result = true;
  int rowIndex = (playerChoice - 1) / 3;
  int columnIndex = (playerChoice - 1) % 3;
  char currentState = boardState[rowIndex][columnIndex];

  if (currentState == 'X' || currentState == 'O') {
    printf("That choice is not available...");
    result = false;
  } else if (playerChoice < 1 || playerChoice > 9) {
    printf("Numbers 1 - 9 are the only valid choices...");
    result = false;
  }

  return result;
}
/*
SIMPLE FUNCTION, TAKES IN 3 CHARS AND TESTS TO SEE IF THEY ARE THE SAME VALUE.
*/
bool compareValues(char val1, char val2, char val3){
  bool result = false;

  if(val1 == val2 && val2 == val3)
      result = true;

  return result;
}
/*
This CHECKS ONE ROW FOR WIN CONDITION
*/
bool checkRow(char boardState[3][3], int idx){
    return compareValues(boardState[idx][0], boardState[idx][1], boardState[idx][2]);
}
/*
THIS CHECKS ONE COLUMN FOR WIN CONDITION
*/
bool checkColumn(char boardState[3][3], int idx){
    return compareValues(boardState[0][idx], boardState[1][idx], boardState[2][idx]);
}
/*
THIS CHECKS ALL ROWS AND COLUMNS FOR A WINNING PATTERN.
*/
bool checkRowsAndColumnsForWin(char boardState[3][3]){
    bool result = false;

    for(int i = 0; i < 3; i++){
        if(checkRow(boardState, i) || checkColumn(boardState, i))
            result = true;
            break;
    }

    return result;
}
/*
THIS CHECKS DIAGONALS FOR WINNING PATTER
*/
bool checkDiagonolForWin(char boardState[3][3]){
    bool result = false;

    if(compareValues(boardState[0][0], boardState[1][1], boardState[2][2]))
        result = true;
    else if(compareValues(boardState[0][2], boardState[1][1], boardState[2][0]))
        result = true;

    return result;
}
/*
CHECK BOARD STATE FOR ANY OF THE 8 CONDITIONS NECESSARY FOR WIN. OR 1 FOR DRAW.
*/
bool checkForWin(char boardState[3][3]){
    bool result = false;

    if(checkRowsAndColumnsForWin(boardState) || checkDiagonolForWin(boardState))
        result = true;

    return result;
}
