#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

#include <stdio.h>
#include <string.h>

//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "abc";
//
//	strcpy(arr1, arr2);
//
//	printf("%s\n", arr1);
//
//	return 0;
//}
//int get_max(int x, int y)
//{
//	int z = 0;
//	if (x > y)
//	{
//		z = x;
//	}
//	else
//	{
//		z = y;
//	}
//	return z;	// 返回z-返回较大值
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = get_max(a, b);
//
//	printf("max = %d\n", max);
//
//	return 0;
//}

// 函数返回类型void，表示函数不返回值
//void Swap(int* pa, int* pb)
//{
//	int z = 0;
//	z = *pa;
//	*pa = *pb;
//	*pb = z;
//}
//
//int main()
//{
//	int a = 20;
//	int b = 10;
//	// 写一个函数 - 交换2个整型变量的值
//
//	printf("交换前：a=%d b=%d\n", a, b);
//	Swap(&a, &b);
//	printf("交换后：a=%d b=%d\n", a, b);
//
//	return 0;
//}

//int main()
//{
//	int a = 10;     // 4个字节的空间
//	int* pa = &a;	// pa就是一个指针变量
//	*pa = 20;
//	printf("%d\n", a);
//
//	return 0;
//}