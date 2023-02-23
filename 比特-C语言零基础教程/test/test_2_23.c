# include<stdio.h>

typedef unsigned int u_int;

// int main()
// {
//     unsigned int num = 100;
//     u_int num1 = 2;

//     return 0;
// }

void test()
{
    static int a = 1;
    a++;
    printf("%d ", a);
}

int main()
{
    for (int i = 0; i < 10; i++)
    {
        test();
    }
    
    return 0;
}