//Viết chương trình C cho phép nhập vào n là số hàng của tam giác và thực hiện in ra tam giác số theo nguyên tắc tương ứng.
//INPUT
//5
//OUTPUT
//~~~~0
//~~~101
//~~21012
//~3210123
//432101234
//  main.c
//  Vẽ tam giác số theo nguyên tắc A
//
//  Created by PAT on 6/7/20.
//  Copyright © 2020 PAT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n;
    scanf("%d",&n);
    for (int i = 0; i<n; i++) {
        for (int j = 0; j< n-i-1; j++){
            printf("~");
        }
        int d1 = i,d2 = 1;
        for (int j = 0; j< i; j++){
            printf("%d",d1--);
        }
        printf("0");
        for (int j = 0; j< i; j++){
            printf("%d",d2++);
        }
        printf("\n");
    }
    return 0;
}
