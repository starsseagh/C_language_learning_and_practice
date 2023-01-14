/* 编写一个函数invert(x, p, n),该函数返回对x执行下列操作后的结果值：
 * 将x中从第p位开始的n个(二进制)位求反(即, 1变成0, 0变成1),x的其余各位保持不变 
 */
#include <stdio.h>

int invert(int x, int p, int n);
void printfb(int n);

int main(int argc, char const *argv[])
{
    int x = 211;
    int p = 5;
    int n = 3;

    printfb(x);
    x = invert(x, p, n);
    printfb(x);
    return 0;
}

int invert(int x, int p, int n)
{
    return x ^ (~(~0<<n) << (p-n));
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
