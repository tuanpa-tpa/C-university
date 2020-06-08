//Viết chương trình C cho phép nhập vào chiều cao (số hàng) của tam giác và thực hiện in ra tam giác số theo nguyên tắc tương ứng.
//INPUT
//5
//OUTPUT
//1
//21
//123
//4321
//12345
//  main.c
//  Vẽ tam giác số theo nguyên tắc J
//
//  Created by PAT on 6/7/20.
//  Copyright © 2020 PAT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n;
    scanf("%d",&n);
    for (int i = 0; i<n; i++) {
        int d =1,d2 = i+1;
        if ( i % 2 == 0){
            for (int j = 0; j< i+1; j++){
                printf("%d",d++);
            }
        } else {
            for (int j = 0; j< i+1; j++){
                printf("%d",d2--);
            }
        }
        printf("\n");
    }
    return 0;
}
