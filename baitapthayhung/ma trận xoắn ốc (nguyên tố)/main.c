#include<stdio.h>
#include<math.h>

int main()
{
    int mang[100][100],n;
    scanf("%d",&n);
    int tam = n;
    //  lap mang nguyen to
    int index = 0;
    int sangnt[1000],mangchua[1000];
    for (int i = 2 ; i <= 1000; i++)
        sangnt[i] = 1;
    for (int i = 2; i <= 500; i++)
        if (sangnt[i] != 0)
        for (int j = i*2; j <= 1000; j+=i)
            sangnt[j] = 0;
    for (int i = 2;i <= 1000;i++)
    if (sangnt[i] == 1)
        {
            index++;
            if (index > n*n)  break;
            mangchua[index] = i;
        }
    index--;
    // ma tran xoan oc
    int dem = 1,d = 1;

    while (dem < index-1)
    {
        for (int i = d; i<= tam; i++)
            mang[d][i] = mangchua[dem++];
        for (int i = d+1; i<= tam; i++)
            mang[i][tam] = mangchua[dem++];
        for (int i = tam -1; i >= d; i--)
            mang[tam][i] = mangchua[dem++];
        for (int i = tam -1; i >= d+1; i--)
            mang[i][d] = mangchua[dem++];
        tam --; d++;
    }
    if (n % 2 != 0)
        mang[n/2+1][n/2+1] = mangchua[index];
    for (int i = 1; i<= n; i++)
        {
            for (int j = 1; j<= n; j++)
                printf("%d ",mang[i][j]);
            printf("\n");
        }
    return 0;
}