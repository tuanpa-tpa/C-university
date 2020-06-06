//Viết chương trình C cho phép nhập vào mảng A gồm n phần tư (n>1). Thực hiện dịch n phần tử của mảng sang trái và In ra mảng kết quả
//Trong đó:
//INPUT
// Hàng thứ nhất là số phần tử n của mảng A
// Hàng thứ hai là các phần tử của mảng A
// Hàng thứ ba là số phần tử dịch
//OUTPUT
//  Mảng kết quả
//INPUT
//10
//1 2 3 4 5 6 7 8 9 10
//3
//OUTPUT
//4 5 6 7 8 9 10 1 2 3
//  main.c
//  Dịch các phần tử của mảng sang trái
//
//  Created by PAT on 6/5/20.
//  Copyright © 2020 PAT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n,mang[100],p;
    scanf("%d",&n);
    for (int i = 0; i<n; i++){
        scanf("%d",&mang[i]);
    }
    scanf("%d",&p);
    for (int i = p; i< n; i++){
        printf("%d ",mang[i]);
    }
    for (int i = 0; i<p; i++){
        printf("%d ",mang[i]);
    }
    return 0;
}
