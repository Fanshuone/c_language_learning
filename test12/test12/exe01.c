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
	char mine[ROWs][COLs] = { 0 }; //��Ų��úõ��׵���Ϣ
	char show[ROWs][COLs] = { 0 }; // ����Ų鴦���׵���Ϣ
	// ��ʼ�����������Ϊָ��������
	// mine ������û�в����׵�ʱ�򣬶��� '0'
	InitBoard(mine, ROWs, COLs, '0');

	// show ������û���Ų��׵�ʱ�򣬶��� '*'
	InitBoard(show, ROWs, COLs, '*');

	//DisplayBoard(mine, 9, 9);
	// ������
	SetMine(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);
	//DisplayBoard(mine, ROW, COL);

	// �Ų���
	FindMine(mine, show, ROW, COL);
}
int main()
{
	int input = 0;
	// ������������������
	srand((unsigned int)time(NULL));
	do
	{
		menu(); // ��ӡ�˵�
		printf("��ѡ��: ");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("ɨ��\n");
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

