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


//-----------------------���������ߣ��ж��Ƿ���Թ��������Σ�������ԣ����ж�������������


//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	while (scanf_s("%d %d %d", &a, &b, &c) == 3)
//	{
//		//�ж�
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

//�������ڴ��д�ŵ�ʱ����һ��˳�������      ��С���ֽ���
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


//------------------------------------дһ��������ӡarr��������ݣ���ʹ��������±꣬ʹ��ָ��

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


//---------------------------------дһ���������������ַ���
//#include <string.h>
//int main()
//{
//	char arr[10001] = { 0 };
//	//����scanf���ܶ�ȡ�ո����Բ���gets
//	gets(arr);
//	//����
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
//��Sn= a + aa + aaa + aaaa + aaaaa��ǰ����֮�ͣ�����a��һ������

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



//---------------------------------------------��ӡˮ�ɻ�������0~10000��ˮ�ɻ���
//  ˮ�ɻ�����ָһ��nλ�������λ���ֵ�n�η�֮�͸պõ��ڸ�������
#include <math.h>
int main()
{
	int i = 0;
	for (i + 0; i <= 100000; i++)
	{
		
		//�ж�i�Ƿ�Ϊˮ�ɻ���
		//1.����i�Ǽ�λ��
		
		int n = 1;
		int tmp = i;
		int sum = 0;
		while (tmp / 10)
		{
			n++;
			tmp /= 10;
		}

		//2.�õ�i��ÿһλ����������n�η�֮��
		tmp = i;
		while (tmp)
		{
			sum += pow(tmp % 10, n);
			tmp /= 10;
		}
		if (sum == i)
		{
			printf("%d ",i);
		}

	}
	return 0;
}
