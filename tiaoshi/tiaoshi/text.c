#include <stdio.h>

//int main()
//{
//	int i = 0;
//	int arr[10] = { 0 };
//
//	//��ֵ
//	for (i = 0; i < 10; i++)
//	{
//		scanf_s("%d", &arr[i]);
//	}
//
//	//��ӡ
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
//	//���15
//	//�����
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


////����bug�Ĵ���
////��ѭ��
////ջ���ڴ��ʹ��ϰ������ʹ�øߵ�ַ����ʹ�õ͵�ַ
////������±����������ַ���ɵ͵��߱仯��
////���i��arr֮�����ʵ��Ŀռ䣬���������Խ��������ܸ��ǵ�i
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





//--------------------------------���д���õ����ڵ��ԵĴ���

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
//	*dest = *src;//��ֵ��\0��
//}


//�Ż�
//#include <assert.h>
//void my_strcpy(char* dest,const char* src)
//{
//	//����
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
const int* p = &num;//pָ��Ķ�����ͨ��p���ı䣬����p���������ǿ��Ըı��
int* const p = &num;//pָ��Ķ�����ͨ��p���ı䣬����p���������ǲ����Ըı��


//�´���ҵ