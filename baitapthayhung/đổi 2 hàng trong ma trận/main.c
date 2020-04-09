#include <stdio.h>
#include <math.h>

int main()
{
    int mang1[100][100],mang2[100],mang3[100];
    
    // nhap mang
    int n,m;
    scanf("%d%d",&n,&m);
    for (int i = 1; i<= n; i++)
        for (int j = 1; j <= m;j++ )
            scanf("%d",&mang1[i][j]);
    int dau,cuoi;
    scanf("%d%d",&dau,&cuoi);
    // xu ly bai toan
    for (int i = 1; i<= n; i++)
        {
            if (i == dau)
                for (int j = 1; j <= m;j++ )
                mang2[j] = mang1[i][j]; 
            if (i == cuoi)
                for (int j = 1; j <= m;j++ )
                mang3[j] = mang1[i][j]; 
        }

    // xuat mang
    for (int i = 1; i<= n; i++)
    {

        if (i == dau)
            for (int j = 1; j <= m;j++ )
                printf("%d ",mang3[j]);
        else if (i == cuoi)
            for (int j = 1; j <= m;j++ )
                printf("%d ",mang2[j]);
        else for (int j = 1; j <= m;j++ )
            printf("%d ",mang1[i][j]);
        printf("\n");
    }
    return 0;
}