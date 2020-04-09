#include <stdio.h>

int main()
{
    int n;
    int d = 1,mang[100][100];
    scanf("%d",&n);
    int index=1,tam = n;
    while (index < n*n)
    {
        for (int i = d; i <= tam;i++)
            mang[d][i] = index++;
        for (int i = d+1; i<= tam;i++)
            mang[i][tam] = index++;
        for (int i = tam -1; i >= d;i--)
            mang[tam][i] = index++;
        for (int i = tam - 1; i>= d+1;i--)
            mang[i][d] = index++;
        d++; tam--;
    }
    
    if (n % 2 != 0)
        mang[n/2+1][n/2+1] = n*n;
    // xuat mang
    for (int i = 1; i <= n ;i++)
        {
            for (int j = 1;j <=n;j++)
                printf("%d ",mang[i][j]);
            printf("\n");
        }
    return 0;
}