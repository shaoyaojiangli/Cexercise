#include <stdio.h>
//int main()
//{
//
//	int arr[10] = { 0 };
//	printf("%d\n", &arr[9] - &arr[0]);
//    //ָ���ȥָ��õ�����ָ���ָ��֮��Ԫ�صĸ���
//	//�������е�ָ�붼�������ָ��ͬһ���ռ������ָ��ſ������
//	int arr[10] = { 0 };
//	char ch[5] = { 0 };
//	printf("%d\n", &ch[0] - &arr[5]);
//	//����
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




////ָ���ȥָ��İ취
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