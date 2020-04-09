#include <stdio.h>
#include <math.h>

int check(int n);

int main()
{
    int mang1[100][100],mang3[100][100],mang2[100][100];
    int n,m;
    scanf("%d %d",&n,&m);
    for (int i = 1; i<= n; i++)
        for (int j = 1; j <= m;j++ )
            scanf("%d",&mang1[i][j]);
    for (int i = 1; i<= n; i++)
        for (int j = 1; j <= m;j++ )
            scanf("%d",&mang2[i][j]);
    for (int i = 1; i<= n; i++)
        for (int j = 1; j <= m;j++ )
            mang3[i][j] = mang1[i][j] + mang2[i][j];
    for (int i = 1; i<= n; i++)
        {
        for (int j = 1; j <= n;j++ )
            {
                printf("%d ",mang3[i][j]);
            }
        printf("\n");
        }
    return 0;
}
