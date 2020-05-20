//Viết chương trình C cho phép nhập vào mảng một chiều n phần tử (n>1) và thực hiện xóa một phần tử tại vị trí p sau đó in ra mảng kết quả
//Trong đó:
//-INPUT:
// Hàng thứ nhất là số phần tử của mảng
// Hàng thứ hai là các phần tử của mảng
// Hàng thứ ba là vị trí phần tử cần xóa
//-OUTPUT
// mảng kết quả sau khi xóa
//
//INPUT
//5
//2 3 7 9 1
//3
//OUTPUT
//2 3 9 1
//  main.c
//  Xóa một phần tử khỏi mảng
//
//  Created by PAT on 5/13/20.
//  Copyright © 2020 PAT. All rights reserved.
//

#include <stdio.h>
#define pt 200
int main(int argc, const char * argv[]) {
    int n,mang[pt],k;
    scanf("%d",&n);
    for (int i =1; i<= n;i++){
        scanf("%d",&mang[i]);
    }
    scanf("%d",&k);
    for (int i = 1; i<= n; i++){
        if (i == k) continue;
        else printf("%d ",mang[i]);
    }
    
    return 0;
}
