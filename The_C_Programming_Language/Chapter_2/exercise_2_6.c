/* 编写一个函数setbits(x, p, n, y),该函数返回对x执行下列操作后的结果值：
 * 将x中从第p位开始的n个（二进制）位设置为y中最右边n位的值，x的其余各位保持不变。 
 */
#include <stdio.h>

int setbits(int x, int p, int n, int y);
void printfb(int i);


int main(int argc, char const *argv[])
{
    int x = 73;
    int y = 34;
    int p = 6;
    int n = 3;

    int w = setbits(x, p, n, y);
    printfb(x);
    printfb(y);
    printfb(w);
    return 0;
}

int setbits(int x,int p, int n, int y)
{
    return x & ~(~(~0 << n) << (p-n)) | (y & ~(~0 << n)) << (p-n);
}

/* 以二进制打印整数n */
void printfb(int n)
{
    for (int i = 31; i >= 0; i--)
    {
        printf("%1d", (n & 1<<i) ? 1:0);
    }
    printf("\n");
}
