//Viết chương trình C cho phép nhập vào số hàng và số cột của hình chữ nhật. Thực hiện in ra hình chữ nhật theo nguyên tắc tương ứng.
//INPUT
//4 4
//OUTPUT
//1234
//2123
//3212
//4321
//
//Hoặc
//INPUT
//4 6
//OUTPUT
//123456
//212345
//321234
//432123
//
//Hoặc
//INPUT
//6 4
//OUTPUT
//1234
//2123
//3212
//4321
//5432
//6543
//  main.c
//  Vẽ hình chữ nhật theo nguyên tắc D (1)
//
//  Created by PAT on 5/6/20.
//  Copyright © 2020 PAT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int hang,cot,temp = 1;
    int mang[100][100];
    scanf("%d %d",&hang,&cot);
//    if (hang > cot) max = hang-2; else max = cot-2;
    for (int i = 1; i<= cot ;i++){
        mang[1][i] = i;
//        printf("%d",i);
    }
//    printf("\n");
    for (int i = 2; i<= hang ;i++){
        for (int j = 1; j<= temp; j++){
            mang[i][j] = mang[i-1][j]+1;
//            printf("%d",mang[i-1][j]+1);
        }
        for (int j = temp+1; j<= cot; j++){
            mang[i][j] = mang[i-1][j]-1;
//            printf("%d",mang[i-1][j]-1);
        }
//        if (temp < max) temp++;
        temp++;
//        printf("\n");
    }
    for (int i =1; i<= hang; i++) {
        for (int j = 1; j<= cot; j++) {
            printf("%d",mang[i][j]);
        }
        printf("\n");
    }
    return 0;
}
