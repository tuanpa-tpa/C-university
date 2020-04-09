#include<stdio.h>
#include<math.h>
void xuat(int n,int mang[]);

int main()
{
    int n,mang[100];
    scanf("%d",&n);
    for (int i = 1;i <=n ;i++)
            mang[i] = i;
    xuat(n,mang);
    int t = 1;
    while ( t < n)
    {
        for (int i = 1;i <=t ;i++)
            mang[i] ++;
        for (int j = t+1; j<=n; j++)
            mang[j]--;
        xuat(n,mang); 
        t++;
    }
    return 0;
}
void xuat(int n, int mang[])
{
    for (int i = 1 ; i <= n;i++)
        printf("%d ",mang[i]);
    printf("\n");
}