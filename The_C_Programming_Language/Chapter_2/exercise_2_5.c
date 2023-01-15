/*  编写函数any(s1, s2),将字符串s2中的任一字符在字符串s1中第一次出现的位置作为结果返回。
    如果s1中不包含s2中的字符，则返回-1。
 */
#include <stdio.h>

int any(char *s1, char *s2);

int main(int argc, char const *argv[])
{
    char s1[20], s2[20];
    printf("请输入字符串s1:");
    gets(s1);
    printf("请输入字符串s2:");
    gets(s2);

    int pos;
    pos = any(s1, s2);
    printf("第一次出现的位置是:%d\n", pos);
    return 0;
}

int any(char *s1, char *s2)
{
    int pos = -1;
    int i = 0;
    char *s;
    while (*s1 != '\0')
    {
        s = s2;
        while (*s != '\0')
        {
            if(*s1 == *s){
                pos = i+1;
                return pos;
            }
            s++;
        }
        s1++;
        i++;
    }
    return pos;
}
