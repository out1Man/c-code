#include "game3.h"
void menu1()
{
	printf("******************\n");
	printf("**** 1. play *****\n");
	printf("**** 0. exit *****\n");
	printf("******************\n");
}
void menu2()
{
	printf("****1 简单模式*****\n");
	printf("****2 困难模式****\n");
	printf("****3 地狱模式****\n");
}
void game1()
{
	char board[ROWS1][COLS1] = { 0 };
	char showboard[ROWS1][COLS1] = { 0 };
	//初始化
	initboard1(board, ROWS1, COLS1, '0');
	initboard1(showboard, ROWS1, COLS1, '*');
	//打印
	//printboard1(board, ROW1, COL1);
	printboard1(showboard, ROW1, COL1);
	//设置雷
	setboard1(board, ROW1, COL1,lei1);
	//printboard1(board, ROW1, COL1);
	//扫雷
	findboard1(board, showboard, ROW1, COL1,lei1);
}
void game2()
{
	char board[ROWS2][COLS2] = { 0 };
	char showboard[ROWS2][COLS2] = { 0 };
	//初始化
	initboard2(board, ROWS2, COLS2, '0');
	initboard2(showboard, ROWS2, COLS2, '*');
	//打印
	//printboard2(board, ROW2, COL2);
	printboard2(showboard, ROW2, COL2);
	//设置雷
	setboard2(board, ROW2, COL2, lei2);
	//printboard2(board, ROW2, COL2);
	//扫雷
	findboard2(board, showboard, ROW2, COL2, lei2);
}
void game3()
{
	char board[ROWS3][COLS3] = { 0 };
	char showboard[ROWS3][COLS3] = { 0 };
	//初始化
	initboard3(board, ROWS3, COLS3, '0');
	initboard3(showboard, ROWS3, COLS3, '*');
	//打印
	//printboard3(board, ROW3, COL3);
	printboard3(showboard, ROW3, COL3);
	//设置雷
	setboard3(board, ROW3, COL3, lei3);
	//printboard3(board, ROW3, COL3);
	//扫雷
	findboard3(board, showboard, ROW3, COL3, lei3);
}


void test()
{
	srand((unsigned int)time(NULL));
	while (1)
	{
		menu1();
		char a = '0';
		printf("请选择");
		scanf("%s", &a);
		if (a == '1')
		{
			while (1)
			{
				char b = '0';
				menu2();
				printf("请选择\n");
				scanf("%s", &b);
				if (b == '1')
				{
					game1();
					break;
				}
				else if (b == '2')
				{
					game2();
					break;
				}
				else if (b == '3')
				{
					game3();
					break;
				}
				else
				{
					printf("请重新选择\n");
				}
			}
			
		}
		else if (a == '0')
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