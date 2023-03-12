#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

#include <stdio.h>

// 1.不能死递归，都有跳出条件，每次递归逼近跳出条件
// 2.递归的层次不能太深
// https://stackoverflow.com/	程序员的知乎

void print(unsigned int n)
{
	if (n > 9)
	{
		print(n / 10);
	}
	printf("%d ", n % 10);
}

int main()
{
	unsigned int num = 0;
	scanf("%u", &num);
	//递归 - 函数自己调用自己
	print(num);	//print函数可以打印参数部分数字的每一位
	return 0;
}