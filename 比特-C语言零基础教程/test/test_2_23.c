# include<stdio.h>

typedef unsigned int u_int;

// int main()
// {
//     unsigned int num = 100;
//     u_int num1 = 2;

//     return 0;
// }

// void test()
// {
//     static int a = 1;
//     a++;
//     printf("%d ", a);
// }

// int main()
// {
//     for (int i = 0; i < 10; i++)
//     {
//         test();
//     }
    
//     return 0;
// }

// define定义宏
// #define ADD(X, Y)  X+Y
// #define ADD1(X, Y) ((X)+(Y))

// int main()
// {
//     printf("%d\n", 4*ADD(2, 3));
//     printf("%d\n", 4*ADD1(2, 3));

//     return 0;
// }

int main()
{
    int a = 10;     // a在内存中要分配空间的 - 4个字节
    printf("%p\n", &a);     // %p 专门用来打印地址的

    int* pa = &a;       // pa是用来存放地址的，在C语言中pa叫是指针变量
    printf("%p\n", pa); 
    // *说明pa是指针变量
    // int说明pa执行的对象是int类型的

    *pa = 20;       // * 解引用操作符，通过地址找到a
    printf("%d\n", a);

    printf("%d\n", sizeof(char*));
    printf("%d\n", sizeof(short*));
    printf("%d\n", sizeof(int*));
    printf("%d\n", sizeof(long*));
    printf("%d\n", sizeof(long long*));
    printf("%d\n", sizeof(float*));
    printf("%d\n", sizeof(double*));

    return 0;
}