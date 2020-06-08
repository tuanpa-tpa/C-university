//viết chương trình C cho phép nhập vào số hàng và số cột của hình chữ nhật. Vẽ hình chữ nhật số theo nguyên tắc tương ứng.
//INPUT
//4 4
//OUTPUT
//ABCD
//BCDA
//CDBA
//DCBA
//
//Hoặc
//INPUT
//3 5
//OUTPUT
//ABCDE
//BCDEA
//CDEBA
//
//Hoặc
//INPUT
//5 3
//OUTPUT
//ABC
//BCA
//CBA
//CBA
//CBA
//  main.c
//  Vẽ hình chữ nhật ký tự theo nguyên tắc C (1)
//
//  Created by PAT on 6/8/20.
//  Copyright © 2020 PAT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int mang[100][100],hang,cot,dem = 65,tam =1;
    scanf("%d %d",&hang,&cot);
    for (int i = 0; i < cot; i++){
        mang[0][i] = dem++;
    }
    for (int i = 1; i < hang; i++){
        tam =65;
        for (int j = 0; j < cot-i; j++){
            mang[i][j] = mang[i-1][j]+1;
        }
        for (int j = cot-1; j >= cot-i; j--){
            if (j >=0)
                mang[i][j] = tam++;
        }
//        if ( (i >= cot)) mang[i][0] = mang[i-1][0]+1;
    }
    for (int i = 0; i < hang; i++){
        for (int j = 0; j< cot; j++){
            printf("%c",mang[i][j]);
        }
        printf("\n");
    }
    return 0;
}
