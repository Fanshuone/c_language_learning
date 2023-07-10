#define _CRT_SECURE_NO_WARNINGS
#include "game.h"

void IniBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}

// 第一个版本
//void DisplayBoard(char board[ROW][COL], int row, int col)
//{
//	int i = 0;
//	for (i = 0; i < row; i++) 
//	{
//		// 打印数据
//		printf("%c  | %c |%c\n", board[i][0], board[i][1], board[i][2]);
//		//打印分割数据
//		
//		if (i == row - 1)
//		{
//			break;
//		}
//		printf("---|---|---\n");
//	}
//}

void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++) 
	{
		// 打印数据
		//printf("%c  | %c |%c\n", board[i][0], board[i][1], board[i][2]);
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j<col-1)
			{
				printf("|");
			}
			
		}
		printf("\n");
		//打印分割数据
		
		if (i < row - 1)
		{	
			int j = 0;
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col-1)
					printf("|");

			}
			printf("\n");
		}
		
	}
}


//玩家下棋

void PlayerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("玩家下棋\n");
	while (1)
	{
		printf("请输入坐标> ");
		scanf("%d %d", &x, &y);
		// 坐标范围合法的判断
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (board[x - 1][y - 1] != ' ')
			{
				printf("坐标被占用，不能下棋，请选择其他位置\n");
			}
			else
			{
				board[x - 1][y - 1] = '#';
				break;
			}
			
		}
		else
			printf("坐标非法，请重新输入\n");
	}
}

// 电脑下棋
void ComputerMove(char board[ROW][COL], int row, int col) 
{
	printf("电脑下棋：>\n");
	int x = 0;
	int y = 0;
	while (1)
	{
		x = rand() % row;
		y = rand() % col;
		if (board[x][y] == ' ')
		{
			board[x][y] = '*';
				break;
		}
	}
}


// 判断输赢
// 满了返回1
// 不满，返回0
int IsFull(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
			{
				return 0;
			}
		}
		
	}
	return 1;
}

int IsWIn(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
		{
			return board[i][0];
		}
	}
	int j = 0;
	for (j = 0; j < col; j++)
	{
		if (board[0][j] == board[1][j] && board[1][j] == board[1][j] && board[1][j] != ' ')
		{
			return board[0][j];
		}
	}

	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][j] != ' ')
	{
		return board[0][0];
	}

	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][j] != ' ')
	{
		return board[0][2];
	}

	if (IsFull(board, row, col))
	{
		return 'Q';
	}
	return 'C';
}