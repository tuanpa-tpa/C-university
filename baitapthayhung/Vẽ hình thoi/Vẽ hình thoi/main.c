//Viết chương trình cho phép nhập vào số n và in ra hình thoi tương ứng với n.
//INPUT
//5
//OUTPUT
//~~~~*
//~~~***
//~~*****
//~*******
//*********
//~*******
//~~*****
//~~~***
//~~~~*
//  main.c
//  Vẽ hình thoi
//
//  Created by PAT on 5/2/20.
//  Copyright © 2020 PAT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n;
    scanf("%d",&n);
    for (int i = 1; i<= n; i++) {
        for (int j = 1; j<= n-i; j++){
            printf("~");
        }
        for (int j = 1; j<= i*2-1; j++){
            printf("*");
        }
        printf("\n");
    }
    for (int i = n-1; i >= 1 ; i--) {
        for (int j = 1; j<= n-i; j++){
            printf("~");
        }
        for (int j = 1; j<= i*2-1; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
