//Viết chương trình C cho phép nhập vào số hàng và số cột của hình chữ nhật. Thực hiện in ra hình chữ nhật theo nguyên tắc tương ứng.
//INPUT
//4 4
//OUTPUT
//4321
//3212
//2123
//1234
//
//Hoặc
//INPUT
//4 6
//OUTPUT
//654321
//543212
//432123
//321234
//
//Hoặc
//INPUT
//6 4
//OUTPUT
//6543
//5432
//4321
//3212
//2123
//1234
//  main.c
//  Vẽ hình chữ nhật theo nguyên tắc D (2)
//
//  Created by PAT on 6/8/20.
//  Copyright © 2020 PAT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int hang,cot,temp;
    int mang[100][100];
    scanf("%d %d",&hang,&cot);
    
    int max = hang;
    if (cot > max) max = cot;
    
    temp = max;
    for (int i = 1; i <= temp ;i++){
        mang[1][i] = max--;
    }
    temp--;
    for (int i = 2; i<= hang ;i++){
        for (int j = 1; j<= temp; j++){
            mang[i][j] = mang[i-1][j]-1;
        }
        for (int j = temp+1; j<= cot; j++){
            mang[i][j] = mang[i-1][j]+1;
        }
        temp--;
    }
    for (int i =1; i<= hang; i++) {
        for (int j = 1; j <= cot; j++) {
            printf("%d",mang[i][j]);
        }
        printf("\n");
    }
    return 0;
}
