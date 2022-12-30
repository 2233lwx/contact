#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<string.h>

//struct S
//{
//	int a;
	//char c;
//	char arr[20];
//};

//struct T
//{
	//char ch[10];
	////struct S s;
	//char *pc;
//};
//void print1(struct T * tmp)
//{
	//printf("ch: %s", tmp->ch);
//}


//int main()
//{
	//char arr[] = "hello,bit";
	////struct T t = { "hehe",{20,'w',"hello,word",3.14},arr };
	//print1(&t);
	//return 0;
//}
 //--------------------------------------------------------------------------------------------------------
//int check_sys()
//{
	//int a = 1;
	//char* p = (char*)&a;
	//return *p;
//}
//int main()
//{
	//int ret = check_sys();
	//if (ret == 1)
	//{
		//printf("小端\n"); 
	//}
		
	//else
	//{
		//printf("大端\n");
	//}
		
//}
//-------------------------------------------------------------------------------------------



//int add(int x, int y)
//{
//return x + y;
//}
//int sum(int x, int y)
//{
	//return x - y;
//}
//int mul(int x, int y)
//{
	//return x * y;
//}
//int div(int x, int y)
//{
	//return x / y;
//}

//int main()
//{
	//int(*pa[4])(int, int) = { add,sum,mul,div};
	//int i = 0;
	//for (i = 0; i <= 3; i++)
	//{
		//printf("%d\n", pa[i](2, 3));
	//}
	//return 0;
//}
//---------------------------------------------------------------------------------
//struct stu
//{
	//char name[20];
	//int  age;
//};

//void swap(char* buf1, char* buf2, int width)
//{
	//int i = 0;
	//for (i = 0; i < width; i++);
	//{
		//char tmp = *buf1;
		//*buf1 = *buf2;
		//*buf2 = tmp;
		//buf1++;
		//buf2++;
	//}
//}
//void bubble_sort(void* base, int sz, int width, int(*cmp)(void* e1, void* e2))
//{
	//int i = 0;
	//for (i = 0; i < sz - 1; i++)
	//{
		//int j = 0;
		//for (j = 0; j < sz - 1 - i; j++)
		//{
			//if (cmp((char*)base + j * width, (char*)base + (j + 1) * width)>0);
			//{
				//swap((char*)base + j * width, (char*)base + (j + 1) * width,width);
			//}
		//}
	//}
//} 

//int comp_int(const void* e1,const void* e2)
//{
	//return *(int*)e1 - *(int*)e2;
//}

//int comp_float(const void* e1, const void* e2)
//{
	//return ((int)(*(float*)e1 - *(float*)e2));
//}

//int comp_stu_buy_age(const void* e1, const void* e2)
//{
	//return ((struct stu*)e1)->age - ((struct stu*)e2)->age;
//}
	
//void test4()
//{
	//int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
	//int sz = sizeof(arr) / sizeof(arr[0]);
	//bubble_sort(arr, sz, sizeof(arr[0]), comp_int);

//}
//void test3()
//{
	//struct stu s[3] = { {"wangwu",20},{"lishi",30},{"zhangshan",10} };
	//int sz = sizeof(s) / sizeof(s[0]);
	//qsort(s, sz, sizeof(s[0]), comp_stu_buy_age);
//}

//void test2()
//{
	//float f[ ] = { 9.0,8.0,7.0,6.0,5.0,4.0 };
	//int sz = sizeof(f) / sizeof(f[0]);
	//qsort(f, sz, sizeof(f[0]), comp_float);
	//{
		//int j = 0;
		//for (j = 0; j <= sz; j++)
		//{
			//printf("%f\n", f[j]);
		//}
	//}

//}
 //void test1()
//{
	//int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
	//int sz = sizeof(arr) / sizeof(arr[0]);
	//qsort(arr, sz, sizeof(arr[0]), comp_int);
	//{
		//int i = 0;
		//for (i = 0; i <=sz; i++)
		//{
			//printf("%d\n", arr[i]);
		//}
	//}
//}


	

	//int main()
	//{
		//test1();
		//test2();
		//test3();
		//test4();

		//return 0;
	//}
//-------------------------------------------------------------------------------
//void servise(char* str)
//{
	//assert(str);
	//int len = strlen(str);
	//char* left = str;
	//char* right = str + len - 1;
	//while(left < right)
	//{
		//char tmp = *left;
		//*left = *right;
		//*right = tmp;
			//left++;
		   // right--;
	//}
//}

//int main()
//{
//char arr[256] = { 0 };
	//scanf("%s", arr);
	//servise(arr);
	//printf("逆序后的字符串%s\n", arr);
	//return 0;
//}
//-------------------------------------------------------------
//int main()
//{
	//int a = 0;
	//int n = 0;
	//scanf("%d%d", &a, &n);
	//int i = 0;
	//int ret = 0;
	//int sum = 0;
	//for (i = 0; i < n; i++)
	//{
	//ret = ret * 10 + a;
			//sum += ret;
	//}
	//printf("%d", sum);
	//return 0;
//}
// ------------------------------------------------------------
//#include<math.h>
//int main()
//{
	//{
	//int i = 0;
	//for (i = 0; i <= 10000; i++)
	//{
		//int tmp = i;
		//int n = 1;
		//int sum = 0;
		//while (tmp /= 10)
		//{
			//n++;
		//}
		//tmp = i;
		//while(tmp)
		//{
			//sum += pow(tmp % 10, n);
			//tmp /= 10;
		//}
		//if (i == sum)
		//{
			//printf("%d ", i);
		
		//}
	//}
	//return 0;
//}
//-------------------------------------------------
//int main()
//{
	//int i = 0;
	//int line = 0;
	//scanf("%d", &line);
	//for (i = 0; i < line; i++)
	//{
		//int j = 0;
		//for (j = 0; j < line - 1 - i; j++)
		//{
			//printf(" ");
		//}
	//for (j = 0; j < 2 * i + 1; j++)
		//{
			//printf("*");
		//}
		//printf("\n");
	//}
	//for (i = 0; i <line-1; i++)
	//{
		// int j = 0;
	//	for (j = 0; j <= i; j++)
		//{
		//	printf(" ");
		//}
		//for (j = 0; j < 2 * (line - 1 - i) - 1;j++)
		//{
		//	printf("*");
		//}
		//printf("\n");
	//}
//	return 0;
//}
//-----------------------------------------------
//int main()
//{
	//int total = 0;
	//int empty = 0;
	//int money = 0;
	//scanf("%d", &money);
	//total = money;
	//empty = total;
	//while (empty >= 2)
	//{
		//total += empty / 2;
		//empty = empty / 2 + empty % 2;
	//}
	//printf("%d", total);
	//return 0;
//
//}
//void move(int arr[], int sz)
//{
	//int left = 0;
	//int right = sz - 1;
	//while (left < right )
	//{
		//while ((left < right) && (arr[left] %2== 1))
		//{
			//left++;
		//}
		//while ((left < right) && (arr[right] %2== 0))
		//{
			//right--;
		//}
		//if (left < right)
		//{
			//int tmp = arr[left];
			//arr[left] = arr[right];
			//arr[right] = tmp;

		//}
	//}
//}
// ---------------------------------------------------------------
//void print(int arr[],int sz)
//{
	//int i = 0;
	//for (i = 0; i < sz; i++)
	//{
		//printf("%d\n", arr[i]);
	//}
//}
//int main()
//{
	//int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	//int sz = sizeof(arr) / sizeof(arr[0]);
	//move(arr, sz);
	//print(arr, sz);
	//return 0;
//}
// -----------------------------------------------------------------
/*oid reverise(char* left, char* right)
{
	assert(left != NULL);
	assert(right != NULL);
	while (left < right)
	{
		int empty = *left;
		*left = *right;
		*right = empty;
		left++;
		right--;
	}
}
void left_move(char* arr, int k)
{
	 int len = strlen(arr);
	 assert(k <= len);
	reverise(arr, arr + 1);
	reverise(arr + k, arr + len - 1);
	reverise(arr, arr + len - 1);*/
//}
//int main()
//{
	//char arr[] = "abcdef";
	//left_move(arr, 2);
	//printf("%s\n", arr);
	//return 0;
//}
//int is_left_move(char* s1,char* s2)
//{
	//int len = strlen(s1);
	//int i = 0;
	//for (i = 0; i < len; i++)
	//{
		//left_move(s1, 1);
		//int ret = strcmp(s1, s2);
		//if (ret == 0)
		  //   return 1;
	//}
	//return 0;
//}
//int main()
//{
	//char arr1[] = "abcdef";
	//char arr2[] = "cdefab";
	
	//int ret = is_left_move(arr1,arr2);
	//if (ret == 1)
	//	printf( "yes\n");
	//else
	//	printf("no\n");
	//return 0;
//}

//方法二
 int is_left_move(char* arr1,char* arr2)
 {
	 int len1 = strlen(arr1);
	 int len2 = strlen(arr2);
	 if (len1 != len2)
		 return 0;
	 strncat(arr1, arr1, 6);
	 char* ret = strstr(arr1, arr2);
	 if (ret == NULL)
		 return 0;
	 else
		 return 1;

 }
int main()
{
	char arr1[30] = "abcdef";
	char arr2[] = "cdefab";
	int ret = is_left_move(arr1, arr2);
	if (ret == 1)
		printf("yes\n");
	else
		printf("no\n");
	return 0;
}