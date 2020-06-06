//Viết chương trình C cho phép nhập vào n là số hàng của tam giác. Thực hiện in tam giác cân các ký tự sao
//INPUT
//5
//OUTPUT
//~~~~*
//~~~***
//~~*****
//~*******
//*********
//  main.c
//  Vẽ tam giác cân (kim tự tháp)
//
//  Created by PAT on 6/5/20.
//  Copyright © 2020 PAT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n;
    scanf("%d",&n);
    for (int i = 0; i< n; i++){
        for (int j = 0; j < n-i-1; j++){
            printf("~");
        }
        for (int j = 0; j < i*2+1; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
