////程序清单2.1
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

//程序清单2.2
//// fathm_ft.c -- 把2英寻转换成英尺
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

//程序清单2.3
//two-func.c --一个文件包含两个函数
//#include<stdio.h>
//void butler(void);//函数原型
//int main(void)
//{
//	printf("I will summon the butler function.\n");
//	butler();//调用函数
//	printf("Yes,Bring me some tea and writeable DVDs.\n");
//	 
//	return 0;
//
//}
//void butler(void)//函数定义开始
//{
//	printf("You rang,sir?\n");
//}

//程序清单2.4
//nogood.c--有错误的程序
//#include<stdio.h>
//int main(void)
//（
//	int n,int n2,int n3;
//	n = 5;
//	n2 = n * n;
//	n3 = n2 * n2;
//	printf("n=%d,n squared=%d,n cubed=%d\n", n, n2, n3)
//
//	return 0;
//）

//程序清单2.5
//.c--语法错误修复后，但存在语义错误
//#include<stdio.h>
//int main(void)
//{
//	int n, n2, n3;
//	n = 5;
//	n2 = n * n;
//	n3 = n2 * n2;//语义错误 应为n3 = n * n2;
//	printf("n=%d,n squared=%d,n cubed=%d\n", n, n2, n3);
//
//	return 0;
//}

//程序清单3.1
//platinum.c -- your weight in platinum
//#include<stdio.h>
//int main(void)
//{
//	float weight;			//你的体重
//	float value;			//相同重量的白金价值
//	printf("Are you worth your weight in platinum?\n");
//	getchar();
//	printf("Let's check it out.\n");
//	printf("Please enter your weight in pound:");
//
//	scanf_s("%f", &weight);	//获取用户输入
//	value = 1700 * weight * 14.5833;//白金价格每盎司1700，14.5833用于把英镑常衡盎司转化为金衡盎司
//
//	printf("Your weight in platinmum is worth $%.2f.\n", value);
//	printf("You are easily worth that! If platinum prices drop,\n");
//	printf("eat more to maintain your value.\n");
//
//	return 0;
//}

//程序清单3.2
//print1.c - 演示printf()的一些特性
//#include<stdio.h>
//int main(viod)
//{
//	int ten = 10;
//	int two = 2;
//	printf("对:");
//	printf("%d minus %d is %d\n", ten, two, ten - two);
//	printf("错:");
//	printf("%d minus %d is %d\n", ten);//遗漏两个参数导致打印的值是内存中的任意值
//
//	return 0;
//}

//程序清单3.3
//bases.c -- 以十进制，八进制，十六进制打印十进制数100
//#include<stdio.h>
//int main(void)
//{
//	int x = 100;
//	printf("十进制数:%d 八进制数:%o 十六进制:%x\n", x, x, x);
//	printf("十进制数:%d 八进制数:%#o 十六进制数:%#x\n", x, x, x);
//	
//	return 0;
//}

//程序清单3.4
//print2.c -- 更多printf()的特性
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

////程序清单3.5
////charcode.c - 显示字符的代码编号
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

////程序清单3.6
////altnames.c -- 可移植整数类型名
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

////程序清单3.7
////showf_pt.c -- 以两种方式显示float类型的值
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

////程序清单3.8
////typesize.c -- 打印类型大小
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

////程序清单3.9
////badcount.c -- 参数错误的情况
//#include<stdio.h>
//int main(void)
//{
//	int n = 4;
//	int m = 5;
//	float f = 7.0f;
//	float g = 8.0f;
//
//	printf("%d\n", n, m);//参数太多		
//	printf("%d %d %d\n", n);//参数太少
//	printf("%d %d\n", f, g);//值的类型不匹配
//
//	return 0;
//}

//程序清单3.10
//escape.c -- 使用转义序列
//#include<stdio.h>
//int main(void)
//{
//	float salary;
//
//	printf("\aEnter your desired monthly salary:");
//	printf("$_______\b\b\b\b\b\b\b");
//	scanf_s("%f", &salary);
//	printf("\n\t$%.2f a month is $%.2f a year.", salary, salary * 12.0);
//		printf("\rGee!\n");//"/r"使得光标回到当前行的起始处
//
//	return 0;
//}

////程序清单4.1
////talkback.c -- 演示与用户交互
//#include<stdio.h>
//#include<string.h>          //提供strlen()函数的原型
//#define density 62.4        //人体密度（单位：磅/立方英尺）
//int main(void)
//{
//	float weight, volume;
//	int size, letters;
//	char name[40] = {0};          //name是一个可以容纳40个字符的数组，记得初始化，防止strlen找不到/0（结束符）
//
//	printf("hi!what's your frist name?\n");
//	scanf_s("%s",name,40);          //输入%s（字符串时）需要传入字符长度参数
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

////程序清单4.2
////praisel.c -- 使用不同类型的字符串
//#include<stdio.h>
//#define praise "你是很棒的"
//int main()
//{
//	char name[40];
//
//	printf("请输入你的名字：");
//	scanf_s("%s", name,40);
//	printf("你好，%s %s", name, praise);
//
//	return 0;
//}

//程序清单4.3
//如果编译器不识别%zd，尝试换成%u或%lu
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

////程序清单4.4
////pizze.c -- 在披萨饼程序中使用已经定义的常量
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

////程序清单4.5
////defines.c -- 使用limit.h和float头文件中定义的明示常量
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


////程序清单4.6
////printout.c -- 使用转换说明
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

////程序清单4.7
////width -- 字段宽度
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

////程序清单4.8
////floats.c -- 一些浮点型修饰符的组合
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

////程序清单4.9
////flags.c -- 演示一些格式标记
//#include<stdio.h>
//int main()
//{
//	printf("%x %X %#x\n", 31, 31, 31);
//	printf("**%d**% d**% d**\n", 42, 42, -42);
//	printf("**%5d**%5.3d**%05d**%05.3d**\n", 6, 6, 6, 6);
//
//	return 0;
//}

////程序清单4.10
////stringf.c -- 字符串格式
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

//程序清单4.11
//intconv.c -- 一些不匹配的整型转换
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