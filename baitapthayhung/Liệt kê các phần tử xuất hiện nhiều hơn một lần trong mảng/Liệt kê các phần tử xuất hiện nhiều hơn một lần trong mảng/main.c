//Viết chương trình C cho phép nhập vào mảng một chiều n phần tử (n>1) và thực hiện in ra các phần tử xuất hiện nhiều hơn 1 lần trong mảng theo thứ tự xuất hiện (Nếu không có phần tử nào thỏa mãn in ra 0)
//Trong đó:
//-INPUT:
// Hàng thứ nhất là số phần tử của mảng
// Hàng thứ hai là các phần tử của mảng
//-OUTPUT
// Các phần tử thỏa mãn theo thứ tự xuất hiện
//
//INPUT
//7
//2 3 3 2 1 9 5
//OUTPUT
//2 3
//  main.c
//  Liệt kê các phần tử xuất hiện nhiều hơn một lần trong mảng
//
//  Created by PAT on 5/13/20.
//  Copyright © 2020 PAT. All rights reserved.
//

#include <stdio.h>
#define pt 200
int main(int argc, const char * argv[]) {
    int n,mang[pt],kt[pt] = {0};
    scanf("%d",&n);
    for (int i = 1; i<= n; i++){
        scanf("%d",&mang[i]);
    }
    for (int i = 1; i<= n; i++){
        kt[mang[i]]++;
    }
    for (int i = 1; i<= n; i++){
        if (kt[mang[i]] >= 2) {
            printf("%d ",mang[i]);
            kt[mang[i]] = 0;
        }
    }
    return 0;
}
