#include <stdio.h>
#define ROW 9
#define COL 9
#define ROWS 11
#define COLS 11
#define lei 10
void initboard(char board[ROWS][COLS], int rows, int cols, char set);
void printboard(char board[ROWS][COLS], int row, int col);
void setboard(char board[ROWS][COLS], int row, int col);
void findboard(char board[ROWS][COLS], char showboard[ROWS][COLS], int row, int col);
