//Viết chương trình C cho phép nhập vào mảng A gồm n phần tư (n>1). Thực hiện sắp xếp tăng dần các phần tử chẵn và lẻ của mảng và In ra.
//Trong đó:
//INPUT
// Hàng thứ nhất là số phần tử n của mảng A
// Hàng thứ hai là các phần tử của mảng A
//OUTPUT
//  Mảng kết quả
//INPUT
//8
//1 3 8 2 9 7 6 5
//OUTPUT
//2 6 8 1 3 5 7 9
//  main.c
//  Sắp xếp tăng dần các phần tử chẵn và lẻ trong mảng
//
//  Created by PAT on 5/4/20.
//  Copyright © 2020 PAT. All rights reserved.
//

#include <stdio.h>
void swap(int* a, int* b);

int main()
{
    int mang[100],n;
    // nhap mang
    scanf("%d",&n);
    for (int i = 1; i<= n; i++)
        scanf("%d",&mang[i]);
    // xu ly bai toan bang thuat toan sap xep noi bot
    int kt = 0;
    for (int i = 1; i<= n-1; i++){
        kt = 0;
        for (int j = 1; j<= n-1 ; j++){
            if (mang[j] > mang[j+1]){
                swap(&mang[j],&mang[j+1]);
                kt = 1;
            }
        }
        if (kt == 0) break;
    }
    for (int i = 1; i<= n; i++){
        if (mang[i] % 2 == 0) printf("%d ",mang[i]);
    }
    for (int i = 1; i<= n; i++){
        if (mang[i] % 2 != 0) printf("%d ",mang[i]);
    }
    return 0;
}
void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b =temp;
}
