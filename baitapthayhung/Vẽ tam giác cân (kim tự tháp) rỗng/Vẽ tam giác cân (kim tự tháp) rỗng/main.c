//Viết chương trình C cho phép nhập vào n là số hàng của tam giác. Thực hiện in tam giác cân các ký tự sao rỗng
//INPUT
//5
//OUTPUT
//~~~~*
//~~~*.*
//~~*...*
//~*.....*
//*********
//  main.c
//  Vẽ tam giác cân (kim tự tháp) rỗng
//
//  Created by PAT on 6/5/20.
//  Copyright © 2020 PAT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n;
    scanf("%d",&n);
    for (int i = 0; i< n-1; i++){
        for (int j = 0; j < n-i-1; j++){
            printf("~");
        }
        for (int j = 0; j < i*2+1; j++){
            if ((j ==0) || (j == i*2))
                printf("*");
            else printf(".");
        }
        printf("\n");
    }
    for (int i=0; i< n*2-1; i++){
        printf("*");
    }
    return 0;
}
