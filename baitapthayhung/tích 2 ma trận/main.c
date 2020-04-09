#include <stdio.h>
#include <math.h>

int check(int n);

int main()
{
    int mang1[100][100],mang2[100][100],mang3[100][100];
    
    // nhap mang
    int n,m;
    scanf("%d %d",&n,&m);
    for (int i = 1; i<= n; i++)
        for (int j = 1; j <= m;j++ )
            scanf("%d",&mang1[i][j]);

    // ma tran chuyen vi *
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m;j++ )
            mang2[j][i] = mang1[i][j];


    // nhan 2 ma tran
    int d = 0,tong = 0;
    for (int i = 1; i<= n; i++)
    {
        for (int j = 1; j <= n;j++ )
        {
            mang3[i][j] = 0;
            for(int k = 1; k <= m ;k++)
                mang3[i][j] += mang1[i][k]*mang2[k][j];
        }
    }

    // xuat ma tran    
        for (int i = 1; i<= n; i++)
        {
            for(int j = 1;j<= n;j++)
                printf("%d ",mang3[i][j]);
            printf("\n");
        }
    return 0;
}
