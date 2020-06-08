//
//  main.c
//  Tìm ma trận tích của hai ma trận
//
//  Created by PAT on 6/7/20.
//  Copyright © 2020 PAT. All rights reserved.
//

#include <stdio.h>
#include <math.h>

int check(int n);

int main()
{
    int mang1[100][100],mang2[100][100],mang3[100][100];
    
    // ma tran 1
    int n,m;
    scanf("%d %d",&n,&m);
    for (int i = 1; i<= n; i++)
        for (int j = 1; j <= m;j++ )
            scanf("%d",&mang1[i][j]);

    // ma tran 2
    for (int i = 1; i <= m; i++)
        for (int j = 1; j <= n;j++ )
            scanf("%d",&mang2[i][j]);


    // nhan 2 ma tran
    for (int i = 1; i<= n; i++)
    {
        for (int j = 1; j <= n;j++ )
        {
            mang3[i][j] = 0;
            for(int k = 1; k <= m ;k++)
                mang3[i][j] += mang1[i][k]*mang2[k][j];
        }
    }

    // xuat ma tran
        for (int i = 1; i<= n; i++)
        {
            for(int j = 1;j<= n;j++)
                printf("%d ",mang3[i][j]);
            printf("\n");
        }
    return 0;
}
