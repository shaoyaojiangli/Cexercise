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
//	printf("%s %s %s %d\n", sp->name, sp->tale, sp->sex, sp->high);//����ǽṹ��ָ��->��Ա����
// }
//void print1(struct Peo p)
//{
//	printf("%s %s %s %d\n", p.name, p.tale, p.sex, p.high);//����ǽṹ�����.��Ա����
//}
//int main()
//{
//	struct Peo p1 = {"����","155988883324","��",187};//�ṹ���������
//	struct St s = { {"����","132748582932","Ů",166}, 100, 3.17f};
//
//	printf("%s %s %s %d\n", p1.name, p1.tale, p1.sex, p1.high);
//	printf("%s %s %s %d %d %f\n", s.p.name, s.p.tale, s.p.sex, s.p.high, s.num, s.f);
//
//	print1(p1);
//	print2(&p1);
//	return 0;
//}
//
////�ṹ�崫��



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

//-----------------------------------------------ͳ�ƶ���������1�ĸ���

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


//-----------------------------------------------------�������������Ʋ�ͬΪ�ĸ���

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
//	//^��������
//	//��ͬΪ0������Ϊ1
//	int ret = m ^ n;
//	//ͳ��ret���������м���1
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


//-------------------------------------------------��ӡָ������������Ϊ�е�ż��λ������λ

//int main()
//{
//	
//
//	int i = 0;
//	int num = 0;
//	scanf_s("%d", &num);
//	//��ȡ����λ������
//	for (i = 31; i >= 0; i -= 2)
//	{
//		printf("%d" ,(num >> i) & 1);
//	}
//	printf("\n");
//	//��ȡż��λ������
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d", (num >> i) & 1);
//	}
//	return 0;
//}



////ȫ�ֱ����;�̬�������Ƿ��ھ�̬���ģ�����ʼ����ʱ��ᱻĬ��Ϊ��ʼ��Ϊ0
//// �ֲ��������Ƿ���ջ���ģ�����ʼ����Ĭ��Ϊ���ֵ
////
//int i;//0
//int main()
//{
//	i--;//-1
//	//sizeof������������㷵�صĽ����size_t���͵ģ����޷�������
//	//-1ת��Ϊ�޷�������ʱ����һ���޴������
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


//-----------------------------------------�á�*����ӡ��X��


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