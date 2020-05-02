//Viết chương trình C cho phép nhập vào chiều cao của tam giác và thực hiện in ra tam giác vuông sao ngược phải rỗng
//INPUT
//5
//OUTPUT
//*****
//~*..*
//~~*.*
//~~~**
//~~~~*
//  main.c
//  Vẽ tam giác vuông ngược phải rỗng
//
//  Created by PAT on 5/2/20.
//  Copyright © 2020 PAT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n;
    scanf("%d",&n);
    for (int i = 1; i<= n; i++){
        for (int j = 1; j<= i-1; j++){
            printf("~");
        }
        for (int j = 1; j<= n-i+1; j++){
            if (i == 1) printf("*");
            else if ((j == 1) || (j == n-i+1)) printf("*");
            else printf(".");
        }
        printf("\n");
    }
    return 0;
}
