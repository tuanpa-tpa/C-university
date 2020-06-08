//Viết chương trình C cho phép nhập vào mảng A một chiều n phần tử (n>1) và mảng B một chiều m phần tử (m>1). Thực hiện chèn mảng B vào mảng A tại vị trí P và in ra mảng kết quả
//Trong đó:
//-INPUT:
// Hàng thứ nhất là số phần tử của mảng A và mảng B
// Hàng thứ hai là các phần tử của mảng A
// Hàng thứ ba là các phần tử của mảng B
// Hàng thứ tư là vị trí chèn
//
//INPUT
//5 3
//1 2 3 4 5
//6 7 8
//3
//OUTPUT
//1 2 3 6 7 8 4 5
//  main.c
//  Chèn một mảng vào mảng tại vị trí P
//
//  Created by PAT on 6/7/20.
//  Copyright © 2020 PAT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n,m,p,mang1[100],mang2[100];
    scanf("%d %d",&n,&m);
    for (int i = 0; i< n; i++){
        scanf("%d",&mang1[i]);
    }
    for (int i = 0; i< m; i++){
        scanf("%d",&mang2[i]);
    }
    scanf("%d",&p);
    p--;
    for (int  i = 0 ; i< n ; i++){
        if (i == p+1){
            for (int j = 0; j< m; j++){
                printf("%d ",mang2[j]);
            }
        }
        printf("%d ",mang1[i]);
    }
    if ( p+1 == n) {
        for (int j = 0; j< m; j++){
            printf("%d ",mang2[j]);
        }
    }
    return 0;
}
