#include <stdio.h>
#include <math.h>
int main()
{
    int arr[100][100];
    int n,d = 0;
    // nhap gia tri mang
    scanf("%d",&n);
    for (int i = 1;i <= n ;i++)
        for (int j = 1 ; j<= n;j++)
            scanf("%d",&arr[i][j]);
    //  sang nguyen to
    int nt[10000];
    nt[1] = 0;nt[0] = 0;
    for (int i = 2; i<= 9999;i++)
        nt[i] = 1;
    for (int i = 2;i < 500 ; i++)
        if (nt[i] == 1) 
            for (int j = i*2; j < 10000; j +=i) 
                nt[j] = 0;
    // cheo ma tran
    for (int i = 1;i <= n ;i++)
        for (int j = 1 ; j<= n;j++)
        {
            if   (i == j) 
                if (nt[arr[i][j]] == 1)
                    {
                        d++;
                        nt[arr[i][j]]++;
                    }
            if   (i == n-j+1 ) 
                if (nt[arr[i][j]] == 1)
                {
                    d++;
                    nt[arr[i][j]]++;
                }
        }
    printf("%d",d);
    return 0;
}