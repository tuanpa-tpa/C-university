#include <stdio.h>
#include <math.h>

int check(int n);

int main()
{
    int mang1[100][100],mang2[100];
    
    // nhap mang
    int n;
    int min;
    scanf("%d",&n);
    for (int i = 1; i<= n; i++)
        for (int j = 1; j <= n;j++ )
            scanf("%d",&mang1[i][j]);
    for (int i = 1;i<=n ;i++)
        min += mang1[i][1];
        min++;
    // xoa bo cot
    int tong1 = 0,cuoi1;
    for (int i = 1; i<= n; i++)
        {
            for (int j = 1; j <= n;j++ )
                tong1 += mang1[j][i];
            if (tong1 < min)
                {
                    min = tong1;
                    cuoi1 = i;
                }
        }    
    for (int i = 1; i<= n; i++)
        mang2[i] = mang1[i][cuoi1];

    // xuat ma tran    
    printf("%d\n",cuoi1);
        for (int i = 1; i<= n; i++)
            printf("%d ",mang2[i]);
    return 0;
}
