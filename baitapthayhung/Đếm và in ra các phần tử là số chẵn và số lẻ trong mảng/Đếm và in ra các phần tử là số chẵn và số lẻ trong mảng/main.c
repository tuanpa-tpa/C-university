//Viết chương trình C cho phép nhập vào mảng A gồm n phần tử số nguyên (n>2). Đếm và  in ra các phần tử là số chẵn và lẻ trong mảng.(nếu không có số nào thỏa mãn thì in ra 0)
//Trong đó:
//INPUT
//- Dòng đầu tiên là số phần tử của mảng
//- Dòng thứ hai là các phần tử của mảng
//OUTPUT
//- Dòng đầu tiên là số phần tử thỏa mãn là số lẻ và liệt kê
//- Dòng thứ hai là số phần tử thỏa mãn là số chẵn và liệt kê
//
//INPUT
//7
//2 5 8 1 5 12 11
//OUTPUT
//4 5 1 5 11
//3 2 8 12
//  main.c
//  Đếm và in ra các phần tử là số chẵn và số lẻ trong mảng
//
//  Created by PAT on 5/6/20.
//  Copyright © 2020 PAT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n,mang[200];
    int dem1=0,dem2=0;
    scanf("%d",&n);
    for (int i = 1; i<= n ;i++){
        scanf("%d",&mang[i]);
        if (mang[i] % 2 != 0) dem1++;
        if (mang[i] % 2 == 0) dem2++;
    }
    printf("%d ",dem1);
    for (int i = 1; i<= n ;i++)
        if (mang[i] % 2 != 0) printf("%d ",mang[i]);
    printf("\n");
    printf("%d ",dem2);
    for (int i = 1; i<= n ;i++)
        if (mang[i] % 2 == 0) printf("%d ",mang[i]);
    return 0;
}
