#include "game3.h"
void initboard1(char board[ROWS1][COLS1], int rows, int cols, char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}

void printboard1(char board[ROWS1][COLS1], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i <= row; i++)
	{
		printf("%2d", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%2d", i);
		for (j = 1; j <= col; j++)
		{
			printf("%2c", board[i][j]);
		}
		printf("\n");
	}
}
void setboard1(char board[ROWS1][COLS1], int row, int col,int lei)
{
	int a = 0;
	while (a < lei)
	{
		int x = rand() % ROW1 + 1;
		int y = rand() % ROW1+ 1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			a++;
		}
	}

}

int a_board1(char board[ROWS1][COLS1], int x, int y)
{
	int a = 0;
	int b = 0;
	int c = 0;
	for (a = x - 1; a <= x + 1; a++)
	{
		for (b = y - 1; b <= y + 1; b++)
		{
			c += board[a][b] - '0';
		}
	}
	return c;
}
void b_board1(char board[ROWS1][COLS1], char showboard[ROWS1][COLS1], int x, int y)
{

	if (board[x][y] == '0' && x >= 1 && x <= ROW1 && y >= 1 && y <= COL1)
	{
		int c = a_board1(board, x, y);
		showboard[x][y] = c + '0';
		int a = rand() % 3 - 1;
		int b = rand() % 3 - 1;
		//b_board1(board, showboard, x-1, y);

		b_board1(board, showboard, x + a, y + b);
	}
}
void findboard1(char board[ROWS1][COLS1], char showboard[ROWS1][COLS1], int row, int col,int lei)
{
	int x = 0;
	int y = 0;
	int count = 0;
	int count2 = 0;
	char a = 0;
	int flag = 1;
	while (1 && flag)
	{
		if (count == row * col - lei || count2 == lei)
		{
			printf("ÓÎÏ·³É¹¦\n");
			break;
		}

		printf("ÇëÑ¡Ôñ a. É¨À×  b. ÅÅÀ×\n");
		scanf("%s", &a);
		if (a == 'a')
		{

			printf("ÇëÊäÈëÉ¨À×Î»ÖÃ×ø±ê\n");
			scanf("%d%d", &x, &y);
			if (x >= 1 && x <= row && y >= 1 && y <= col)
			{
				if (board[x][y] == '0')
				{

					b_board1(board, showboard, x, y);

					printboard1(showboard, ROW1, COL1);
					count++;
				}
				else
				{
					printf("É¨À×Ê§°Ü£¬ÔÙ¼û");
					break;
				}
			}
			else
			{
				printf("ÊäÈë´íÎó£¬ÇëÖØÐÂÊäÈë\n");
			}
		}
		else if (a == 'b')
		{
			while (1)
			{
				printf("ÇëÊäÈëÅÅÀ×Î»ÖÃ×ø±ê\n");
				scanf("%d%d", &x, &y);

				if (x >= 1 && x <= row && y >= 1 && y <= col && board[x][y] == '0')
				{
					printf("ÓÎÏ·Ê§°Ü");
					flag = 0;
					break;
				}
				else if (x >= 1 && x <= row && y >= 1 && y <= col && board[x][y] == '1')
				{
					showboard[x][y] = '&';
					printboard1(showboard, ROW1, COL1);
					count2++;
					break;
				}
				else
				{
					printf("ÇëÖØÐÂÑ¡Ôñ\n");
				}
			}

		}
		else
			printf("ÊäÈë´íÎó,ÇëÖØÐÂÊäÈë\n");
	}
}




void initboard2(char board[ROWS2][COLS2], int rows, int cols, char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}

void printboard2(char board[ROWS2][COLS2], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i <= row; i++)
	{
		printf("%3d", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%3d", i);
		for (j = 1; j <= col; j++)
		{
			printf("%3c", board[i][j]);
		}
		printf("\n");
	}
}
void setboard2(char board[ROWS2][COLS2], int row, int col, int lei)
{
	int a = 0;
	while (a < lei)
	{
		int x = rand() % ROW2 + 1;
		int y = rand() % ROW2 + 1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			a++;
		}
	}

}

int a_board2(char board[ROWS2][COLS2], int x, int y)
{
	int a = 0;
	int b = 0;
	int c = 0;
	for (a = x - 1; a <= x + 1; a++)
	{
		for (b = y - 1; b <= y + 1; b++)
		{
			c += board[a][b] - '0';
		}
	}
	return c;
}
void b_board2(char board[ROWS2][COLS2], char showboard[ROWS2][COLS2], int x, int y)
{

	if (board[x][y] == '0' && x >= 1 && x <= ROW2 && y >= 1 && y <= COL2)
	{
		int c = a_board2(board, x, y);
		showboard[x][y] = c + '0';
		int a = rand() % 3 - 1;
		int b = rand() % 3 - 1;
		//b_board2(board, showboard, x-1, y);

		b_board2(board, showboard, x + a, y + b);
	}
}
void findboard2(char board[ROWS2][COLS2], char showboard[ROWS2][COLS2], int row, int col, int lei)
{
	int x = 0;
	int y = 0;
	int count = 0;
	int count2 = 0;
	char a = 0;
	int flag = 1;
	while (1 && flag)
	{
		if (count == row * col - lei || count2 == lei)
		{
			printf("ÓÎÏ·³É¹¦\n");
			break;
		}

		printf("ÇëÑ¡Ôñ a. É¨À×  b. ÅÅÀ×\n");
		scanf("%s", &a);
		if (a == 'a')
		{

			printf("ÇëÊäÈëÉ¨À×Î»ÖÃ×ø±ê\n");
			scanf("%d%d", &x, &y);
			if (x >= 1 && x <= row && y >= 1 && y <= col)
			{
				if (board[x][y] == '0')
				{

					b_board2(board, showboard, x, y);

					printboard2(showboard, ROW2, COL2);
					count++;
				}
				else
				{
					printf("É¨À×Ê§°Ü£¬ÔÙ¼û");
					break;
				}
			}
			else
			{
				printf("ÊäÈë´íÎó£¬ÇëÖØÐÂÊäÈë\n");
			}
		}
		else if (a == 'b')
		{
			while (1)
			{
				printf("ÇëÊäÈëÅÅÀ×Î»ÖÃ×ø±ê\n");
				scanf("%d%d", &x, &y);

				if (x >= 1 && x <= row && y >= 1 && y <= col && board[x][y] == '0')
				{
					printf("ÓÎÏ·Ê§°Ü");
					flag = 0;
					break;
				}
				else if (x >= 1 && x <= row && y >= 1 && y <= col && board[x][y] == '1')
				{
					showboard[x][y] = '&';
					printboard2(showboard, ROW2, COL2);
					count2++;
					break;
				}
				else
				{
					printf("ÇëÖØÐÂÑ¡Ôñ\n");
				}
			}

		}
		else
			printf("ÊäÈë´íÎó,ÇëÖØÐÂÊäÈë\n");
	}
}


void initboard3(char board[ROWS3][COLS3], int rows, int cols, char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}

void printboard3(char board[ROWS3][COLS3], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i <= row; i++)
	{
		printf("%3d", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%3d", i);
		for (j = 1; j <= col; j++)
		{
			printf("%3c", board[i][j]);
		}
		printf("\n");
	}
}
void setboard3(char board[ROWS3][COLS3], int row, int col, int lei)
{
	int a = 0;
	while (a < lei)
	{
		int x = rand() % ROW3+ 1;
		int y = rand() % ROW3 + 1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			a++;
		}
	}

}

int a_board3(char board[ROWS3][COLS3], int x, int y)
{
	int a = 0;
	int b = 0;
	int c = 0;
	for (a = x - 1; a <= x + 1; a++)
	{
		for (b = y - 1; b <= y + 1; b++)
		{
			c += board[a][b] - '0';
		}
	}
	return c;
}
void b_board3(char board[ROWS3][COLS3], char showboard[ROWS3][COLS3], int x, int y)
{

	if (board[x][y] == '0' && x >= 1 && x <= ROW3 && y >= 1 && y <= COL3)
	{
		int c = a_board3(board, x, y);
		showboard[x][y] = c + '0';
		int a = rand() % 3 - 1;
		int b = rand() % 3 - 1;
		//b_board3(board, showboard, x-1, y);

		b_board3(board, showboard, x + a, y + b);
	}
}
void findboard3(char board[ROWS3][COLS3], char showboard[ROWS3][COLS3], int row, int col, int lei)
{
	int x = 0;
	int y = 0;
	int count = 0;
	int count2 = 0;
	char a = 0;
	int flag = 1;
	while (1 && flag)
	{
		if (count == row * col - lei || count2 == lei)
		{
			printf("ÓÎÏ·³É¹¦\n");
			break;
		}

		printf("ÇëÑ¡Ôñ a. É¨À×  b. ÅÅÀ×\n");
		scanf("%s", &a);
		if (a == 'a')
		{

			printf("ÇëÊäÈëÉ¨À×Î»ÖÃ×ø±ê\n");
			scanf("%d%d", &x, &y);
			if (x >= 1 && x <= row && y >= 1 && y <= col)
			{
				if (board[x][y] == '0')
				{

					b_board3(board, showboard, x, y);

					printboard3(showboard, ROW3, COL3);
					count++;
				}
				else
				{
					printf("É¨À×Ê§°Ü£¬ÔÙ¼û");
					break;
				}
			}
			else
			{
				printf("ÊäÈë´íÎó£¬ÇëÖØÐÂÊäÈë\n");
			}
		}
		else if (a == 'b')
		{
			while (1)
			{
				printf("ÇëÊäÈëÅÅÀ×Î»ÖÃ×ø±ê\n");
				scanf("%d%d", &x, &y);

				if (x >= 1 && x <= row && y >= 1 && y <= col && board[x][y] == '0')
				{
					printf("ÓÎÏ·Ê§°Ü");
					flag = 0;
					break;
				}
				else if (x >= 1 && x <= row && y >= 1 && y <= col && board[x][y] == '1')
				{
					showboard[x][y] = '&';
					printboard3(showboard, ROW3, COL3);
					count2++;
					break;
				}
				else
				{
					printf("ÇëÖØÐÂÑ¡Ôñ\n");
				}
			}

		}
		else
			printf("ÊäÈë´íÎó,ÇëÖØÐÂÊäÈë\n");
	}
}