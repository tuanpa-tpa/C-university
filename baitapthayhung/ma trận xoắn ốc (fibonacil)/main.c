#include <stdio.h>

int main()
{
    int n;
    int d = 1,mang[100][100],fibo[500];
    scanf("%d",&n);

    // fibonacil
    fibo[1] = 0;
    fibo[2] = 1;
    fibo[3] = 1;
    int dem = n*n;
    for (int i = 4 ; i <= n*n; i++ )
        {
            fibo[i] = fibo[i-1]+fibo[i-2];
        }

    // ma tran xoan oc
    int index=1,tam = n;
    while (index < n*n)
    {
        for (int i = d; i <= tam;i++)
            mang[d][i] = fibo[index++];
        for (int i = d+1; i<= tam; i++)
            mang[i][tam] = fibo[index++];
        for (int i = tam-1; i>= d; i--)
            mang[tam][i] = fibo[index++];
        for (int i = tam-1; i>=d+1;i--)
            mang[i][d] = fibo[index++];
        d++; tam--;
    }
    
    if (n % 2 != 0)
        mang[n/2+1][n/2+1] = fibo[n*n];

    // xuat mang
    for (int i = 1; i <= n ;i++)
        {
            for (int j = 1;j <=n;j++)
                printf("%d ",mang[i][j]);
            printf("\n");
        }

    // for (int i = 1; i<= n*n ; i++)
    //     printf("%d ",fibo[i]);
    return 0;
}