//Viết chương trình C cho phép nhập vào hàng và cột của hình bình hành. Thực hiện in hình bình hành sao.
//INPUT
//3 4
//OUTPUT
//****
//~*..*
//~~****
//  main.c
//  Vẽ hình bình hành ngược sao (rỗng)
//
//  Created by PAT on 6/5/20.
//  Copyright © 2020 PAT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int hang,cot;
    scanf("%d %d",&hang,&cot);
    for (int i = 0; i< cot; i++){
        printf("*");
    }
    printf("\n");
    for (int i = 1; i< hang-1;i++){
        for (int j = 1; j<= i;j++){
            printf("~");
        }
        for (int j = 0; j< cot; j++){
            if (j == 0 || j == (cot -1)) printf("*"); else printf(".");
        }
        printf("\n");
    }
    for (int i = 0; i< hang-1; i++){
        printf("~");
    }
    for (int i = 0; i< cot; i++){
        printf("*");
    }
    return 0;
}
