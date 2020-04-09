#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int mang[100][100];
    int r = 0,n;
    int index = 1;
    scanf("%d",&n);
    while (index < n*n) {
        for (int i = r; i< n-r-1; i++)
            mang[r][i] = index++;
        for (int i = r; i < n-r-1; i++)
            mang[i][n-r-1] = index++;
        for (int i = n-r-1; i >= r+1; i--)
            mang[n-r-1][i] = index++;
        for (int i = n-r-1; i >= r+1; i--)
            mang[i][r] = index++;
        r++;
    }
    
    
    if (n % 2 != 0)
        mang[n/2][n/2] = n*n;
    for (int i = 0; i < n ;i++)
    {
        for (int j = 0; j < n; j++)
            printf("%d ",mang[i][j]);
        printf("\n");
    }
    return 0;
}
