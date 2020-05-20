//Viết chương trình C cho phép nhập vào mảng một chiều n phần tử (n>1), thực hiện đếm và in ra số phần tử chẵn và số phần tử lẻ trong mảng
//Trong đó:
//-INPUT:
// Hàng thứ nhất là số phần tử của mảng
// Hàng thứ hai là các phần tử của mảng
//-OUTPUT
// Số phần tử chẵn và số phần tử lẻ
//
//INPUT
//5
//2 3 7 9 1
//OUTPUT
//1 4
//  main.c
//  Đếm số phần tử chẵn và phần tử lẻ trong mảng
//
//  Created by PAT on 5/13/20.
//  Copyright © 2020 PAT. All rights reserved.
//

#include <stdio.h>
#define pt 200
int main(int argc, const char * argv[]) {
    int n,mang[pt],chan=0,le =0;
    scanf("%d",&n);
    for (int i =1; i<=n ; i++) {
        scanf("%d",&mang[i]);
        if ((mang[i] % 2) == 0) chan++;
        else le++;
    }
    printf("%d %d",chan,le);
    return 0;
}
