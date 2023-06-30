//******************************数组练习
//#include <stdio.h>
//int main()
//{
//	int num = 10;
//	int arr[10] = { 0 };
//	printf("%d\n", sizeof(arr));   //arr的类型是int [10]
//	printf("%d\n", sizeof(int[10]));// 结果相同
//
//	return 0;
//}

//*****************************************sizeof和strlen的区别
//#include <stdio.h>
//int main()
//{
//	char str[] = "hello bit";
//	//[h e l l o _ b i t \0]
//	printf("%d %d\n", sizeof(str), strlen(str));
//	//10 9
//	return 0;
//}

//sizeof是一个操作符，用来计算变量（类型）所占内存空间的大小,单位是字节；不关心内存中存放的具体内容
//strlen是一个库函数，专门求字符串的长度，只针对字符串；从参数给定的地址一直向后找\0，统计\0之前出现的字符串的个数



//***********************************************将数组A的内容和数组B的内容进行交换。（数组一样大）

//#include <stdio.h>
//int main()
//{
//	int arr1[] = { 1,3,5,7,9 };
//	int arr2[] = { 2,4,6,8,0 };
//	int i = 0;
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	for (i = 0; i < sz; i++)
//	{
//		int tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//
//	}
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	printf("\n");
//
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	return 0;
//}




//*********************************************创建一个整型数组，完成对数组的操作
//实现函数init()初始化数组全为0
//实现print(） 打印数组的每个元素
//实现reverse（） 函数完成数组元素的逆置

#include<stdio.h>
void init(int arr[], int sz)   //清零
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		arr[i] = 0;
	}
}

void print(int arr[], int sz)   //打印
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
void reverse(int arr[], int sz)   //逆置
{
	int left = 0;
	int right = sz - 1;

	while (left < right)
	{
		int tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;

		left++;
		right--;
	}
}

int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	print(arr, sz);

	reverse(arr, sz);
	print(arr, sz);

	init(arr, sz);
	print(arr, sz);


	return 0;
}
