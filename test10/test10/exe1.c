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
	// ��ʼ�����̵ĺ���
	IniBoard(board, ROW, COL);
	DisplayBoard(board, ROW, COL);
	//����
	while (1)
	{
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = IsWIn(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		// �ж���Ӯ
		IsWIn(board, ROW, COL);
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//�ж���Ӯ
		ret = IsWIn(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		
	}
	if (ret = '#')
	{
		printf("���Ӯ\n");
	}
	else if (ret == '*')
	{
		printf("����Ӯ\n");
	}
	else
	{
		printf("ƽ��\n");
	}
	DisplayBoard(board, ROW, COL);
}
int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu(); // ��ӡ�˵�
		printf("��ѡ��: ");
		scanf("%d", &input);
		switch (input)
		{
		case 1: 
			printf("������\n");
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;

		default:
			printf("ѡ�����\n");
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
