#include <stdio.h>
#include <math.h>

int check(int n);

int main()
{
    int mang1[100][100];
    
    // nhap mang
    int n;
    scanf("%d",&n);
    for (int i = 1; i<= n; i++)
        for (int j = 1; j <= n;j++ )
            scanf("%d",&mang1[i][j]);

    // tim max

    int max = 0,tong,dau,j;

    j = n;
    while (j >= 1)
    {
    for (int i = 1; i<= n; i++)
        {
            tong = 0;    
                tong += mang1[i][j];
            if (tong > max)
                {
                    max = tong;
                    dau = j;
                }
        }
        j--;
    }
    //    
        printf("%d\n",dau);
        for (int j = 1; j <= n;j++ )
            {
              printf("%d ",mang1[j][dau]);
            }
    return 0;
}
