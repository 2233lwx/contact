#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<string.h>

enum Option
{
	EXIT,
	ADD,
    DEL,
	SEARCH,
	MODIFY,
	SHOW,
	SORT,
	
};
#define MAX 1000
#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_TELE 12
#define MAX_ADDR 30
#define DEFULT_SIZE 3

typedef struct peoinfo
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
}peoinfo;

typedef struct Contact
{
	struct peoinfo* data;
	int size;
	int capacity;
}Contact;

void InitContact(struct Contact* ps);
void addContact(struct Contact* ps);
void showContact(const struct Contact* ps);
void delContact(struct Contact* ps);
void searchContact(struct Contact* ps);
void modifyContact(struct Contact* ps);
void Destorycontact(struct Contact* ps);