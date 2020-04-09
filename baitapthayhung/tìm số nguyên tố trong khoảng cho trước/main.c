#include<stdio.h>
int main()
{
    int check[1000];
    check[0] = 0;
    check[1] = 0;
    for (int i = 2; i < 1000 ; i++)
        check[i] = 1;
    int d,c,n = 1000;
    scanf("%d",&d);
    scanf("%d",&c);
    for (int i = 2; i <= c;i++)
        if (check[i] ==  1)
            for (int j = i*2; j <= n ; j+= i)
            {
                check[j] = 0;
            };
    for (int i = d; i <= c; i++)
        if (check[i] ==  1)
            printf("%d ", i);
    return 0;
}