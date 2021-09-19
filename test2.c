#include "game2.h"
void menu()
{
	printf("******************\n");
	printf("**** 1. play *****\n");
	printf("**** 0. exit *****\n");
	printf("******************\n");
}
void game()
{
	char board[ROWS][COLS] = { 0 };
	char showboard[ROWS][COLS] = { 0 };
	//初始化
	initboard(board, ROWS, COLS, '0');
	initboard(showboard, ROWS, COLS, '*');
	//打印
	//printboard(board, ROW, COL);
	printboard(showboard, ROW, COL);
	//设置雷
	setboard(board, ROW, COL);
	//printboard(board, ROW, COL);
	//扫雷
	findboard(board, showboard, ROW, COL);
}

void test()
{
	srand((unsigned int)time(NULL));
	while (1)
	{
		menu();
		int a = 0;
		printf("请选择");
		scanf("%d", &a);
		if (a == 1)
		{
			game();
		}
		else if(a==0)
		{
			printf("再见");
			break;
		}
		else
		{
			printf("请重新选择");
		}
	}
}
int main()
{
	test();
	return 0;
}