//Viết chương trình C cho phép nhập vào n là độ dài cạnh hình bình hành. Thực hiện in ra hình bình hành rỗng tương ứng.
//INPUT
//5
//OUTPUT
//~~~~*****
//~~~*...*
//~~*...*
//~*...*
//*****
//  main.c
//  Vẽ hình bình hành sao (rỗng)
//
//  Created by PAT on 5/2/20.
//  Copyright © 2020 PAT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n;
    scanf("%d",&n);
    for (int i  = 1; i<= n; i++) {
        for (int j  = 1; j <= n-i; j++) {
            printf("~");
        }
        for (int j  = 1; j <= n; j++) {
            if ( (i == 1) || (i == n)) printf("*");
            else if ( (j == n) || (j == 1)) printf("*");
            else printf(".");
        }
        printf("\n");
    }
    return 0;
}
