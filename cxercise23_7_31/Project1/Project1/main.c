
//程序清单4.12
////floatcnv.c---不匹配的浮点型转换
//#include <stdio.h>
//int main()
//{
//	float n1 = 3.0;
//	double n2 = 3.0;
//	long n3 = 2000000000;
//	long n4 = 1234567890;
//
//	printf("%.1e %.1e %.1e %.1e\n",n1,n2,n3,n4);
//	printf("%ld %ld\n",n1,n2,n3,n4);
//	printf("%ld %ld %ld %ld\n",n1,n2,n3,n4);
//
//	return 0;
//}




////程序清单4.13
////prntval.c -- printf()的返回值
//#include <stdio.h>
//int main()
//{
//	int bph2o = 212;
//	int rv;
//
//	rv = printf("%d F is water's boiling point.\n", bph2o);
//	printf("The printf() function printed %d charaacters.\n", rv);//结果是32，其中包含参数“bph2o”的值，空格，以及换符
//
//	return 0;
//}


//