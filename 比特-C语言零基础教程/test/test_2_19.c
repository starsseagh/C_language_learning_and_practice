# include<stdio.h>

// 作用域和生命周期
// 局部变量的作用域：就是变量所在的局部范围
// 全局变量的作用域：整个工程

// 声明外部变量
// extern int g_val;

// int main()
// {
//     printf("%d\n", g_val);

//     return 0;
// }

// 生命周期
// 变量的生命周期：变量的创建和销毁之间的时间段
// 局部变量的生命周期：进入局部范围生命开始，出局部范围生命结束
// 全局变量的声明周期：整个程序的生命周期

// int main()
// {
//     // 字符串再结尾的位置隐藏了一个“0”结束标志
//     // char arr[] = "hello";

//     char arr1[] = "abc";
//     char arr2[] = {'a', 'b', 'c'};

//     // 求字符串的长度
//     printf("%d\n", strlen(arr1));   // 3
//     printf("%d\n", strlen(arr2));   // 未知

//     printf("%s\n", arr1);
//     printf("%s\n", arr2);   // 打印效果不一样

    
//     return 0;
// }

// int main()
// {
//     printf("%c\n", '\130');     // 8进制130
//     // X  -- ASCII码值是88
//     printf("%c\n", '\x30');     // 48是字符'0'

//     printf("%d\n", strlen("c:\test\328\test.c"));   // 长度为14

//     return 0;
// }

int main()
{
    // int a = 10;      // C++注释风格
    /*
    int b =0;
    */
   // C语言注释风格 - 不支持嵌套注释

    return 0;
}