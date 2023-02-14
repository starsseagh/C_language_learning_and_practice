# 比特-C语言零基础教程

## 一、第一个C语言项目

```c
#include <stdio.h>

// 写代码
// 首先写出主函数（main函数）
// 如何执行？ - C语言是从主函数的第一行开始执行的
// 所以C语言代码中得有main函数-入口

int main()
{
    /* code */
    printf("比特");
    return 0;
}
```

## 二、初识数据类型

```c
#include <stdio.h>

// sizeof()返回对象的长度（字节）
int main()
{
    printf("%d\n", sizeof(char));
    printf("%d\n", sizeof(short));
    printf("%d\n", sizeof(int));
    printf("%d\n", sizeof(long));
    printf("%d\n", sizeof(long long));
    printf("%d\n", sizeof(float));
    printf("%d\n", sizeof(double));
}
```

## 三、初识常量和变量

变量的分类：  
局部变量  
全局变量

```c
// scanf函数是输入函数
int main()
{
    int a = 0;
    int b = 0;
    int sum = 0;
    scanf("%d %d", &a, &b);
    sum = a + b;
    printf("sum = %d\n", sum);

    return 0;
}
```
