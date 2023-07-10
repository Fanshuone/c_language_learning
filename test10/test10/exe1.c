#define _CRT_SECURE_NO_WARNINGS

#include "game.h"
void menu()
{
	printf("*********************************\n");
	printf("*********1. play  0. exit********\n");
	printf("*********************************\n");
}

void game()
{
	char ret = 0;
	char board[ROW][COL] = { 0 };
	// 初始化棋盘的函数
	IniBoard(board, ROW, COL);
	DisplayBoard(board, ROW, COL);
	//下棋
	while (1)
	{
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = IsWIn(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		// 判断输赢
		IsWIn(board, ROW, COL);
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//判断输赢
		ret = IsWIn(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		
	}
	if (ret = '#')
	{
		printf("玩家赢\n");
	}
	else if (ret == '*')
	{
		printf("电脑赢\n");
	}
	else
	{
		printf("平局\n");
	}
	DisplayBoard(board, ROW, COL);
}
int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu(); // 打印菜单
		printf("请选择: ");
		scanf("%d", &input);
		switch (input)
		{
		case 1: 
			printf("三子棋\n");
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;

		default:
			printf("选择错误\n");
			break;
		}

	} while (input);
	return 0;
	
}

//int main()
//{
//	char arr1[10] = { 'a',0};
//	printf("%p\n", arr1);
//	printf("%p\n", &arr1[0]);
//	printf("%p\n", arr1 + 1);
//	printf("%c", arr1[1]);
//	printf("%c", arr1[0]);
//	return 0;
//}
