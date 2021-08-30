#include "game.h"

void game()
{
	char board[Row][Col] = { 0 };
	a_board(board, Row, Col);
	dispaly_board(board, Row, Col);
	char ret = ' ';
	while (1)
	{
		playermove(board, Row, Col);
		dispaly_board(board, Row, Col);
		ret=judge(board, Row, Col);
		if (ret != 'c')
		{
			break;
        }
		computermove(board, Row, Col);
		dispaly_board(board, Row, Col);
		ret=judge(board, Row, Col);
		if (ret != 'c')
		{
			break;
		}
	}
	if (ret == '#')
		printf("玩家赢\n");
    else if (ret =='&')
		printf("电脑赢\n");
	else
		printf("平局");
}
int main()
{
	
	int a = 1;
	srand((unsigned int)time(NULL));
	do
	{
		printf("-------------------\n");
		printf("--1 play   0 exit--\n");
		printf("-------------------\n");
		scanf("%d", &a);
		switch (a)
		{
		case(1):
				game();
		case(0):
				break;
		default:
				printf("请重新输入");
		}
	} while (a);
	
	return 0;
}
