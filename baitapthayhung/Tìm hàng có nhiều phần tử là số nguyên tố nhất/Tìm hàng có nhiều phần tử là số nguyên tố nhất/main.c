//Viết chương trình C cho phép nhập vào ma trận vuông cấp n (n>1). Thực hiện tìm hàng có nhiều phần tử là số nguyên tố nhất. Nếu có nhiều hơn một hàng thỏa mãn thì in ra hàng đầu tiên.
//Trong đó:
//INPUT
//- Dòng đầu tiên là cấp của ma trận
//- Các dòng tiếp theo là các phần tử của ma trận
//OUTPUT
//- Dòng đầu tiên là số thứ tự hàng thỏa mãn
//- Dòng thứ hai liệt kê các phần tử thỏa mãn
//
//INPUT
//4
//8 2 3 4
//5 6 7 8
//9 10 11 12
//13 14 15 16
//OUTPUT
//1
//2 3
//  main.c
//  Tìm hàng có nhiều phần tử là số nguyên tố nhất
//
//  Created by PAT on 6/7/20.
//  Copyright © 2020 PAT. All rights reserved.
//

#include <stdio.h>
#include <math.h>
int checkNT(int n){
    if (n < 2) return 0;
    for (int i = 2; i<= sqrt(n); i++){
        if (n % i == 0) return 0;
    }
    return 1;
}

int main()
{
    int mang1[100][100],mang2[100][100] = {0};
    
    // nhap mang
    int n;
    int max =-1,vt =0;
    scanf("%d",&n);
    for (int i = 1; i<= n; i++){
        for (int j = 1; j <= n;j++ ){
            scanf("%d",&mang1[i][j]);
        }
    }
    int d=0;
    for (int i = 1; i<= n; i++){
        d =0;
        for (int j = 1; j <= n;j++ ){
            if (checkNT(mang1[i][j]) == 1){
                d++;
                mang2[i][j]++;
            }
        }
        if (d > max) {
            max = d;
            vt = i;
        }
    }
    printf("%d\n",vt);
    for (int i = 1; i<= n; i++){
        if (mang2[vt][i] != 0){
            printf("%d ",mang1[vt][i]);
        }
    }
    return 0;
}
