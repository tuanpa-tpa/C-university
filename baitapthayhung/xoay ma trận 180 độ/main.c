#include <stdio.h>
#include <math.h>

int main()
{
    int mang1[100][100],mang3[100][100];
    
    // nhap mang
    int n;
    scanf("%d",&n);
    for (int i = 1; i<= n; i++)
        for (int j = 1; j <= n;j++ )
            scanf("%d",&mang1[i][j]);

    // xu ly bai toan
    int r =1;  
    for (int i = 1;i<= n;i++)
    for (int j = 1; j<= n;j++)
        mang3[i][j] = mang1[n-i+1][n-j+1];
    // xuat mang
    for (int i = 1; i<= n; i++)
    {
        for (int j = 1; j <= n;j++ )
            printf("%d ",mang3[i][j]);
        printf("\n");
    }
    return 0;
}