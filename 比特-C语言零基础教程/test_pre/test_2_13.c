#include <stdio.h>

// 写代码
// 写出主函数（main函数）
// 如何执行？ - C语言是从主函数的第一行开始执行的
// 所以C语言代码中得有main函数-入口

// int main()
// {
//     /* code */
//     printf("比特");
//     return 0;
// }

// sizeof()返回对象的长度（字节）
// int main()
// {
//     printf("%d\n", sizeof(char));
//     printf("%d\n", sizeof(short));
//     printf("%d\n", sizeof(int));
//     printf("%d\n", sizeof(long));
//     printf("%d\n", sizeof(long long));
//     printf("%d\n", sizeof(float));
//     printf("%d\n", sizeof(double));
// }

// 类型 变量名 = 数值; （推荐）
// 类型 变量名;（不推荐）
// int main()
// {
//     int age = 20;
//     double weight = 75.3;

//     age += 1;
//     weight -= 10;
//     printf("%d\n", age);
//     printf("%lf\n", weight);

//     return 0;
// }

// scanf函数是输入函数
// int main()
// {
//     int a = 0;
//     int b = 0;
//     int sum = 0;
//     scanf("%d %d", &a, &b);
//     sum = a + b;
//     printf("sum = %d\n", sum);

//     return 0;
// }

// int main()
// {
//     int arr[10] = {0};

//     for (int i = 0; i < 10; i++)
//     {
//         scanf("%d", &arr[i]);
//     }

//     int max = arr[0];
//     for (int i = 1; i < 10; i++)
//     {
//         if (arr[i] > max)
//         {
//             max = arr[i];
//         }
        
//     }
//     printf("最大的数是%d", max);

//     return 0;
// }

// int main()
// {
//     int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//     // 打印
//     // for (int i = 0; i < 10; i++)
//     // {
//     //     printf("%d ", arr[i]);
//     // }
//     int *p = arr;
//     for (int i = 0; i < 10; i++)
//     {
//         printf("%d ", *p);
//         p++;
//     }
    
//     return 0;
// }
