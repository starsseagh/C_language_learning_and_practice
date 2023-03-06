#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

// int main()
// {
//     int m = 0;
//     int n = 0;
//     scanf("%d%d", &m, &n);
//     int t = 0;
//     while (t=m%n)
//     {
//         m = n;
//         n = t;
//     }
//     printf("最大公约数为：%d", n);

//     return 0;
// }

// 判断1000-2000的闰年
// int main()
// {
//     int i = 0;
//     int count = 0;
//     for ( i = 1000; i <= 2000; i++)
//     {
//         // 判断i是不是闰年
//         // 1.能被4整除，不能被100整除是闰年
//         // 2.能被400整除是闰年
//         // if (i%4 == 0 && i%100 != 0)
//         // {
//         //     printf("%d ", i);
//         //     count++;
//         // }
//         // if (i%400 == 0)
//         // {
//         //     printf("%d ", i);
//         //     count++;
//         // }
//         if ((i%4 == 0 && i%100 != 0) || i%400 == 0)
//         {
//             printf("%d ", i);
//             count++;
//         }
//     }
//     printf("\ncount = %d\n", count);

//     return 0;
// }

// 打印100-200之间的素数
// 若 i = m*n, 则m和n至少有一个小于等于i的开平方
// 偶数不可能是素数
// int main()
// {
//     int i = 0;
//     int count = 0;

//     for (i = 101; i < 200; i+=2)
//     {
//         // 判断i是否为素数
//         int j = 0;
//         int flag = 1; // 假设i为素数
//         for (j = 2; j <= sqrt(i); j++)
//         {
//             if (i % j == 0)
//             {
//                 flag = 0; // 不是素数
//                 break;
//             }
//         }

//         if (flag)
//         {
//             printf("%d ", i);
//             count++;
//         }
//     }
//     printf("\ncount=%d\n", count);

//     return 0;
// }

// shutdown -s -t 60    一分钟后关机
// shutdown -a  取消关机
// C语言中提供了一个函数：system() - 执行系统命令

// int main()
// {
//     char input[20] = {0};
//     system("shutdown -s -t 60");

// again:
//     printf("请注意，你的电脑将在1分钟后关机。输入：我是猪，取消关机\n");
//     scanf("%s", input);
//     if (strcmp(input, "我是猪") == 0)
//     {
//         system("shutdown -a");
//     }
//     else
//     {
//         goto again;
//     }

//     return 0;
// }

// goto 语句适用于多层嵌套结构跳到指定位置。不可以跨函数跳转。