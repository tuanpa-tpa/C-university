#include<stdio.h>

int test(int n);
int main()
{
    int d,c,t = 0;
    scanf("%d",&d);
    scanf("%d",&c);
    for (int i = d; i<=c ;i++)
    {
        if ( test(i) == i )
        {
            if (i > 1)
            printf("%d ",i);
            t++;
        };
    } 
    if (t == 0)
        printf("0");
    return 0;
}

int test(int n)
{
    int d = 1;
    for (int i = 2; i < n ;i++)
        if (n % i == 0)
            d += i;
    return d;
}