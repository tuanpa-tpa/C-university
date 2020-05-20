//Viết chương trình C cho phép nhập vào mảng một chiều n phần tử (n>1) và thực hiện in ra phàn tử lớn thứ hai trong mảng
//Trong đó:
//-INPUT:
// Hàng thứ nhất là số phần tử của mảng
// Hàng thứ hai là các phần tử của mảng
//-OUTPUT
// Phần tử lớn thứ hai trong mảng
//
//INPUT
//5
//2 3 7 9 1
//OUTPUT
//7
//  main.c
//  Tìm phần tử lớn thứ hai trong mảng
//
//  Created by PAT on 5/13/20.
//  Copyright © 2020 PAT. All rights reserved.
//

#include <stdio.h>
#define pt 200
int main(int argc, const char * argv[]) {
    int n,mang[pt];
    // input
    scanf("%d",&n);
    for (int i = 1; i<= n; i++){
        scanf("%d",&mang[i]);
    }
    int max1 = mang[1];
    for (int i = 2; i<= n; i++){
        if (max1 < mang[i]) max1 = mang[i];
    }
    int max2 = -99999;
    for (int i = 1; i<= n; i++){
        if (mang[i] == max1) continue;
        if (max2 < mang[i]) max2 = mang[i];
    }
    printf("%d",max2);
    return 0;
}
