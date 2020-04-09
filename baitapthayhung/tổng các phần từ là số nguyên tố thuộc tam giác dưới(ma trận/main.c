#include <stdio.h>
#include <math.h>

int check(int n);

int main()
{
    int mang[100][100];
    int n, tong = 0;
    scanf("%d",&n);
    for (int i = 1; i<= n; i++)
        for (int j = 1; j <= n;j++ )
            scanf("%d",&mang[i][j]);
    for (int i = 1; i<= n; i++)
        for (int j = 1; j <= n;j++ )
            if (i >= j)
                if (check(mang[i][j]) == 1 )
                    tong += mang[i][j];
    printf("%d",tong);
    
    
    return 0;
}
int check(int n)
{
    if (n < 2) return 0;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0) return 0;
    return 1;

}