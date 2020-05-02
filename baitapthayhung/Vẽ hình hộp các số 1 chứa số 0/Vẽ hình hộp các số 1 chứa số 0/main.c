//Viết chương trình C cho phép nhập vào hàng và cột của hình chữ nhật và in ra hình chữ nhật các chữ số 1 và 0 tương ứng.
//INPUT
//4 4
//OUTPUT
//1111
//1001
//1001
//1111
//  main.c
//  Vẽ hình hộp các số 1 chứa số 0
//
//  Created by PAT on 5/2/20.
//  Copyright © 2020 PAT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int hang,cot;
    scanf("%d %d",&hang,&cot);
    for (int i =1 ; i<= hang; i++){
        for (int j = 1 ; j<= cot; j++) {
            if ((i == 1) || (i == hang)) printf("1");
            else if ((j == 1) || (j == cot) ) printf("1");
            else printf("0");
        }
        printf("\n");
    }
    return 0;
}
