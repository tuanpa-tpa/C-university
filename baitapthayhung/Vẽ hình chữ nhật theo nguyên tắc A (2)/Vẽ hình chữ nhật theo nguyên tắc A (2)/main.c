//Viết chương trình C cho phép nhập vào số hàng và số cột của hình chữ nhât. Thực hiện in ra hình chữ nhật theo nguyên tắc tương ứng.
//INTPUT
//5 5
//OUTPUT
//55555
//44445
//33345
//22345
//12345
//Hoặc
//INPUT
//4 6
//OUTPUT
//666666
//555556
//444456
//333456
//Hoặc
//INPUT
//6 4
//OUTPUT
//6666
//5556
//4456
//3456
//3456
//3456
//  main.c
//  Vẽ hình chữ nhật theo nguyên tắc A (2)
//
//  Created by PAT on 5/6/20.
//  Copyright © 2020 PAT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int hang,cot,max,mang[100][100];
    scanf("%d %d",&hang,&cot);
    if (hang > cot) max = hang; else max =cot;
    for (int i = 0; i< cot; i++){
        mang[0][i] = max;
    }
    for (int i = 1; i< hang; i++){
        for (int j = 0; j< cot - i; j++){
            mang[i][j] = mang[i-1][j] -1;
        }
        for (int j = cot -i; j< cot; j++){
            mang[i][j] = mang[i-1][j];
        }
    }
    for (int i = 0; i< hang; i++){
        for (int j = 0; j< cot; j++){
            printf("%d",mang[i][j]);
        }
        printf("\n");
    }
    return 0;
}
