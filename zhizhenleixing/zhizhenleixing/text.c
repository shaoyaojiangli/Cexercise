#include <stdio.h>

//int main()
//{
//    // int a = 10;//a是整型变量，占用四个字节
//    // int* pa = &a;
//    // //pa是一个指针变量，用来存放地址
//    // //本质上指针就是地址
//    char* pc = NULL;
//    short* ps = NULL;
//    int* pi = NULL;
//    double* pd = NULL;
//
//    printf("%d\n", sizeof(pc));
//    printf("%d\n", sizeof(ps));
//    printf("%d\n", sizeof(pi));
//    printf("%d\n", sizeof(pd));
//
//
//    return 0;
//}
//int main()
//{
//    int a = 0x11223344;
//    //int*pa = &a;
//    //*pa = 0; 
//
//    char* pc = (char*) & a;
//    *pc = 0;
//
//    return 0; 
//}
//                                
//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pc = (char*)&a;
//
//	printf("pa = % p\n", pa);
//	printf("pa + 1 = % p\n", pa + 1);
//
//	printf("pc = % p\n", pc);
//	printf("pc + 1 = % p\n", pc + 1);
//
//	//100
//	//0x64 - 16进制
//	//0110 0100 - 2进制
//	//144 - 8 进制
//	return 0;
//}
//
//int main()
//{
//	int a = 0;
//
//	int* pi = &a;//解引用访问四个字节
//	float* pf = &a;//解引用也访问四个字节
//
//	//是否可以通用呢？ -------不可以
//	*pi = 100;
//
//	return 0;
//}


//int main()
//{
//	int* p;
//	//p没有初始化，就意味着没有明确的指向
//	//一个局部变量不初始化的话，放的是随机值
//	*p = 10;//非法访问内存，这里的P就是野指针
//	return 0;
//
//}


//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;//&arr[0]首元素地址相同
//	int i = 0;
//	for (i = 0; i <= 10; i++)//当指针指向的范围超出数组arr的范围时，p就变成了野指针
//	{
//		*p = i;
//		p++;
//	}
//	return 0;
//}


//int* test()
//{
//	int a = 10;
//	return &a;//当局部变量a出了函数后就被销毁，解引用p无法找到a,此时p为野指针
//int main()
//{
//	int* p = test();
//	return 0;
//}


//int main()
//{
//
//
//	//如何避免野指针的出现
//
//	//在创建指针的时候，先将指针初始化，如果没有想好将指针初始化为什么，可以将其赋值为NULL
//	int* p3 = NULL;
//	//此时P3是无法访问的，是零值，如果想访问的话
//	if (p3 != NULL)
//	{
//		*p3 = 100;
//	}
//
//
//	return 0;
//}



////-------------------------------------指针加减整数
//#define N_VALUES 5
//int main()
//{
//	float values[N_VALUES];
//	float* vp;
//
//	for (vp = &values[0]; vp < &values[N_VALUES];)
//	{
//		*vp++ = 0;
//	}
//
//	return 0;
//}

int main()
{
	int arr[10] = { 0 };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	//int* p = arr;
	//for (i = 0; i < sz; i++)
	//{
	//	*p = 1;
	//	p++
	//}

	int* p = arr;
	for (i + 0; i < sz; i++)
	{
		*(p + i) = 1;
	}
	return 0;
}