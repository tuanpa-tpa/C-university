//Ma trận xoáy ốc ngược cấp N là ma trận vuông có N*N phần tử. Các số được điền vào ma trận trận theo chiều kim đồng hồ theo thứ tự giảm dần về 1
//INPUT
//3
//OUTPUT
//9 8 7
//2 1 6
//3 4 5
//  main.c
//  Ma trận xoắn ốc ngược
//
//  Created by PAT on 6/13/20.
//  Copyright © 2020 PAT. All rights reserved.
//

#include <stdio.h>

int main()
{
    int n;
    int d = 1,mang[100][100];
    scanf("%d",&n);
    int index=n*n, tam = n;
    while (index > 0)
    {
        for (int i = d; i <= tam;i++)
            mang[d][i] = index--;
        for (int i = d+1; i<= tam;i++)
            mang[i][tam] = index--;
        for (int i = tam -1; i >= d;i--)
            mang[tam][i] = index--;
        for (int i = tam - 1; i>= d+1;i--)
            mang[i][d] = index--;
        d++; tam--;
    }
    
    if (n % 2 != 0)
        mang[n/2+1][n/2+1] = 1;
    // xuat mang
    for (int i = 1; i <= n ;i++)
        {
            for (int j = 1;j <=n;j++)
                printf("%d ",mang[i][j]);
            printf("\n");
        }
    return 0;
}
