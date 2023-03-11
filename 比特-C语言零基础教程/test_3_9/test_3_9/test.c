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
//	Swap(&a, &b);	// 传址调用
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

//int is_prime(int n)
//{
//	//2->n-1 之间的数字
//	int j = 0;
//	for ( j = 2; j < n; j++)
//	{
//		if (n % j == 0)
//			return 0;
//	}
//	return 1;
//}
//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		// 判断i是否为素数
//		if (is_prime(i))
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\n%d", count);
//
//	return 0;
//}

// 一个函数如果不写返回类型，默认返回int类型
//int is_leap_year(int i)
//{
//	/*if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0))
//		return 1;
//	else
//		return 0;*/
//
//	return ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0));
//}
//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for ( i = 1000; i <= 2000; i++)
//	{
//		if (is_leap_year(i))
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\n%d", count);
//
//	return 0;
//}

int binary_search(int arr[], int key, int sz)
{
	int left = 0;
	int right = sz - 1;
//	int sz = sizeof(arr) / sizeof(arr[0]);	传递过来的是指针长度为4

	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] > key)
		{
			right = mid - 1;
		}
		else if (arr[mid] < key)
		{
			left = mid + 1;
		}
		else
		{
			return mid;
		}
	}
	return -1;	// 找不到
}

int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int key = 17;
	int sz = sizeof(arr) / sizeof(arr[0]);
	// 找到了就返回找到的位置的下标
	// 找不到就返回-1
	int pos = binary_search(arr, key, sz);
	if (-1 == pos)
	{
		printf("找不到\n");
	}
	else
	{
		printf("找到了，下标是：%d\n", pos);
	}
	
	return 0;
}