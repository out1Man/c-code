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
	printf("****1 ��ģʽ*****\n");
	printf("****2 ����ģʽ****\n");
	printf("****3 ����ģʽ****\n");
}
void game1()
{
	char board[ROWS1][COLS1] = { 0 };
	char showboard[ROWS1][COLS1] = { 0 };
	//��ʼ��
	initboard1(board, ROWS1, COLS1, '0');
	initboard1(showboard, ROWS1, COLS1, '*');
	//��ӡ
	//printboard1(board, ROW1, COL1);
	printboard1(showboard, ROW1, COL1);
	//������
	setboard1(board, ROW1, COL1,lei1);
	//printboard1(board, ROW1, COL1);
	//ɨ��
	findboard1(board, showboard, ROW1, COL1,lei1);
}
void game2()
{
	char board[ROWS2][COLS2] = { 0 };
	char showboard[ROWS2][COLS2] = { 0 };
	//��ʼ��
	initboard2(board, ROWS2, COLS2, '0');
	initboard2(showboard, ROWS2, COLS2, '*');
	//��ӡ
	//printboard2(board, ROW2, COL2);
	printboard2(showboard, ROW2, COL2);
	//������
	setboard2(board, ROW2, COL2, lei2);
	//printboard2(board, ROW2, COL2);
	//ɨ��
	findboard2(board, showboard, ROW2, COL2, lei2);
}
void game3()
{
	char board[ROWS3][COLS3] = { 0 };
	char showboard[ROWS3][COLS3] = { 0 };
	//��ʼ��
	initboard3(board, ROWS3, COLS3, '0');
	initboard3(showboard, ROWS3, COLS3, '*');
	//��ӡ
	//printboard3(board, ROW3, COL3);
	printboard3(showboard, ROW3, COL3);
	//������
	setboard3(board, ROW3, COL3, lei3);
	//printboard3(board, ROW3, COL3);
	//ɨ��
	findboard3(board, showboard, ROW3, COL3, lei3);
}


void test()
{
	srand((unsigned int)time(NULL));
	while (1)
	{
		menu1();
		char a = '0';
		printf("��ѡ��");
		scanf("%s", &a);
		if (a == '1')
		{
			while (1)
			{
				char b = '0';
				menu2();
				printf("��ѡ��\n");
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
					printf("������ѡ��\n");
				}
			}
			
		}
		else if (a == '0')
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