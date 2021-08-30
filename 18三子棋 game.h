#include <stdio.h>
#include <stdlib.h>
#include <time.h>
# define Row 3
# define Col 3
void dispaly_board(char board[Row][Col], int row, int col);
void a_board(char board[Row][Col], int row, int col);
void playermove(char board[Row][Col],int row,int col);
void computermove(char board[Row][Col], int row, int col);
char judge(char board[Row][Col], int row, int col);
