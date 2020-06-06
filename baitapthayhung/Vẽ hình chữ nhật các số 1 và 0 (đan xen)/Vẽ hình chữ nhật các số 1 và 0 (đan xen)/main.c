//Viết chương trình C cho phép nhập vào hàng và cột và in ra hình chữ nhật số 1 và 0 tương ứng.
//INPUT
//5 5
//OUTPUT
//10101
//01010
//10101
//01010
//10101
//  main.c
//  Vẽ hình chữ nhật các số 1 và 0 (đan xen)
//
//  Created by PAT on 6/5/20.
//  Copyright © 2020 PAT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int hang,cot;
    scanf("%d %d",&hang,&cot);
    int d1 = 1,d2 = 0;
    for (int i = 0; i< hang; i++){
        for (int j = 0; j< cot; j++){
            if (j % 2 != 0)
                printf("%d",d2);
            else printf("%d",d1);
        }
        if (i % 2 == 0) {
            d1--;
            d2++;
        } else {
            d1++;
            d2--;
        }
        printf("\n");
    }
    return 0;
}
