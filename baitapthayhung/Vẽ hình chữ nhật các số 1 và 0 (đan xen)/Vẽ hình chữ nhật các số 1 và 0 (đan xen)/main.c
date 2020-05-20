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
//  Created by PAT on 5/6/20.
//  Copyright © 2020 PAT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int hang,cot,temp = 1;
    scanf("%d %d",&hang,&cot);
    for (int i = 1; i<= hang; i++){
        for (int j = 1; j<= cot; j++){
            if (temp == 1) printf("1");
            else printf("0");
            temp = !temp;
        }
        printf("\n");
    }
    return 0;
}
