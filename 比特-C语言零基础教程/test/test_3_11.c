#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>

//void Add(int* p)
//{
//	(*p)++;
//}
//
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("%d\n", num);
//
//	Add(&num);
//	printf("%d\n", num);
//
//	return 0;
//}

// 函数的嵌套调用和链式访问
//void test3()
//{
//	printf("呵呵\n");
//}
//
//void test2()
//{
//	test3();
//}
//
//int main()
//{
//	test2();
//
//	return 0;
//}

#include <string.h>

//int main()
//{
//	//int len = strlen("abc");
//	//printf("%d\n", len);
//
//	// 链式访问，一个函数的返回当作另一个函数的参数
//	//printf("%d\n", (int)strlen("abc"));
//
//	//char arr1[20] = { 0 };
//	//char arr2[] = "bit";
//	//printf("%s\n", strcpy(arr1, arr2));
//
//	printf("%d", printf("%d", printf("%d", 43)));	// printf返回的是打印在屏幕上的字符的个数
//
//	return 0;
//}

//int main() 
//{
//	int a = 10;
//	int b = 20;
//	// 函数声明
//	int Add(int, int);
//
//	int c = Add(a, b);
//	printf("%d\n", c);
//	return 0;
//}
//
//// 函数的定义
//int Add(int x, int y)
//{
//	return x + y;
//}

#include "add.h"
#include "sub.h"
#pragma comment(lib, "test_lib.lib")

//int main()
//{
//	int a = 10;
//	int b = 20;
//	//int c = Add(a, b);
//	int c = Sub(a, b);
//	printf("%d\n", c);
//	return 0;
//}