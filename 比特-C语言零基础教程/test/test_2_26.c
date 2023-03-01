#include <stdio.h>

// int main()
// {
//     int day = 0;
//     scanf("%d", &day);

//     switch (day)
//     {
//     case 1:
//         printf("星期一\n");
//         break;
//     case 2:
//         printf("星期二\n");
//         break;
//     case 3:
//         printf("星期三\n");
//         break;
//     case 4:
//         printf("星期四\n");
//         break;
//     case 5:
//         printf("星期五\n");
//         break;
//     case 6:
//         printf("星期六\n");
//         break;
//     case 7:
//         printf("星期天\n");
//         break;

//     default:
//         printf("输入错误\n");
//         break;
//     }
// }

/* getchar和scanf输入函数从缓冲区读取 */
// int main()
// {
//     char password[20] = {0};
//     printf("请输入密码:>");
//     scanf("%s", password);  // 数组的数组名本身是地址
//     printf("请确认密码(Y/N):>");
//     // 清理缓冲区
//     // getchar();  // 处理缓冲区中scanf没有拿走的'\n'
//     // 清理缓冲区中多余字符
//     int tmp = getchar();
//     while ((tmp = getchar()) != '\n');
    
//     int ch = getchar();
//     if (ch == 'Y')
//     {
//         printf("确认成功\n");
//     }
//     else
//     {
//         printf("确认失败\n");
//     } 

//     return 0;
// }

int main()
{
    // int i = 1;
    // do
    // {
    //     printf("%d ", i);
    //     i++;    
    // } while (i <= 10);

    // int n = 0;
    int i = 0;
    int pow = 1;
    int sum = 0;
    // scanf("%d", &n);

    // for (n = 1; n <= 10; n++)
    // {
    //     pow = 1;    // 计算n的阶乘之前，把ret初始为1
    //     for (i = 1; i <= n; i++)
    //     {
    //         pow *= i;
    //     }
    //     sum += pow;
    // }

    for ( i = 1; i <= 10; i++)
    {
        pow *= i;
        sum += pow;
    }
    
    

    
    printf("%d\n", sum);
    
    return 0;
}