
#pragma warning(disable:6031)
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<string.h>
//ð����˳���������
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 7;
	
	int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = sz - 1;
	while (left <= right)
	{
		int mid = (left + right / 2);
		if (arr[mid] < k)

		{
			left = mid + 1;
		}
		else if(arr[mid] > k)
		{
			right = mid - 1;
		}
	else
		{
		printf("�ҵ���,�±��ǣ�%d", mid);
		break;
	    }
	}
	if (left > right)
	{
		printf("û�ҵ�");
	}
	

     return 0;
}
//��ά�����������
int Findnum(int arr[3][3], int k, int row, int col)
{
	int x = 0;
	int y = col - 1;
	while (x <= row - 1 && y >= 0)
	{
		if (arr[x][y] > k)
		{
			y--;
		}
		else if(arr[x][y] < k)
		{
			x++;
		}
		else
		{
		return 1;
 }
	}
	return 0;
}
int main()
{
	int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
	int k = 7;
	int ret = Findnum(arr, k, 3, 3);
	if (ret == 1)
		printf("�ҵ���\n");
	else
		printf("û�ҵ�");
	return 0;
}

//�ַ�������
char* my_strlen(const char* p1,const char* p2)
{
	assert(p1 != NULL);
	assert(p2 != NULL);
	char *s1 = NULL;
	char *s2 = NULL;
	char *cur = (char*) p1;
	if (*p2 == '\0')
	{
		return (char*)p1;
	}
	while (*cur)
	{
		s1 = cur;
		s2 = (char*)p2;
		while (*s1 && *s2 && (*s1 == *s2))
		{
		    s1++;
			s2++;
		}
		if (*s2 == '\0')
		{
		return cur;
		}
		cur++;
	}
	return NULL;
}
	
int main()
{
	char *p1 = "abcdefghi";
	char *p2 = "def";
	char* ret = my_strlen(p1,p2);
	if (ret == NULL)
	{
		printf("û�ҵ�\n");
	}
	else
	{
		printf("%s\n",ret);
	}
	return 0;
}

//�ַ����ƶ�
void* my_memmove(void* dest, const void* src, size_t count)
{
	assert(dest != NULL);
	assert(src != NULL);
	void* ret = dest;
	if (dest < src)
	{
		while (count--)
		{
			(char*)dest = (char*)src;
			++(char*)dest;
			++(char*)src;
		}
	}
	else
	{
		while (count--)
		{
				*((char*)dest + count) = *((char*)src + count);
		}
	}
	return ret;
}

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	my_memmove(arr + 2, arr,20);
	return 0;
}