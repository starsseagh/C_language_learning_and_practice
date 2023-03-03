# include<stdio.h>

int main()
{
    int m = 0;
    int n = 0;
    scanf("%d%d", &m, &n);
    int t = 0;
    while (t=m%n)
    {
        m = n;
        n = t;
    }
    printf("最大公约数为：%d", n);

    return 0;
}