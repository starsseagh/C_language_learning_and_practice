# 比特-C语言零基础教程

## 第一个C语言项目

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

## 初识数据类型

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

## 初识常量和变量

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

## 初识变量的作用域和生命周期

- 作用域
  - 局部变量的作用域：就是变量所在的局部范围
  - 全局变量的作用域：整个工程

- 生命周期：变量的创建和销毁之间的时间段
  - 局部变量的生命周期：进入局部范围生命开始，出局部范围生命结束
  - 全局变量的声明周期：整个程序的生命周期

## 常量

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

## 字符串

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

## 转义字符

```c
int main()
{
    printf("%c\n", '\130');     // 8进制130
    // X  -- ASCII码值是88
    printf("%c\n", '\x30');     // 48是字符'0'

    printf("%d\n", strlen("c:\test\328\test.c"));   // 长度为14

    return 0;
}
```

## 注释

注释用来解释复杂代码。

```c
int main()
{
    // int a = 10;      // C++注释风格
    /*
    int b =0;
    */
   // C语言注释风格 - 不支持嵌套注释

    return 0;
}
```

## 关键字

static

- 修饰局部变量
  - 改变了局部变量的生命周期（本质是改变了变量的存储类型）
  - 栈区：局部变量、函数的参数
  - 堆区：动态内存分配的
  - 静态区：全局变量、static修饰的静态变量
- 修饰全局变量
  - 使全局变量只能在自己所在的源文件（.c）内部可以使用，其它源文件不能使用！
  - 全局变量，在其它源文件内部可以使用，是因为全局变量具有外部连接属性
  - 被static修饰后，变成了内部连接属性，其它源文件连接不到
- 修饰函数
  - static修饰函数，与全局变量类似。

## 指针

```c
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
```

## 结构体

```c
// 结构体可以让C语言创建新的类型出来
// 创建一个学生类型
struct Stu
{
    char name[20];  // 成员变量
    int age;
    double score;
};

// 创建一个书的类型
struct Book
{
    char name[20];
    float price;
    char id[30];
};


int main()
{
    struct Stu s = {"张三", 20, 85.5};  // 结构体的创建和初始化
    printf("1: %s %d %lf\n", s.name, s.age, s.score);  //结构体变量.成员变量

    struct Stu * ps = &s;
    printf("2: %s %d %lf\n", (*ps).name, (*ps).age, (*ps).score);

    printf("3: %s %d %lf\n", ps->name, ps->age, ps->score); // 结构体指针->成员变量名

    return 0;
}
```
