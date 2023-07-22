#include <stdio.h>
//int main()
//{
//
//	int arr[10] = { 0 };
//	printf("%d\n", &arr[9] - &arr[0]);
//    //指针减去指针得到的是指针和指针之间元素的个数
//	//不是所有的指针都能相减，指向同一个空间的两个指针才可以相减
//	int arr[10] = { 0 };
//	char ch[5] = { 0 };
//	printf("%d\n", &ch[0] - &arr[5]);
//	//不行
//	return 0;
//}
//#include <string.h>
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}




////指针减去指针的办法
//int my_strrlen(char* str)
//{
//	char* start = str;
//	while (*str != '\0')
//	{
//		str++;
//	}
//	return (str - start);
//}
//
//
//int main() 
//{
//	int len = my_strlen("abcdef");
//	printf("%d\n", len);
//
//	return 0;
//}
void test(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d", arr[i]);
	}
}
int main()
{
	int arr[10] = { 0 };
	test(arr, 10);
	return 0;
}