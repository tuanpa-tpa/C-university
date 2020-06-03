//Viết chương trình nhập mảng n phần tử số nguyên. Tìm khoảng cách nhỏ nhất của hai phần tử bất kỳ trong mảng. (Nếu có nhiều hơn 1 cặp phần tử thỏa mãn thì in cặp có phần tử xuất hiện đầu tiên)
//INPUT
//6
//1 5 3 19 18 25
//OUTPUT
//1 18 19
//  main.c
//  Tìm khoảng cách nhỏ nhất giữa 2 phần tử bất kỳ
//
//  Created by PAT on 5/20/20.
//  Copyright © 2020 PAT. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n,mang[1000];
    // nhap mang
    scanf("%d",&n);
    for (int i = 1;i <=n; i++)
        scanf("%d",&mang[i]);
    // xu li bai toan
    int min = abs(mang[2] - mang[1]),dau = 1,cuoi = 2;
    for (int i = 1; i < n; i++)
        for (int j = i+1 ;j <=n ;j++)
        {
            if ( (abs(mang[j] - mang[i])  < min))
                {
                    min = abs(mang[j] - mang[i]);
                    dau = i;
                    cuoi = j;
                }
          }
    if (mang[dau] > mang[cuoi])
        {
            int t = dau;
            dau = cuoi;
            cuoi = t;
        }
    printf("%d %d %d",mang[cuoi]-mang[dau],mang[dau],mang[cuoi]);
    return 0;
}

