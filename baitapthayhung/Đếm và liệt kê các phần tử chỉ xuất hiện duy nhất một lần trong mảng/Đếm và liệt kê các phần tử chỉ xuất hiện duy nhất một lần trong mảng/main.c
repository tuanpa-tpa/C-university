//Viết chương trình C cho phép nhập vào mảng A n phần tử số nguyên (n>2). Đếm các phần tử chỉ xuất hiện một lần và liệt kê.
//Trong đó:
//INPUT
//- Dòng đầu tiên là số phần tử của mảng
//- Dòng thứ hai là các phần tử của mảng
//OUTPUT
//- Dòng đầu tiên là số các phần tử thỏa mãn
//- Dòng thứ hai là các phần tử thõa mãn
//
//INPUT
//7
//1 5 10 10 5 2 3
//OUTPUT
//3
//1 2 3
//  main.c
//  Đếm và liệt kê các phần tử chỉ xuất hiện duy nhất một lần trong mảng
//
//  Created by PAT on 6/5/20.
//  Copyright © 2020 PAT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n,mang1[1000] = {0},mang2[1000];
    scanf("%d",&n);
    for (int i = 0; i< n; i++){
        scanf("%d",&mang2[i]);
    }
    for (int i = 0; i< n; i++){
        mang1[mang2[i]]++;
    }
    int d =0;
    for (int i = 0; i< n; i++){
        if(mang1[i] == 1) d++;
    }
    printf("%d\n",d);
    for (int i = 0; i< n; i++){
        if(mang1[i] == 1) printf("%d ",i);
    }
    return 0;
}
