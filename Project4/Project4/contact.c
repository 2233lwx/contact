#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<string.h>
#include"contact.h"

void InitContact(struct Contact* ps)
{
	ps->data = (struct peoinfo*)malloc(DEFULT_SIZE * sizeof(peoinfo));
	if (ps->data = NULL)
	{
		return ;
	}
	ps->capacity = DEFULT_SIZE;
	ps->size = 0;

		
}
 void CheckCapacit(struct Contact* ps)
{
	if (ps->size == ps->capacity)
	{
		struct peoinfo* ptr = realloc(ps->data, (ps->capacity + 2) * sizeof(peoinfo));
		if (ptr != NULL)
		{
			    ps->data = ptr;
				ps->capacity += 2;
				printf("扩容成功");
		}
		else
		{
			printf("扩容失败");
		}

	}
}

void addContact(struct Contact* ps)
{
	CheckCapacit(ps);
	
		printf("请输入姓名:");
		scanf("%s", ps->data[ps->size].name);
		printf("请输入年龄:");
		scanf("%d", &(ps->data[ps->size]).age);
		printf("请输入性别:");
		scanf("%s", ps->data[ps->size].sex);
		printf("请输入电话:");
		scanf("%s", ps->data[ps->size].tele);
		printf("请输入住址:");
		scanf("%s", ps->data[ps->size].addr);
		ps->size++;
		printf("添加成功\n");

}

void showContact(const struct Contact* ps)
{
	if (ps->size == 0)
	{
		printf("通讯录为空\n");
	}
	else
	{
		int i = 0;
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n", "姓名", "年龄", "性别", "电话", "住址");
		for (i = 0; i < ps->size; i++)
		{
			printf("%-20s\t%-4d\t%-5s\t%-12s\t%-20s\n",
				ps->data[i].name,
				ps->data[i].age,
				ps->data[i].sex,
				ps->data[i].tele,
				ps->data[i].addr);
		}
	}
}
 static int Findbymame(struct Contact* ps, char name[MAX_NAME])
{
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		if (0 == strcmp(ps->data[i].name, name))
		{
			return i;
		}
	}
	return -1;
 }
void delContact(struct Contact* ps)
{
	char name[MAX_NAME];
	printf("请输入要删除的名字\n");
	scanf("%s", name);
	int pos = Findbymame(ps, name);
	
		if (pos == -1)
		{
			printf("你要删除的数据不存在\n");
		}
		else
		{
			int j = 0;
			for (j = pos; j < ps->size - 1; j++)
			{
				ps->data[j] = ps->data[j + 1];
			}
			ps->size--;
			printf("删除成功");
		}
	

}

void searchContact(struct Contact* ps)
{
	char name[MAX_NAME];
	printf("请输入你要查找的姓名");
	scanf("%s", &name);
	int pos = Findbymame(ps, name);
	if (pos == -1)
	{
		printf("你要查找的人不存在\n");
	}
	else
	{
		
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n", "姓名", "年龄", "性别", "电话", "住址");
		{
			printf("%-20s\t%-4d\t%-5s\t%-12s\t%-20s\n",
				ps->data[pos].name,
				ps->data[pos].age,
				ps->data[pos].sex,
				ps->data[pos].tele,
				ps->data[pos].addr);
		}
	}
}
void modifyContact(struct Contact* ps)
{
	char name[MAX_NAME];
	printf("请输入你要修改的名字");
	scanf("%s", &name);
	int pos = Findbymame(ps, name);
	if (pos == -1)
	{
		printf("你要修改的人不存在\n");
	}
	else
	{
		printf("请输入姓名:");
		scanf("%s", ps->data[pos].name);
		printf("请输入年龄:");
		scanf("%d", &(ps->data[pos]).age);
		printf("请输入性别:");
		scanf("%s", ps->data[pos].sex);
		printf("请输入电话:");
		scanf("%s", ps->data[pos].tele);
		printf("请输入住址:");
		scanf("%s", ps->data[pos].addr);
		printf("修改完成\n");
	}
}

void Destorycontact(struct Contact* ps)
{
	free(ps->data);
	ps -> data = NULL;
}

