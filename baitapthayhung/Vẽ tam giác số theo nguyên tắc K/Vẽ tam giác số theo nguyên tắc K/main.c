//Viết chương trình C cho phép nhập vào chiều cao (số hàng) của tam giác và thực hiện in ra tam giác số theo nguyên tắc tương ứng.
//INPUT
//5
//OUTPUT
//1
//2 6
//3 7 10
//4 8 11 13
//5 9 12 14 15
//  main.c
//  Vẽ tam giác số theo nguyên tắc K
//
//  Created by PAT on 5/9/20.
//  Copyright © 2020 PAT. All rights reserved.
//

#include <stdio.h>
#include <math.h>
int main(int argc, const char * argv[]) {
    int n,mang[100][100] = {0};
    scanf("%d",&n);
        int index = 1,r = 1;
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
                printf("%d ", mang[i][j]);
            printf("\n");
        }
            return 0;
    }

