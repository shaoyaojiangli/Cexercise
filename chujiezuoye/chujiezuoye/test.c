#include <stdio.h>
#include <assert.h>

//int my_strlen(const char* str)
//{
//	int count = 0;
//	assert(str);
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}

//int main()
//{
//	char arr[] = "hello bit";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}


//-----------------------给出三条边，判断是否可以构成三角形，如果可以，请判断是那种三角形


//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	while (scanf_s("%d %d %d", &a, &b, &c) == 3)
//	{
//		//判断
//		if (a + b > c && a + c > b && b + c > a)
//		{
//			if (a == b && b == c)
//			{
//				printf("equilateral triangle!\n");
//			}
//			else if (a == b || a == c || b == c)
//			{
//				printf("isosceis triangle!\n");
//
//			}
//			else
//			{
//				printf("ordinary triangle!\n");
//			}
//		}
//		else
//		{
//			printf("not a triangle!\n");
//		}
//	}
//	return 0;
//}

//数据在内存中存放的时候有一个顺序的问题      大小端字节序
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//	short* p = (short*)arr;
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		*(p + i) = 0;
//	}
//
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//int main()
//{
//	unsigned long pulArray[] = { 6,7,8,9,10 };
//	unsigned long* pulPtr;
//
//	pulPtr = pulArray;
//	*(pulPtr + 3) += 3;
//
//	printf(" % d, % d\n", *pulPtr, *(pulPtr + 3));
//
//	return 0;
//}


//int main()
//{
//	int a = 0x11223344;
//	char* pc = (char*)&a;
//	*pc = 0;
//	printf("%x\n", a);
//	return 0;
//}


//------------------------------------写一个函数打印arr数组的内容，不使用数组的下标，使用指针

//void print(int* p, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	return 0;
//}


//---------------------------------写一个函数可以逆序字符串
//#include <string.h>
//int main()
//{
//	char arr[10001] = { 0 };
//	//由于scanf不能读取空格，所以采用gets
//	gets(arr);
//	//逆序
//	int left = 0;
//	int right = strlen(arr) - 1;
//
//	while (left < right)
//	{
//		char tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//
//		left++;
//		right--;
//	}
//
//	printf("%s\n", arr);
//	return 0;
//}




///-----------------------------------
//求Sn= a + aa + aaa + aaaa + aaaaa的前五项之和，其中a是一个数字

//
//int main()
//{
//	int a = 0;
//	int n = 0;
//	scanf_s("%d %d", &a, &n);
//	int i = 0;
//	int sum = 0;
//	int k = 0;
//	for (i = 0; i < n; i++)
//		{
//		k = k * 10 + a;
//		sum += k;
//		}
//	printf("%d\n", sum);
//	return 0;
//}



////---------------------------------------------打印水仙花数，求0~10000的水仙花数
////  水仙花数是指一个n位数，其各位数字的n次方之和刚好等于该数本身。
//#include <math.h>
//int main()
//{
//	int i = 0;
//	for (i + 0; i <= 100000; i++)
//	{
//		
//		//判断i是否为水仙花数
//		//1.计算i是几位数
//		
//		int n = 1;
//		int tmp = i;
//		int sum = 0;
//		while (tmp / 10)
//		{
//			n++;
//			tmp /= 10;
//		}
//
//		//2.得到i的每一位，计算他的n次方之和
//		tmp = i;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, n);
//			tmp /= 10;
//		}
//		if (sum == i)
//		{
//			printf("%d ",i);
//		}
//
//	}
//	return 0;
//}


//int main()
//{
//	int line = 0;
//	scanf_s("%d", &line);
//	int i = 0;
//	for (i = 0; i < line; i++)
//	{
//		//空格
//		int j = 0;
//		for (j = 0; j < line - 1 - i; j++)
//		{
//			printf(" ");
//		}
//		//*
//		for (j = 0; j < 2 * i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//
//
//	for (i = 0; i < line - 1; i++)
//	{
//		//空格
//		int j = 0;
//		for (j = 0; j <= i; j++)
//		{
//			printf(" ");
//		}
//		//*
//		for (j = 0; j < 2*(line-1-i)-1; j++)
//		{
//			printf("*");
//
//		}
//		printf("\n");
//
//	}
//	return 0;
//}


//喝汽水，1瓶汽水一元，2个空瓶可以换一瓶汽水，20元，可以换多少汽水

//int main()
//{
//	int money = 0;
//	scanf_s("%d", &money);
//	int total = money;
//	int empty = money;
//
//	//置换
//	while (empty >= 2)
//	{
//		total += empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//	printf("%d\n", total);
//
//	return 0;
//}

//
//int cnt = 0;
//int fib(int n)
//{
//	cnt++;
//	if (n == 0)
//	{
//		return 1;
//	}
//	else if (n == 1)
//	{
//		return 2;
//	}
//	else
//	{
//		return fib(n - 1) + fib(n - 2);
//	}
//}
//
//void main()
//{
//	fib(8);
//		printf("%d", cnt);
//}
////67



//int x = 1;
//do{
//	printf("%2d\n", x++);
//} while (x--);
////陷入死循环




//#include<stdlib.h>
//int a = 1;
//void test()
//{
//	int a = 2;
//	a += 1;
//}
//
//int main()
//{
//	test();
//	printf("%d\n", a);
//	return 0;
//}

//设计一个算法，求输入A和B的最小公倍数


//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf_s("%d %d", &a, &b);
//	//计算最小公倍数
//	int m = (a > b ? a : b);
//	while (1)
//	{
//		if (m % a == 0 && m % b == 0)
//		{
//			break;
//		}
//		m++;
//	}
//	printf("%d\n", m);
//
//	return 0;
//}


// ----------------------------- 倒置单词
//1.把整个字符串逆序
//2. 把每个单词逆序
#include <assert.h>
#include <string.h>

void reverse(char* left, char* right)
{
	assert(left);
	assert(right);

	while (left < right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}


int main()
{
	//输入
	char arr[10] = { 0 };
	gets(arr);
	//逆置
	int len = strlen(arr);
	//逆序整个字符串
	reverse(arr, arr + len - 1);
	//逆序每个单词
	char* start = arr;
	while (*start)
	{
		char* end = start;
		while (*end != ' ' && *end != '\0')
		{
			end++;
		}
		reverse(start, end - 1);
		if (*end != '\0')
		{
			end++;
		}
		start = end;
	}

	//输出

	printf("%s\n", arr);

	return 0;
}
