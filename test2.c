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
	//��ʼ��
	initboard(board, ROWS, COLS, '0');
	initboard(showboard, ROWS, COLS, '*');
	//��ӡ
	//printboard(board, ROW, COL);
	printboard(showboard, ROW, COL);
	//������
	setboard(board, ROW, COL);
	//printboard(board, ROW, COL);
	//ɨ��
	findboard(board, showboard, ROW, COL);
}

void test()
{
	srand((unsigned int)time(NULL));
	while (1)
	{
		menu();
		int a = 0;
		printf("��ѡ��");
		scanf("%d", &a);
		if (a == 1)
		{
			game();
		}
		else if(a==0)
		{
			printf("�ټ�");
			break;
		}
		else
		{
			printf("������ѡ��");
		}
	}
}
int main()
{
	test();
	return 0;
}