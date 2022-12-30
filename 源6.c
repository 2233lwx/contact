#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

/*/truct stu
{
	char name[20];
	int age;
	char id[20];
};

int main()
{
	int a = 0;
	struct stu s1 = { "ÕÅÈý", 22, "20201396153" };
	struct stu* sp = &s1;
	printf("%s\n", sp->name);

	return 0;

}

