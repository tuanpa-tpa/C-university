#include<stdio.h>

int main()
{
    int n,i = 2,mang[100];
    scanf("%d",&n);
    int d = 0;
    while(n >= 2)
    {
        if ( n % i == 0 )
        {
            d++;
            mang[d] = i;
            n /= i;
        }
        else
            i++;
    }
    for (int i = 1; i< d; i++)
    {
        printf("%dx",mang[i]);
    }
    printf("%d",mang[d]);
    return 0;
}