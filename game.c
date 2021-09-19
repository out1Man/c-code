#include "game.h"
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
		int x = rand() % 9 + 1;
		int y = rand() % 9 + 1;
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

void findboard(char board[ROWS][COLS], char showboard[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int count = 0;
	while (1)
	{
		if (count == row * col - lei)
		{
			printf("游戏成功");
			break;
		}
		printf("请输入扫雷位置坐标\n");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (board[x][y] == '0')
			{

				int c=a_board(board,  x, y);
				showboard[x][y] = c + '0';
				printboard(showboard, ROW, COL);
				count++;
			}
			else
			{
				printf("扫雷失败，再见");
				break;
			}
		}
		else
		{
			printf("输入错误，请重新输入");
		}
	}
}

