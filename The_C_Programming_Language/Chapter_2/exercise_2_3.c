#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int htoi(char *s);

int main(int argc, char const *argv[])
{
    char *s;    //保存输入的十六进制数
    int dec;    //保存十进制数
    int i;
    //给指针分配空间
    s = (char*)malloc(10*sizeof(char));
    //输入十六进制数，前缀为0x/0X
    //进行三次转换
    for(i=0; i<3; i++)
    {
        printf("请输入十六进制数：");
        scanf("%s", s);
        dec = htoi(s);
        printf("对应的十进制数：%d\n",dec);
    }
    return 0;
}

int htoi(char *s)
{
    int i, j, digit;
    int dec = 0;
    for(i=2; *(s+i) != '\0'; i++)
        ;
    digit = i-2;
    j = i;
    for(i=2; i<j; i++)
    {
        if(*(s+i) >= 48 && *(s+i) <= 57)
            dec = dec+(int)((*(s+i) - 48)*pow(16.0, digit-1));
        else if(*(s+i) >= 65 && *(s+i) <= 70)
            dec = dec+(int)((*(s+i) - 65 + 10)*pow(16.0, digit-1));
        else if(*(s+i) >= 97 && *(s+i) <= 102)
            dec = dec+(int)((*(s+i) - 97 + 10)*pow(16.0, digit-1));
        else
            printf("out of range!");
        digit--;
    }
    return dec;
}
