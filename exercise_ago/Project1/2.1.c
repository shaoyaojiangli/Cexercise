////�����嵥2.1
//#include <stdio.h>
//int main(void)
//{
//	int num;
//	num = 1;
//	
//	printf("i am a simple");
//	printf("computer.\n");
//	printf("%d\n", num);
//
//	return 0;
//}

//�����嵥2.2
//// fathm_ft.c -- ��2ӢѰת����Ӣ��
//#include <stdio.h>
//int main(void)
//{
//	int feet, fathoms;
//	
//	fathoms = 2;
//	feet = 6 * fathoms;
//	printf("There are %d feet in %d fathoms!\n", feet, fathoms);
//	printf("Yes,I said %d feet!\n", 6 * fathoms);
//	return 0;
//
//
//}

//�����嵥2.3
//two-func.c --һ���ļ�������������
//#include<stdio.h>
//void butler(void);//����ԭ��
//int main(void)
//{
//	printf("I will summon the butler function.\n");
//	butler();//���ú���
//	printf("Yes,Bring me some tea and writeable DVDs.\n");
//	 
//	return 0;
//
//}
//void butler(void)//�������忪ʼ
//{
//	printf("You rang,sir?\n");
//}

//�����嵥2.4
//nogood.c--�д���ĳ���
//#include<stdio.h>
//int main(void)
//��
//	int n,int n2,int n3;
//	n = 5;
//	n2 = n * n;
//	n3 = n2 * n2;
//	printf("n=%d,n squared=%d,n cubed=%d\n", n, n2, n3)
//
//	return 0;
//��

//�����嵥2.5
//.c--�﷨�����޸��󣬵������������
//#include<stdio.h>
//int main(void)
//{
//	int n, n2, n3;
//	n = 5;
//	n2 = n * n;
//	n3 = n2 * n2;//������� ӦΪn3 = n * n2;
//	printf("n=%d,n squared=%d,n cubed=%d\n", n, n2, n3);
//
//	return 0;
//}

//�����嵥3.1
//platinum.c -- your weight in platinum
//#include<stdio.h>
//int main(void)
//{
//	float weight;			//�������
//	float value;			//��ͬ�����İ׽��ֵ
//	printf("Are you worth your weight in platinum?\n");
//	getchar();
//	printf("Let's check it out.\n");
//	printf("Please enter your weight in pound:");
//
//	scanf_s("%f", &weight);	//��ȡ�û�����
//	value = 1700 * weight * 14.5833;//�׽�۸�ÿ��˾1700��14.5833���ڰ�Ӣ�����ⰻ˾ת��Ϊ��ⰻ˾
//
//	printf("Your weight in platinmum is worth $%.2f.\n", value);
//	printf("You are easily worth that! If platinum prices drop,\n");
//	printf("eat more to maintain your value.\n");
//
//	return 0;
//}

//�����嵥3.2
//print1.c - ��ʾprintf()��һЩ����
//#include<stdio.h>
//int main(viod)
//{
//	int ten = 10;
//	int two = 2;
//	printf("��:");
//	printf("%d minus %d is %d\n", ten, two, ten - two);
//	printf("��:");
//	printf("%d minus %d is %d\n", ten);//��©�����������´�ӡ��ֵ���ڴ��е�����ֵ
//
//	return 0;
//}

//�����嵥3.3
//bases.c -- ��ʮ���ƣ��˽��ƣ�ʮ�����ƴ�ӡʮ������100
//#include<stdio.h>
//int main(void)
//{
//	int x = 100;
//	printf("ʮ������:%d �˽�����:%o ʮ������:%x\n", x, x, x);
//	printf("ʮ������:%d �˽�����:%#o ʮ��������:%#x\n", x, x, x);
//	
//	return 0;
//}

//�����嵥3.4
//print2.c -- ����printf()������
//#include<stdio.h>
//int main(void)
//{
//	unsigned int un = 3000000000;
//	short end = 200;
//	long big = 65537;
//	long long verybig = 12345678908642;
//
//	printf("un=%u and not %d\n",un,un);
//	printf("end=%hd and %d\n", end,end);
//	printf("big=%ld and not %hd\n", big, big);
//	printf("verybig=%lld and not %ld\n", verybig, verybig);
//
//	return 0;
//}

////�����嵥3.5
////charcode.c - ��ʾ�ַ��Ĵ�����
//#include<stdio.h>
//int main(void)
//{
//	char ch;
//
//	printf("Please enter a character.\n");
//	scanf_s("%c", &ch);
//	printf("The code for %c is %d.\n", ch, ch);
//
//	return 0;
//}

////�����嵥3.6
////altnames.c -- ����ֲ����������
//#include<stdio.h>
//#include<inttypes.h>
//int main(void)
//{
//	int32_t me32;
//
//	me32 = 45933945;
//	printf("First,assume int32_t is int:");
//	printf("me32=%d\n", me32);
//	printf("Next,let's not make any assumptions.\n");
//	printf("Instead,use a \"macro\" from inttypes.h:");
//	printf("me32 = % " PRId32 "\n", me32);
//
//	return 0;
//
//}

////�����嵥3.7
////showf_pt.c -- �����ַ�ʽ��ʾfloat���͵�ֵ
//#include<stdio.h>
//int main(void)
//{
//	float aboat = 32000.0;
//	double abet = 2.14e9;
//	long double dip = 5.32e-5;
//
//	printf("%f can be written %e\n",aboat, aboat);
//	printf("And it's %a in hexadecimal,powers of 2 notation\n", aboat);
//	printf("%f can be written %e\n", abet, abet);
//	printf("%Lf can be written %Le\n", dip, dip);
//
//    return 0;
//}

////�����嵥3.8
////typesize.c -- ��ӡ���ʹ�С
//#include<stdio.h>
//int main(viod)
//{
//	printf("Type int has a size of %zu bytes.\n", sizeof(int));
//	printf("Type char has a size of %zd bytes.\n", sizeof(char));
//	printf("Type long has a size of %zd bytes.\n", sizeof(long));
//	printf("Type long long has a size of %zd bytes.\n", sizeof(long long));
//	printf("Type double has a size of %zd bytes.\n",sizeof(double));
//	printf("Type long double has a size  of %zd bytes.\n", sizeof(long double));
//
//
//	return 0;
//}

////�����嵥3.9
////badcount.c -- ������������
//#include<stdio.h>
//int main(void)
//{
//	int n = 4;
//	int m = 5;
//	float f = 7.0f;
//	float g = 8.0f;
//
//	printf("%d\n", n, m);//����̫��		
//	printf("%d %d %d\n", n);//����̫��
//	printf("%d %d\n", f, g);//ֵ�����Ͳ�ƥ��
//
//	return 0;
//}

//�����嵥3.10
//escape.c -- ʹ��ת������
//#include<stdio.h>
//int main(void)
//{
//	float salary;
//
//	printf("\aEnter your desired monthly salary:");
//	printf("$_______\b\b\b\b\b\b\b");
//	scanf_s("%f", &salary);
//	printf("\n\t$%.2f a month is $%.2f a year.", salary, salary * 12.0);
//		printf("\rGee!\n");//"/r"ʹ�ù��ص���ǰ�е���ʼ��
//
//	return 0;
//}

////�����嵥4.1
////talkback.c -- ��ʾ���û�����
//#include<stdio.h>
//#include<string.h>          //�ṩstrlen()������ԭ��
//#define density 62.4        //�����ܶȣ���λ����/����Ӣ�ߣ�
//int main(void)
//{
//	float weight, volume;
//	int size, letters;
//	char name[40] = {0};          //name��һ����������40���ַ������飬�ǵó�ʼ������ֹstrlen�Ҳ���/0����������
//
//	printf("hi!what's your frist name?\n");
//	scanf_s("%s",name,40);          //����%s���ַ���ʱ����Ҫ�����ַ����Ȳ���
//	printf("%s,what's your weight in pounds?\n",name);
//	scanf_s("%f", &weight);
//	size = sizeof(name);
//	letters = strlen(name);
//	volume = weight / density;
//	printf("well,%s,your volume is %2.2f cubic feet.\n", name, volume);
//	printf("also,your first name has %d letters,\n", letters);
//	printf("and we have %d bytes to store it.\n", size);
//
//	return 0;
//}

////�����嵥4.2
////praisel.c -- ʹ�ò�ͬ���͵��ַ���
//#include<stdio.h>
//#define praise "���Ǻܰ���"
//int main()
//{
//	char name[40];
//
//	printf("������������֣�");
//	scanf_s("%s", name,40);
//	printf("��ã�%s %s", name, praise);
//
//	return 0;
//}

//�����嵥4.3
//�����������ʶ��%zd�����Ի���%u��%lu
//#include<stdio.h>
//#include<string.h>
//#define praise "You are an extrodinary being."
//int main()
//{
//	char name[40];
//
//	printf("What's your name?");
//	scanf_s("%s", name,40);
//	printf("Hello,%s.%s\n", name,praise);
//	printf("Your name of %zd letters occupise %zd memory cells.\n",
//		strlen(name), sizeof(name));
//	printf("The phrase of praise has %zd letters",
//		strlen(praise));
//	printf("and occcupies %zd memory cells.\n", sizeof praise);
//
//	return 0;
//}

////�����嵥4.4
////pizze.c -- ��������������ʹ���Ѿ�����ĳ���
//#include<stdio.h>
//#define pi 3.14159
//int main()
//{
//
//	float area, circum, radius;
//	
//	printf("What is the radius of your pizza?\n");
//	scanf_s("%f", &radius);
//	area = pi * radius * radius;
//	circum = 2.0 * pi * radius;
//	printf("Your basic pizza parameters are as follows:\n");
//	printf("circumference = %1.2f,area = %1.2f\n", circum, area);
//
//	return 0;
//}

////�����嵥4.5
////defines.c -- ʹ��limit.h��floatͷ�ļ��ж������ʾ����
//#include<stdio.h>
//#include<limits.h>
//#include<float.h>
//int main()
//{
//	printf("Some number limits for this system:\n");
//	printf("Biggest int: %d\n", INT_MAX);
//	printf("Smallest long long: %lld\n", LLONG_MIN);
//	printf("One byte = %d bits on this system.\n", CHAR_BIT);
//	printf("Largest double: %e\n", DBL_MAX);
//	printf("Smallest normal float:%e\n", FLT_MIN);
//	printf("float precision = %d digits\n", FLT_DIG);
//	printf("float epsilon = %e\n", FLT_EPSILON);
//	
//		return 0;
//}


////�����嵥4.6
////printout.c -- ʹ��ת��˵��
//#include<stdio.h>
//#define pi 3.14159
//int main()
//{
//	int number = 7;
//	float pies = 12.75;
//	int cost = 7800;
//
//	printf("The %d contestants ate %f berry pies.\n", number,
//		pies);
//	printf("The value of pi is %f.\n", pi);
//	printf("Farewell! thou art too dear for my possessing,\n");
//	printf("%c%d\n", '$', 2 * cost);
//
//	return 0;
//}

////�����嵥4.7
////width -- �ֶο��
//#include<stdio.h>
//#define pages 959
//int main()
//{
//	printf("*%d*\n", pages);
//	printf("*%2d*\n", pages);
//	printf("*%10d*\n", pages);
//	printf("*%-10d*\n", pages);
//
//	return 0;
//}

////�����嵥4.8
////floats.c -- һЩ���������η������
//#include<stdio.h>
//int main()
//{
//	const double RENT = 3852.99;
//
//	printf("*%f*\n", RENT);
//	printf("*%e*\n", RENT);
//	printf("*%4.2f*\n", RENT);
//	printf("*%3.1f*\n", RENT);
//	printf("*%10.3f*\n", RENT);
//	printf("*%10.3E*\n", RENT);
//	printf("*%+4.2f*\n", RENT);
//	printf("*%010.2f*\n", RENT);
//
//
//	return 0;
//}

////�����嵥4.9
////flags.c -- ��ʾһЩ��ʽ���
//#include<stdio.h>
//int main()
//{
//	printf("%x %X %#x\n", 31, 31, 31);
//	printf("**%d**% d**% d**\n", 42, 42, -42);
//	printf("**%5d**%5.3d**%05d**%05.3d**\n", 6, 6, 6, 6);
//
//	return 0;
//}

////�����嵥4.10
////stringf.c -- �ַ�����ʽ
//#include<stdio.h>
//#define BLURB "Authentic imtation!"
//int main()
//{
//	printf("[%2s]\n", BLURB);
//	printf("%[%24s]\n", BLURB);
//	printf("%[%24.5s]\n", BLURB);
//	printf("%[%-24.5s]\n", BLURB);
//
//		return 0;
//}

//�����嵥4.11
//intconv.c -- һЩ��ƥ�������ת��
#include<stdio.h>
#define PAGES 336
#define WORDS 65618
int main()
{
	short num = PAGES;
	short mnum = -PAGES;

	printf("num as short and unsigned short: %hd %hu\n", num, num);
	printf("-num as short and unsigned short: %hd %hu\n", mnum, mnum);
	printf("num as int and char: %d %c\n", num, num);
	printf("WORDS as int,short,and char: %d %hd %c\n", WORDS, WORDS, WORDS);

	return 0;
}