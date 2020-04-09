#include <stdio.h>

int check(int n);

int main()
{
    int n,mang[100],d=0;
    scanf("%d",&n);
    for (int i = 1; i<= n; i++)
        {
            scanf("%d",&mang[i]);
            if (check(mang[i]) == 1)
                d++;
        }
    printf("%d ",d);
    for (int i = 1; i<= n; i++)
        if (check(mang[i]) == 1)
            printf("%d ",mang[i]);

    return 0;
}
int check(int n)
{
    int t = 0,tam = n,dem = 0;
    while ( n > 0)
    {
        t = t*10 + n % 10;
        dem ++;
        n/=10;
    }
    if (dem == 1) return 0;
    if (t != tam)
        return 0;
    return 1;
}