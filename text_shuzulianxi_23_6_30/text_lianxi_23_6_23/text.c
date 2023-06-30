//******************************������ϰ
//#include <stdio.h>
//int main()
//{
//	int num = 10;
//	int arr[10] = { 0 };
//	printf("%d\n", sizeof(arr));   //arr��������int [10]
//	printf("%d\n", sizeof(int[10]));// �����ͬ
//
//	return 0;
//}

//*****************************************sizeof��strlen������
//#include <stdio.h>
//int main()
//{
//	char str[] = "hello bit";
//	//[h e l l o _ b i t \0]
//	printf("%d %d\n", sizeof(str), strlen(str));
//	//10 9
//	return 0;
//}

//sizeof��һ��������������������������ͣ���ռ�ڴ�ռ�Ĵ�С,��λ���ֽڣ��������ڴ��д�ŵľ�������
//strlen��һ���⺯����ר�����ַ����ĳ��ȣ�ֻ����ַ������Ӳ��������ĵ�ַһֱ�����\0��ͳ��\0֮ǰ���ֵ��ַ����ĸ���



//***********************************************������A�����ݺ�����B�����ݽ��н�����������һ����

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




//*********************************************����һ���������飬��ɶ�����Ĳ���
//ʵ�ֺ���init()��ʼ������ȫΪ0
//ʵ��print(�� ��ӡ�����ÿ��Ԫ��
//ʵ��reverse���� �����������Ԫ�ص�����

#include<stdio.h>
void init(int arr[], int sz)   //����
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		arr[i] = 0;
	}
}

void print(int arr[], int sz)   //��ӡ
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
void reverse(int arr[], int sz)   //����
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
