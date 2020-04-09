#include <stdio.h>

int check(int n);
int gt(int n);

int main()
{
    int a,b,d = 0;
    scanf("%d%d",&a,&b);
    if (a > b)
        {
            int t = a;
            a = b;
            b = t;
        }
    for (int i = a; i <=b ;i++)
        if (check(i) == 1)
            {
                printf("%d ",i);
                d = 1;
            }
    if (d == 0)
     printf("0");
    return 0;
}
int check(int n)
{
    int tong = 0,tam = n;
    while (n > 0)
    {
        tong += gt(n%10);
        n /= 10;
    }
    if (tong == tam)
        return 1;
    return 0;
}
int gt(int n)
{
    int tong = 1;
    if (n == 0) return 1;
    for (int i = 1; i<=n; i++)
        tong *= i;
    return tong;
}