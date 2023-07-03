#include<stdio.h>
////整型提升
//int main()
//{
//	char a = 5;   //00000000000000000000000000000101
//	//00000101
//	char b = 126; //00000000000000000000000001111110
//	//01111110
//	char c = a + b;
//	//00000000000000000000000000000101 - a
//	//00000000000000000000000001111110 - b
//	//00000000000000000000000010000011
//	//10000011 - c
//	//11111111111111111111111110000011 - 补码
//	//11111111111111111111111110000010
//	//10000000000000000000000001111101
//	printf("%d\n", c); //-125
//
//
//	return 0;
//}


//int main()
//{
//	char a = 0xb6;
//	short b = 0xb600;
//	int c = 0xb6000000;
//
//	if (a == 0xb6)
//		printf("a");
//
//	if (b == 0xb600)
//		printf("b");
//
//	if (c == 0xb6000000)
//		printf("c");
//
//	return 0;
//}


//int main()
//{
//	char c = 1;
//	printf("%u\n", sizeof(c));
//
//	printf("%u\n", sizeof(+c));
//
//	printf("%u\n", sizeof(-c));
//
//	return 0;
// }
//int main()
//{
//	int a = 1;
//	int b = (++a) + (++a) + (++a);
//	printf("%d\n", b);
//
//	return 0;
//	
//}


//

////有一个整数序列(可能有重复的整数),现在删除某一指定的整数,输出删除指定数字之后的序列,为被删除的字前后位置不变
//
//int main()
//{
//	int n = 0;
//	scanf_s("%d", &n);
//	int arr[50];
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf_s("%d", &arr[i]);
//
//	}
//	int del = 0;
//	scanf_s("%d", &del);
//
//	int j = 0;
//	for (i = 0; i < n; i++)
//	{
//		if (arr[i] != del)
//		{
//			arr[j] = arr[i];
//			j++;
//
//		}
//	}
//	for (i = 0; i < j; i++)
//	{
//		printf("%d",arr[j]);
//	}
//	return 0;
//}



//输入n个成绩,换行输出n个成绩中最高分和最低分之差

//int main()
//{
//	int n = 0;
//	scanf_s("%d", &n);
//	int arr[100];
//	int i = 0;
//
//	for (i = 0; i < n; i++)
//	{
//
//		scanf_s("%d", &arr[i]);
//	}
//
//	int max = arr[0];
//	for (i = 0; i < n; i++)
//	{
//		if (arr[i] > max)
//			max = arr[i];
//	}
//
//	int min = arr[0];
//	for (i = 0; i < n; i++)
//	{
//		if (arr[i] > min)
//			min = arr[i];
//	}
//
//	printf("%d\n", max - min);
//
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	scanf_s("%d", &n);
//	int arr[100];
//	int i = 0;
//	int max = 0;
//	int min = 100;
//
//	for (i = 0; i < n; i++)
//	{
//		scanf_s("%d", &arr[i]);
//
//			if(arr[i] > max)
//				max = arr[i];
//			if (arr[i] > min)
//				min = arr[i];
//	}
//
//	printf("%d\n", max - min);
//	return 0;
//}










////有一个字符,判断它是否为大写字母,如果是,转化为小写,反之依然
//
//int main()
//{
//	char ch = 0;
//
//
//	while (scanf_s(" %c", &ch)== 1)
//	{
//		
//		if (ch >= 'a' && ch <= 'z')
//		{
//			printf("%c\n", ch - 32);
//
//
//		}
//		else if(ch>='A'&&ch<='Z')
//		{
//			printf("%c\n", ch + 32);
//		}
//		getchar();
//	}
//	return 0;
//}
//
//#include <ctype.h>
//int main()
//{
//	char ch = 0;
//
//
//	while (scanf_s(" %c", &ch) == 1)
//	{
//
//		if (islower(ch))
//		{
//			printf("%c\n", toupper(ch));//转大写
//
//
//		}
//		else if (isupper(ch))
//		{
//			printf("%c\n",tolower(ch));//转小写
//		}
//		getchar();
//	}
//	return 0;
//}

