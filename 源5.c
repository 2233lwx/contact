//����������

#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
#include<stdlib.h>
#include<time.h>


void meanu()
{
	printf("******************************\n");
	printf("*****1.play  2.exit **********\n");
	printf("******************************\n");
}
void game()
{
	char ret = 0;
	char board[ROW][COL] = { 0 };
	Initboard(board, ROW, COL);
	Displayboard(board, ROW, COL);
	while (1)
	{
		Playmove(board, ROW, COL);
		Displayboard(board, ROW, COL);
		ret = Iswin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		Computermone(board, ROW, COL);
		Displayboard(board, ROW, COL);
		ret = Iswin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
		if (ret == '*')
		{
			printf("���Ӯ\n");
		}
		else if(ret == '#')
		{
			printf("����Ӯ");
		}
		else
		{
		printf("ƽ��\n");
        }
	
}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		meanu();
		printf("��ѡ�񣻡�");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ/n");
			break;
		default:
			printf("�����������������\n");
			break;
		}
	}while(input);
}
int main()
{
	test();
	return 0;
}
