#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%p\n", arr);
//	printf("%p\n", &i);
//
//	//for (i = 0; i <= 12; i++)
//	//{
//	//	arr[i] = 0;
//	//	printf("hehe\n");
//	//}
//
//	return 0;
//}


//整数二进制的三种表示形式
//1。正的整数，原码，反码，补码相同。
//2。负的整数，原码，反码，补码是需要计算的
//原码：直接通过正负的形式写出的二进制序列就是原码
//反码：源码的符号位不变，其他位按位取反
//补码：反码+1就是补码


//int main()
//{
//	int a = 20;
//	//20
//	//00000000000000000000000000010100
//	//0x 00 00 00 14--十六进制                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        
//	//00000000000000000000000000010100
//	//00000000000000000000000000010100
//	//-10
//	//10000000000000000000000000001010--原
//	//0x 80 00 00 0a
//	//11111111111111111111111111110101--反
//	//0x ff ff ff f5
//	//11111111111111111111111111110110--补
//	//0x ff ff ff f6
//	int b = -10;
//
//	return 0;
//}



//int main()
//{
//	int a = 1;
//	if (*(char*)&a == 1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	return 0;
//}

int main()
{
	char a = -1;
	signed char b = -1;
	unsigned char c = -1;

	printf("a=%d,b=%d,c=%d", a, b, c);

	return 0;

}
