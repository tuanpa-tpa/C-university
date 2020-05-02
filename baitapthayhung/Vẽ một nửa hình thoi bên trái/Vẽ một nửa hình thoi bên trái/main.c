//Viết chương trình C nhập vào số cột của một nửa hình thoi bên phải và in ra hình tương ứng.
//INPUT
//5
//OUTPUT
//~~~~*
//~~~**
//~~***
//~****
//*****
//~****
//~~***
//~~~**
//~~~~*
//  main.c
//  Vẽ một nửa hình thoi bên trái
//
//  Created by PAT on 5/2/20.
//  Copyright © 2020 PAT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n;
    scanf("%d",&n);
    for (int i = 1; i<= n ; i++){
        for (int j =1; j<=n ;j++) {
            if (j<= n-i) printf("~");
            else printf("*");
        }
        printf("\n");
    }
    for (int i = n-1; i>= 1 ; i--){
        for (int j =1; j<=n ;j++) {
            if (j<= n-i) printf("~");
            else printf("*");
        }
        printf("\n");
    }
    return 0;
}
