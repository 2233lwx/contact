#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<string.h>
#include"contact.h"

//int main()
//{
//	int arr[3][4] = { {1,2,3},{4,5} };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0;j < 4;j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
void menu()
{
	printf("***********************************\n");
	printf("*******1.add        2.del *********\n");
	printf("*******3.search     4.modify ******\n");
	printf("*******5.show       6.sort  *******\n");
	printf("*******0.exit               ********\n");
	printf("************************************\n");
}
int main()
{
	struct Contact con;
	InitContact(&con);
	int input = 0;
	do
	{
		menu();
		printf("请选择:");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			addContact(&con);
			break;
		case DEL:
			delContact(&con);
			break;
		case SEARCH:
			searchContact(&con);
			break;
		case MODIFY:
			modifyContact(&con);
			break;
		case SHOW:
			showContact(&con);
			break;
		case SORT:
			break;
		case EXIT:
			Destorycontact(&con);
			printf("退出通讯录\n");
			break;
		default:
			printf("选择错误\n");

		}
	} while (input);
		return 0;
}