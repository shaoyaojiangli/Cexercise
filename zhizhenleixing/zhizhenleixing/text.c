#include <stdio.h>

//int main()
//{
//    // int a = 10;//a�����ͱ�����ռ���ĸ��ֽ�
//    // int* pa = &a;
//    // //pa��һ��ָ�������������ŵ�ַ
//    // //������ָ����ǵ�ַ
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
//	//0x64 - 16����
//	//0110 0100 - 2����
//	//144 - 8 ����
//	return 0;
//}
//
//int main()
//{
//	int a = 0;
//
//	int* pi = &a;//�����÷����ĸ��ֽ�
//	float* pf = &a;//������Ҳ�����ĸ��ֽ�
//
//	//�Ƿ����ͨ���أ� -------������
//	*pi = 100;
//
//	return 0;
//}


//int main()
//{
//	int* p;
//	//pû�г�ʼ��������ζ��û����ȷ��ָ��
//	//һ���ֲ���������ʼ���Ļ����ŵ������ֵ
//	*p = 10;//�Ƿ������ڴ棬�����P����Ұָ��
//	return 0;
//
//}


//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;//&arr[0]��Ԫ�ص�ַ��ͬ
//	int i = 0;
//	for (i = 0; i <= 10; i++)//��ָ��ָ��ķ�Χ��������arr�ķ�Χʱ��p�ͱ����Ұָ��
//	{
//		*p = i;
//		p++;
//	}
//	return 0;
//}


//int* test()
//{
//	int a = 10;
//	return &a;//���ֲ�����a���˺�����ͱ����٣�������p�޷��ҵ�a,��ʱpΪҰָ��
//int main()
//{
//	int* p = test();
//	return 0;
//}


//int main()
//{
//
//
//	//��α���Ұָ��ĳ���
//
//	//�ڴ���ָ���ʱ���Ƚ�ָ���ʼ�������û����ý�ָ���ʼ��Ϊʲô�����Խ��丳ֵΪNULL
//	int* p3 = NULL;
//	//��ʱP3���޷����ʵģ�����ֵ���������ʵĻ�
//	if (p3 != NULL)
//	{
//		*p3 = 100;
//	}
//
//
//	return 0;
//}



////-------------------------------------ָ��Ӽ�����
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