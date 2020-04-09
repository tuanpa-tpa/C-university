#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    int n,mang[100][100];
    scanf("%d",&n);
    for (int i = 1; i<=n;i++)
    for (int j = 1; j<=n;j++)
        mang[i][j] = 0;
    int index = 65,r = 1;
    while ( r <= n)
    {
        for (int i = r ; i <= n; i++)
            mang[i][r] = index++;
        r++;
    }
    for (int i = 1; i<=n;i++)
    {
        for (int j = 1; j<=n;j++)
            if (mang[i][j] != 0)
            printf("%c ", mang[i][j]);
        printf("\n");
    }
        return 0;
}