//Viết chương trình C cho phép nhập vào mảng A gồm n phần tử số nguyên (n>2). Tìm giá trị nhỏ nhất và nhỏ thứ hai và in ra.
//Trong đó:
//INPUT
//- Dòng đầu tiên là số phần tử của mảng
//- Dòng thứ hai là các phần tử của mảng
//OUTPUT
//- Giá trị nhỏ nhất và giá trị nhỏ thứ hai
//INPUT
//6
//80 23 79 58 11 10
//OUTPUT
//10 11
//  main.c
//  Tìm giá trị nhỏ nhất và nhỏ thứ hai trong mảng
//
//  Created by PAT on 6/7/20.
//  Copyright © 2020 PAT. All rights reserved.
//
#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n,mang[100];
    scanf("%d",&n);
    for (int i = 0; i< n; i++){
        scanf("%d",&mang[i]);
    }
    int max1 = 99999,max2 = 99999;
    for (int i = 0; i< n; i++){
        if (mang[i] < max1) max1 = mang[i];
    }
    for (int i = 0; i< n; i++){
        if (mang[i] == max1) continue;
        if (mang[i] < max2) max2 = mang[i];
    }
    printf("%d %d",max1,max2);
    return 0;
}
