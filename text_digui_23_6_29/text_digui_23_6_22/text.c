//字符串逆序（递归实现）
//编写一个函数reverse_string(char*string)(递归实现）
//将参数字符串中的字符反向排列
#include <stdio.h>
#include <string.h>




////*************************************************************循环的方式
//int main()
//{
//	char arr[] = "abcdefg";
//	//int sz = sizeof(arr) / sizeof(arr[0]);
//
//	int left = 0;
//	//int right = sz - 2;//sizeof计算字符串长度时也计算了字符串结束的标志"\0".
//	int right = strlen(arr) - 1;
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
//	printf("%s", arr);
//	return 0;
//}


//**********************************************利用函数的方式

//void reverse(char arr[])
//{
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
//}
//int main()
//{
//	char arr[] = "abcdefg";
//
//	reverse(arr);
//
//	printf("%s\n", arr);
//
//	return 0;
//}




////*********************************************************通过递归的方法
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
//void reserve(char* str)
//{
//	char tmp = *str;
//	int len = my_strlen(str);
//	*(str) = *(str + len - 1);
//	*(str + len - 1) = '\0';                    //a b c d e f g \0
//	if (my_strlen(str + 1) >= 2)
//	{
//		reserve(str + 1);
//	}
//	*(str + len - 1) = tmp;
//}
//int main()
//{
//	char arr[] = "abcdefg";
//
//	reserve(arr);
//
//	printf("%s\n", arr);
//
//	return 0;
//}



////***************************************************多参数递归
//
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
//
//void reserve(char arr[],int left,int right)
//{
//	char tmp = arr[left];
//	arr[left] = arr[right];
//	arr[right] = tmp;
//
//	if (left < right)       //有Bug，当逆置偶数个数时，会产生，原因是它先交换再判断，改正：将交换语句放入if语句内
//	{
//		reserve(arr, left + 1, right - 1);
//	}
//}
//int main()
//{
//	char arr[] = "abcdefg";
//	int left = 0;
//	int right = my_strlen(arr) - 1;
//
//	reserve(arr,left,right);
//
//	printf("%s\n", arr);
//
//	return 0;
//}



////计算一个数的每位之和-----------------利用递归的方法写一个递归函数DigitSum(n)
//
//int DigitSum(unsigned int n)
//{
//	if (n > 0)
//		return DigitSum(n / 10) + n % 10;
//	else
//		return n;
//}
//int main()
//{
//	unsigned int n = 0;
//	scanf_s("%u", &n);
//	int sum = DigitSum(n);
//
//	printf("%d", sum);
//	return 0;
//}



//***********************************编写一个函数实现n的k次方，利用递归实现

double Pow(int n, int k)
{
	if (k > 0)
	{
		return n * Pow(n, k - 1);
	}
	else if(k == 0)
	{
		return 1;
	}
	else
	{
		return 1.0 / Pow(n, -k);
	}
}
int main()
{
	int n = 0;
	int k = 0;
	scanf_s("%d%d",&n,&k);
	double ret = Pow(n, k);

	printf("%lf\n", ret);
	return 0;
}
