#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

void function_1(void);
void function_2(void);

int main(int argc, char *argv[])
{
    function_1();
    printf("%s","-----------分割线----------\n");
    function_2();
    // system("pause");
    return 0;
}

void function_1(void)
{
    printf("signed char min=%d, signed char max=%d\n", SCHAR_MIN, SCHAR_MAX);
    printf("unsigned char max=%u\n", UCHAR_MAX);
    printf("signed short min=%d, sighed short max=%d\n", SHRT_MIN, SHRT_MAX);
    printf("unsigned short max=%u\n", USHRT_MAX);
    printf("signed int min=%d, sighed int max=%d\n", INT_MIN, INT_MAX);
    printf("unsigned int max=%u\n", UINT_MAX);
    printf("signed long min=%d, sighed long max=%d\n", LONG_MIN, LONG_MAX);
    printf("unsigned long max=%u\n", ULONG_MAX);
}

void function_2(void)
{
    int j;                                            // 定义对比变量
    unsigned int k;                                   // 需要注意int和long类型在有unsigned前缀时，整数值范围要超过有符号的
    unsigned long m;

    signed char sc_i;
    unsigned char uc_i;
    signed short ss_i;
    unsigned short us_i;
    signed int si_i;
    unsigned int ui_i;
    signed long sl_i;
    unsigned long ul_i;

    for (sc_i=1, j=0; sc_i==j+1; sc_i++, j++);
    printf("signed char max=%d, ", j);
    for (sc_i=-1, j=0; sc_i==j-1; sc_i--, j--);
    printf("signed char min=%d\n", j);
    for (uc_i=1, j=0; uc_i==j+1; uc_i++, j++);
    printf("unsigned char max=%u\n", j);             // 需要注意无符号输出的格式为%u
    
    for (ss_i=1, j=0; ss_i==j+1; ss_i++, j++);
    printf("signed short max=%d, ", j);
    for (ss_i=-1, j=0; ss_i==j-1; ss_i--, j--);
    printf("signed short min=%d\n", j);
    for (us_i=1, j=0; us_i==j+1; us_i++, j++);
    printf("unsigned short max=%u\n", j);

    for (si_i=1, j=0; si_i>j; si_i++, j++);
    printf("signed int max=%d, ", j);
    for (si_i=-1, j=0; si_i<j; si_i--, j--);
    printf("signed int min=%d\n", j);
    for (ui_i=1, k=0; ui_i>k; ui_i++, k++);
    printf("unsigned int max=%u\n", k);

    for (sl_i=1, j=0; sl_i>j; sl_i++, j++);
    printf("signed long max=%d, ", j);
    for (sl_i=-1, j=0; sl_i<j; sl_i--, j--);
    printf("signed int min=%d\n", j);
    for (ul_i=1, m=0; ul_i>m; ul_i++, m++);
    printf("unsigned int max=%u\n", m);
}