//viết chương trình C cho phép nhập vào số hàng và số cột của hình chữ nhật. Vẽ hình chữ nhật số theo nguyên tắc tương ứng.
//INPUT
//4 4
//OUTPUT
//1234
//2343
//3432
//4321
//
//Hoặc
//INPUT
//3 5
//OUTPUT
//12345
//23454
//34543
//
//Hoặc
//INPUT
//5 3
//OUTPUT
//123
//232
//321
//432
//543
//  main.c
//  Vẽ hình chữ nhật theo nguyên tắc C (2)
//
//  Created by PAT on 5/2/20.
//  Copyright © 2020 PAT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int hang,cot,max,mang[100][100];
    scanf("%d %d",&hang,&cot);
    max = hang;
    if (cot > max) max = cot;
    
    for (int j =1 ; j<= cot; j++)
         mang[1][j] = j;
    int max2 = mang[1][cot];
    for (int i= 2; i<= hang; i++){
        int tam = max2;
        for (int j =1 ; j<= cot; j++){
            if (mang[i-1][j] < tam) mang[i][j] = mang[i-1][j] + 1;
            else mang[i][j] = --tam;
        }
        if (max2 == mang[i][1]) max2++ ;
    }
    
    // xuat mang
    for (int i=1 ;i<= hang; i++){
        for (int j=1; j<= cot; j++)
            printf("%d",mang[i][j]);
        printf("\n");
    }
    return 0;
}
