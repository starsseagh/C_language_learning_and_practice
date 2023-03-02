# include<stdio.h>
# include<string.h>
# include<windows.h>
# include<stdlib.h>
# include<time.h>

// int main()
// {
//     char arr1[] = "welcome to bit!!!!!!";
//     char arr2[] = "####################";
//     int left = 0;
//     int right = strlen(arr1) - 1;

//     while (left <= right)
//     {
//         arr2[left] = arr1[left];
//         arr2[right] = arr1[right];
//         Sleep(1000);    // 睡眠1秒
//         system("cls");  // 清空屏幕
//         printf("%s\n", arr2);
//         left++;
//         right--;
//     }
    
//     return 0;
// }

// int main()
// {
//     int i = 0;
//     // 假设正确的密码是字符串“123456”

//     char password[20] = {0};

//     for ( i = 0; i < 3; i++)
//     {
//         printf("请输入密码:>");
//         scanf("%s", &password);
//         // if (password == "123456")    // err - 两个字符串比较，不能使用==
//         if (strcmp(password, "123456") == 0)
//         {
//             printf("登录成功\n");
//             break;
//         }
//         else{
//             printf("密码错误，重新输入！\n");
//         }
        
//     }
//     if (i == 3)
//     {
//         printf("错误3次，无法再次输入。");
//     }
    
//     return 0;
// }

void game()
{
    // 猜数字游戏的实现
    // 1.生成随机数
    // rand函数返回了一个0-32767之间的数字    

    int ret = rand()%100 + 1;   // 范围1-100
    // printf("%d\n", ret);

    // 2.猜数字
    int guess = 0;
    while (1)
    {
        printf("请猜数字:>");
        scanf("%d", &guess);
        if (guess < ret)
        {
            printf("猜小了\n");
        }
        else if (guess > ret)
        {
            printf("猜大了\n");
        }
        else
        {
            printf("恭喜你，猜对了\n");
            break;
        }
    }
}

void menu()
{
    printf("******************************************\n");
    printf("****************  1. play  ***************\n");
    printf("****************  0. exit  ***************\n");
    printf("******************************************\n");
}

int main()
{
    int input = 0;
    // 时间 - 时间戳
    srand((unsigned int)time(NULL));

    do
    {
        menu();     // 打印菜单
        printf("请选择:>");
        scanf("%d", &input);
        switch (input)
        {
        case 1:
            game();
            break;
        case 0:
            printf("退出游戏\n");
            break;
        default:
            printf("选择错误，重新选择\n");
            break;
        }
    } while (input);
       
    return 0;
}