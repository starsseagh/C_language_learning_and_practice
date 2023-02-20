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

## 四、初识变量的作用域和生命周期

- 作用域
  - 局部变量的作用域：就是变量所在的局部范围
  - 全局变量的作用域：整个工程

- 生命周期：变量的创建和销毁之间的时间段
  - 局部变量的生命周期：进入局部范围生命开始，出局部范围生命结束
  - 全局变量的声明周期：整个程序的生命周期

## 五、常量

```c
int main()
{
    // 1.字面常量
    3.14;

    // 2.const修饰的常变量
    int num = 10;    // 变量
    num = 20;
    printf("num = %d\n", num);  // 20
    const int num = 10;   // num就是常变量 - 具有常属性（不能被改变）
    // num = 20;    // 报错
    const int n = 10;
    // int arr[n] = {0};   // 报错，常变量本质是变量。

    // 3.#define 定义的标识符常量
    #define MAX = 1000

    // 4.枚举常量
    // 可以一一列举的常量
    enum Sex
    {
        MALE,
        FEMALE,
        SECRET
    }
    enum Sex s = MALE;    // 只能从三个中取一个

  return 0;
}
```

## 六、字符串

```c
int main()
{
    // 字符串再结尾的位置隐藏了一个“0”结束标志
    // char arr[] = "hello";

    char arr1[] = "abc";
    char arr2[] = {'a', 'b', 'c'};

    // 求字符串的长度
    printf("%d\n", strlen(arr1));   // 3
    printf("%d\n", strlen(arr2));   // 未知

    printf("%s\n", arr1);
    printf("%s\n", arr2);   // 打印效果不一样

    
    return 0;
}
```
