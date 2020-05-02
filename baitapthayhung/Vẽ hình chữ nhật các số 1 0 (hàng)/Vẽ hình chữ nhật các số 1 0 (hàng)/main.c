//
//Viết chương trình C cho phép nhập vào số hàng và cột của hình chữ nhật và in ra hình chữ nhật các số tương ứng.
//INPUT
//5 5
//OUTPUT
//11111
//00000
//11111
//00000
//11111
//  main.c
//  Vẽ hình chữ nhật các số 1 0 (hàng)
//
//  Created by PAT on 5/2/20.
//  Copyright © 2020 PAT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int hang,cot,so = 1;
    scanf("%d %d",&hang,&cot);
    for (int i = 1; i<= hang; i++){
        if (i % 2 == 0) so = 0; else so = 1;
        for (int j = 1; j<= cot; j++)
            printf("%d",so);
        printf("\n");
    }
    return 0;
}
