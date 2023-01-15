#include <stdio.h>
#include <string.h>

int deleteSample(char str1[], char str2[]);

int main(int argc, char const *argv[])
{
    char str1[100], str2[50];
    int i;

    printf("请输入str1：");
    scanf("%s",&str1);
    printf("请输入str2：");
    scanf("%s",&str2);
    int len = deleteSample(str1, str2);
    printf("删除后的str1的字符串：");

    for(i=0; i<len; i++){
        printf("%c",str1[i]);
    }
    return 0;
}

int deleteSample(char str1[], char str2[]){
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    int i=0, j=0,k;
    int flag=0;

    while (i<len1 && j<len2)
    {
        if(str1[i] == str2[j]){     // 查找相同位
            i++;
            j++;
        }else{
            flag++;
            i = flag;
            j = 0;
        }
        if(j == len2){       // 逻辑删除
            while (i<len1)
            {
                str1[i-len2] = str1[i];
                i++;
            }
            len1 -= len2;
            i = 0;
            j = 0;
            flag= 0;
        }
    }
    return len1;
}
