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
#define ADD(X, Y)  X+Y
#define ADD1(X, Y) ((X)+(Y))

int main()
{
    printf("%d\n", 4*ADD(2, 3));
    printf("%d\n", 4*ADD1(2, 3));

    return 0;
}