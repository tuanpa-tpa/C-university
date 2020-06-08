//
//  main.c
//  Tìm ma trận hiệu của hai ma trận
//
//  Created by PAT on 6/7/20.
//  Copyright © 2020 PAT. All rights reserved.
//

#include <stdio.h>
#include <math.h>

int main()
{
    int mang1[200][200],mang2[200][200];
    int n,m;
    scanf("%d %d",&n,&m);
    for (int i = 1; i<= n; i++)
        for (int j = 1; j <= m;j++ )
            scanf("%d",&mang1[i][j]);
    for (int i = 1; i<= n; i++)
        for (int j = 1; j <= m;j++ )
            scanf("%d",&mang2[i][j]);
    for (int i = 1; i<= n; i++){
        for (int j = 1; j <= m;j++){
                printf("%d ",mang1[i][j] - mang2[i][j]);
        }
        printf("\n");
    }
    return 0;
}
