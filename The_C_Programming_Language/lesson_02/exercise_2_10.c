/*
 * @Date: 2023-01-15 17:51:46
 * @LastEditTime: 2023-01-15 18:10:46
 * @Description: 重新编写将大写字母转换为小写字母的函数lower，并用条件表达式替代其中的if-else结构。
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void input(char s[]);
void lower(char s[]);

int main(int argc, char const *argv[])
{
    char s[100];
    input(s);
    lower(s);
    return 0;
}

void input(char s[]){
    printf("Please enter string: ");
    gets(s);
}

void lower(char s[]){
    int i;
    for(i=0; s[i]!='\0'; i++)
        (s[i]>='A' && s[i]<='Z') ? s[i]+=32 : s[i];
    printf("New String: ");
    puts(s);
}
