#include "game2.h"
void initboard(char board[ROWS][COLS], int rows, int cols, char set)
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

void printboard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i <= row; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}
void setboard(char board[ROWS][COLS], int row, int col)
{
	int a = 0;
	while (a < lei)
	{
		int x = rand() %ROW + 1;
		int y = rand() % COL+ 1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			a++;
		}
	}

}

int a_board(char board[ROWS][COLS], int x, int y)
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
void b_board(char board[ROWS][COLS], char showboard[ROWS][COLS], int x, int y)
{

	if (board[x][y] == '0' && x >= 1 && x <= ROW && y >= 1 && y <= COL)
	{
		int c = a_board(board, x, y);
		showboard[x][y] = c + '0';
		int i = rand() % 3 - 1;
		b_board(board, showboard, x + i, y + i);
	}
}
void findboard(char board[ROWS][COLS], char showboard[ROWS][COLS], int row, int col)
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
			printf("ÓÎÏ·³É¹¦");
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

					b_board(board, showboard, x, y);

					printboard(showboard, ROW, COL);
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
					printboard(showboard, ROW, COL);
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
