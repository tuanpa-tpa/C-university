//Viết chương trình C cho phép nhập vào số hàng và số cột của hình chữ nhật. In ra hình chữ nhật số tương ứng.
//INPUT
//4 5
//OUTPUT
//11111
//22222
//33333
//44444
//  main.c
//  Vẽ hình chữ nhật các hàng với chữ số tăng dần
//
//  Created by PAT on 5/2/20.
//  Copyright © 2020 PAT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int hang,cot;
    scanf("%d %d",&hang,&cot);
    for (int i = 1; i<= hang; i++ ) {
        for (int j = 1; j<= cot; j++) {
            printf("%d",i);
        }
        printf("\n");
    }
    return 0;
}
