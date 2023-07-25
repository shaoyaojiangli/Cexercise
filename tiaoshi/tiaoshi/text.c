#include <stdio.h>

//int main()
//{
//	int i = 0;
//	int arr[10] = { 0 };
//
//	//赋值
//	for (i = 0; i < 10; i++)
//	{
//		scanf_s("%d", &arr[i]);
//	}
//
//	//打印
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}


//int Add(int x, int y)
//{
//	return x + y;
//
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = Add(a, b);
//
//	printf("%d\n", c);
//
//
//	return 0;
//}

//void test(int a[])
//{
//	//
//}
//int main()
//{
//	//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//test(arr);
//	char arr[] = "abcdef";
//	return 0;
//}

//void test2()
//{
//	printf("hehe\n");
//}
//
//void test1()
//{
//	test2();
//}
//
//void test()
//{
//	test1();
//}
//
//int main()
//{
//	test();
//
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = a + b;
//	printf("%d\n", c);
//	return 0;
//}


//int main()
//{
//	//1+2+3=9
//	//输出15
//	//不相等
//	int n = 0;
//	scanf_s("%d", &n);
//	int i = 0;
//	int ret = 1;
//	int j = 0;
//	int sum = 0;
//	for (j = 1; j <= n; j++)
//	{
//		ret = 1;
//		for (i = 1; i <= j; i++)
//		{
//			ret *= i;
//		}
//		sum += ret;
//	}
//	
//	printf("%d\n", sum);
//
//	return 0;
//}


////具有bug的代码
////死循环
////栈区内存的使用习惯是先使用高地址，再使用低地址
////数组的下标的增长，地址是由低到高变化的
////如果i和arr之间有适当的空间，利用数组的越界操作可能覆盖到i
//int main()
//{
//	int i = 0;
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("hehe\n");
//	}
//	return 0;
//}





//--------------------------------如何写出好的易于调试的代码

//--------strcpy


//void my_strcpy(char* dest, char* src)
//{
//
//	while (*src != '\0')
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	*dest = *src;//赋值‘\0’
//}


//优化
//#include <assert.h>
//void my_strcpy(char* dest,const char* src)
//{
//	//断言
//	assert(src != NULL);
//	assert(dest != NULL);
//
//
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}
int main()
{
	//char arr1[20] = { 0 };
	char arr1[20] = "xxxxxxxxxxxx";

	char arr2[] = "hello bit";

	my_strcpy(arr1, arr2);

	printf("%s\n", arr1);

	return 0;
}


int num;
const int* p = &num;//p指向的对象不能通过p来改变，但是p变量本身是可以改变的
int* const p = &num;//p指向的对象能通过p来改变，但是p变量本身是不可以改变的


//下次作业