#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n,mang[100];
    // nhap mang
    scanf("%d",&n);
    for (int i = 1;i <=n; i++)
        scanf("%d",&mang[i]);
    // xu li bai toan
    int d = 0;
    int min = abs(mang[2] - mang[1]),dau,cuoi;
    for (int i = 1; i < n; i++)
        for (int j = i+1 ;j <=n ;j++)
            if ( abs((mang[j] - mang[i]))  < min)
                {
                    min = abs(mang[j] - mang[i]);
                    dau = i;
                    cuoi = j;
                }
    for (int i = 1; i < n; i++)
        for (int j = i+1 ;j <=n ;j++)
            if (abs((mang[j] - mang[i]))  == min)
                {
                    d++;
                }
    if (mang[dau] > mang[cuoi])
        {
            int t = dau;
            dau = cuoi;
            cuoi = t;
        }
    printf("%d %d %d",d,mang[dau],mang[cuoi]);
    return 0;
}
