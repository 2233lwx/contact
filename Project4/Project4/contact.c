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
				printf("���ݳɹ�");
		}
		else
		{
			printf("����ʧ��");
		}

	}
}

void addContact(struct Contact* ps)
{
	CheckCapacit(ps);
	
		printf("����������:");
		scanf("%s", ps->data[ps->size].name);
		printf("����������:");
		scanf("%d", &(ps->data[ps->size]).age);
		printf("�������Ա�:");
		scanf("%s", ps->data[ps->size].sex);
		printf("������绰:");
		scanf("%s", ps->data[ps->size].tele);
		printf("������סַ:");
		scanf("%s", ps->data[ps->size].addr);
		ps->size++;
		printf("��ӳɹ�\n");

}

void showContact(const struct Contact* ps)
{
	if (ps->size == 0)
	{
		printf("ͨѶ¼Ϊ��\n");
	}
	else
	{
		int i = 0;
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n", "����", "����", "�Ա�", "�绰", "סַ");
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
	printf("������Ҫɾ��������\n");
	scanf("%s", name);
	int pos = Findbymame(ps, name);
	
		if (pos == -1)
		{
			printf("��Ҫɾ�������ݲ�����\n");
		}
		else
		{
			int j = 0;
			for (j = pos; j < ps->size - 1; j++)
			{
				ps->data[j] = ps->data[j + 1];
			}
			ps->size--;
			printf("ɾ���ɹ�");
		}
	

}

void searchContact(struct Contact* ps)
{
	char name[MAX_NAME];
	printf("��������Ҫ���ҵ�����");
	scanf("%s", &name);
	int pos = Findbymame(ps, name);
	if (pos == -1)
	{
		printf("��Ҫ���ҵ��˲�����\n");
	}
	else
	{
		
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n", "����", "����", "�Ա�", "�绰", "סַ");
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
	printf("��������Ҫ�޸ĵ�����");
	scanf("%s", &name);
	int pos = Findbymame(ps, name);
	if (pos == -1)
	{
		printf("��Ҫ�޸ĵ��˲�����\n");
	}
	else
	{
		printf("����������:");
		scanf("%s", ps->data[pos].name);
		printf("����������:");
		scanf("%d", &(ps->data[pos]).age);
		printf("�������Ա�:");
		scanf("%s", ps->data[pos].sex);
		printf("������绰:");
		scanf("%s", ps->data[pos].tele);
		printf("������סַ:");
		scanf("%s", ps->data[pos].addr);
		printf("�޸����\n");
	}
}

void Destorycontact(struct Contact* ps)
{
	free(ps->data);
	ps -> data = NULL;
}

