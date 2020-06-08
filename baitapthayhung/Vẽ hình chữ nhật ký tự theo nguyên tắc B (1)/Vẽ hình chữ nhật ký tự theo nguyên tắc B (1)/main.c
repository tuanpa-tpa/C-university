//Viết chương trình C cho phép nhập vào số hàng và số cột của hình chữ nhật. Thực hiện in hình chữ nhật ký tự theo nguyên tắc tương ứng.
//INPUT
//4 4
//OUTPUT
//@ABC
//ABCC
//BCCC
//CCCC
//
//Hoặc
//INPUT
//3 5
//OUTPUT
//@ABCD
//ABCDD
//BCDDD
//
//Hoặc
//INPUT
//5 3
//OUTPUT
//@AB
//ABB
//BBB
//BBB
//BBB
//  main.c
//  Vẽ hình chữ nhật ký tự theo nguyên tắc B (1)
//
//  Created by PAT on 6/8/20.
//  Copyright © 2020 PAT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int mang[100][100],hang,cot,dem = 64;
    scanf("%d %d",&hang,&cot);
    for (int i= 1; i<= hang; i++){
        for (int j = 1; j<= cot; j++){
            if (i == 1) mang[i][j] = dem++;
            else if (mang[i-1][j] +1 <= cot+63) {
                mang[i][j] = mang[i-1][j] + 1;
            } else mang[i][j] = cot+63;
        }
    }
    for (int i= 1; i <= hang; i++){
        for (int j = 1; j <= cot; j++){
            printf("%c",mang[i][j]);
        }
        printf("\n");
    }
    return 0;
}
