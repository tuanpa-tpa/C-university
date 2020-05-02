//Viết chương trình C nhập vào n và vẽ hình mũi tên sang trái tương ứng.
//INPUT
//5
//OUTPUT
//~~~~*****
//~~~****
//~~***
//~**
//*
//~**
//~~***
//~~~****
//~~~~*****
//  main.c
//  Vẽ mũi tên sang trái
//
//  Created by PAT on 5/2/20.
//  Copyright © 2020 PAT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n;
    scanf("%d",&n);
    // tren
    for (int i = 1; i<= n; i++) {
        for (int j = 1; j<= (n - i)*2 + 1; j++) {
            if (j <= n - i) {
                printf("~");
            } else printf("*");
        }
        printf("\n");
    }
    // duoi
    for (int i = n-1; i >= 1 ; i--) {
        for (int j = 1; j<= (n - i)*2 + 1; j++) {
            if (j <= n - i) {
                printf("~");
            } else printf("*");
        }
        printf("\n");
    }
    return 0;
}
