//Viết chương trình C cho phép nhập vào số hàng và cột của hình chữ nhật và in ra hình chữ nhật các số tương ứng.
//(Lưu ý các số được in liền nhau)
//INPUT
//5 5
//OUTPUT
//01010
//01010
//01010
//01010
//01010
//  main.c
//  Vẽ hình chữ nhật các số 1 0 (cột)
//
//  Created by PAT on 5/2/20.
//  Copyright © 2020 PAT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int hang, cot;
    scanf("%d %d",&hang,&cot);
    for (int i= 1; i<= hang; i++) {
        for (int j= 1; j<= cot; j++) {
            if (j % 2 == 0) printf("1");
            else printf("0");
        }
        printf("\n");
    }
    return 0;
}
