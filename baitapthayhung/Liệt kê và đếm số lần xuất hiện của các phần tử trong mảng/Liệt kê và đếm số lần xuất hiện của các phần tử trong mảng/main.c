//Viết chương trình C cho phép nhập vào mảng một chiều n phần tử (n>1) và thực hiện in ra các phần tử cùng số lần xuất hiện của chúng trong mảng
//Trong đó:
//-INPUT:
// Hàng thứ nhất là số phần tử của mảng
// Hàng thứ hai là các phần tử của mảng
//
//INPUT
//7
//2 3 3 2 1 9 5
//OUTPUT
//2 2
//3 2
//1 1
//9 1
//5 1
//  main.c
//  Liệt kê và đếm số lần xuất hiện của các phần tử trong mảng
//
//  Created by PAT on 6/7/20.
//  Copyright © 2020 PAT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n,mang[100],mang2[100] = {0};
    scanf("%d",&n);
    for (int i =0; i<n; i++){
        scanf("%d",&mang[i]);
    }
    for (int i =0; i<n; i++){
        int d = 1;
        if (mang2[i] != 0) continue;
        for (int j = i+1; j< n; j++){
            if (mang[i] == mang[j]){
                d++;
                mang2[j] = 1;
            }
        }
        printf("%d %d\n",mang[i],d);
    }
    return 0;
}
