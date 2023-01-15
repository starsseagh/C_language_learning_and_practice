/* 编写一个函数rightrot(x, n), 该函数返回将x循环右移
 * （即从最右端移出的位将从最左端移入）n（二进制）位
 * 所得到的值。
 */
#include <stdio.h>

unsigned rightrot(unsigned x, int n);

int main(int argc, char const *argv[])
{
    unsigned a;
    int n = 3;      // 循环右移n位
    scanf("%X", &a, sizeof(unsigned));
    printf("%#X\n", rightrot(a, n));
}

unsigned rightrot(unsigned x, int n)
{
    return (x >> n) | (x << (8*(sizeof(unsigned)) - n));
}
