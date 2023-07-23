#include <stdio.h>
//struct Peo
//{
//	char name[20];
//	char tale[12];
//	char sex[5];
//	int high;
//};
//struct St
//{
//	struct Peo p;
//	int num;
//	float f;
//};
//void print2(struct Peo* sp)
//{
//	printf("%s %s %s %d\n", sp->name, sp->tale, sp->sex, sp->high);//左边是结构体指针->成员变量
// }
//void print1(struct Peo p)
//{
//	printf("%s %s %s %d\n", p.name, p.tale, p.sex, p.high);//左边是结构体变量.成员变量
//}
//int main()
//{
//	struct Peo p1 = {"张三","155988883324","男",187};//结构体变量创建
//	struct St s = { {"李四","132748582932","女",166}, 100, 3.17f};
//
//	printf("%s %s %s %d\n", p1.name, p1.tale, p1.sex, p1.high);
//	printf("%s %s %s %d %d %f\n", s.p.name, s.p.tale, s.p.sex, s.p.high, s.num, s.f);
//
//	print1(p1);
//	print2(&p1);
//	return 0;
//}
//
////结构体传参



//int main()
//{
//	int a, b, c;
//	a = 5;
//	c = ++a;//c6 a6
//	b = ++c, c++, ++a, a++;//c7 b7;c8 b7;c8 b7 a7;c8 b7 a8;
//	b += a++ + c;//a9 b23 c8
//
//	printf("a = %d b = %d c = %d\n:", a, b, c);
//
//	return 0;
//}
//

//-----------------------------------------------统计二进制数中1的个数

//int count_num_of_1(int n)
//int count_num_of_1(unsigned int n)
//
//{
//	int count = 0;
//	while (n)
//	{
//		if ((n % 2) == 1)
//		{
//			count++;
//		}
//		n /= 2;
//	}
//	return count;
//}


//int count_num_of_1(int n)
//{
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((n >> i) & 1) == 1)
//		{
//			count++;
//		}
//	}
//	return count;
//}

//int count_num_of_1(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int num = 0;
//	scanf_s("%d", &num);
//	int n = count_num_of_1(num);
//	printf("%d\n", n);
//
//	return 0;
//}
////-1


//-----------------------------------------------------求两个数二进制不同为的个数

//int count_diff_bit(int m, int n)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((m >> i) & 1) != ((n >> i) & 1))
//		{
//			count++;
//		}
//		
//	}
//	return count;
//}


//int count_diff_bit(int m, int n)
//{
//	int count = 0;
//	//^异或操作符
//	//相同为0，相异为1
//	int ret = m ^ n;
//	//统计ret二进制中有几个1
//	while (ret)
//	{
//		ret = ret & (ret - 1);
//		count++;
//	}
//}
//int main()
//{
//	int m = 0;
//	int n = 0;
//
//	scanf_s("%d %d", &m, &n);
//	int ret = count_diff_bit(m, n);
//
//	printf("%d\n", ret);
//
//	return 0;
//}


//-------------------------------------------------打印指数二进制序列为中的偶数位和奇数位

//int main()
//{
//	
//
//	int i = 0;
//	int num = 0;
//	scanf_s("%d", &num);
//	//获取奇数位的数字
//	for (i = 31; i >= 0; i -= 2)
//	{
//		printf("%d" ,(num >> i) & 1);
//	}
//	printf("\n");
//	//获取偶数位的数字
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d", (num >> i) & 1);
//	}
//	return 0;
//}



////全局变量和静态变量都是放在静态区的，不初始化的时候会被默认为初始化为0
//// 局部变量，是放在栈区的，不初始化。默认为随机值
////
//int i;//0
//int main()
//{
//	i--;//-1
//	//sizeof这个操作符计算返回的结果是size_t类型的，是无符号整型
//	//-1转换为无符号整型时会变成一个巨大的数字
//	if (i > sizeof(i))//-1 > 4
//	{
//		printf(">\n");
//	}
//	else
//	{
//		printf("<\n");
//	}
//	return 0;
//}


//-----------------------------------------用“*”打印“X”


//                     * _ _ _ *
//                     _ * _ * _
//                     _ _ * _ _
//                     _ * _ * _
//                     * _ _ _ *

int main()
{
	int n = 0;
	while (scanf_s("%d", &n) == 1)
	{
		int i = 0;
		int j = 0;
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				if (i == j)
				{
					printf("*");
				}
				else if (i + j == n - 1)
				{
					printf("*");
				}
				else
				{
					printf(" ");
				}
			}
			printf("\n");
		}
	}
	return 0;
}