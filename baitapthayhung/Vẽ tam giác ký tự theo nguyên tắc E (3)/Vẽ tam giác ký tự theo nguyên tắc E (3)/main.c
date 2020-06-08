//Viết chương trình C cho  phép nhập vào chiều cao (số hàng) của tam giác và thực hiện in ra tam giác ký tự theo nguyên tắc tương ứng.
//INPUT
//4
//OUTPUT
//ACEG
//CEG
//EG
//G
//  main.c
//  Vẽ tam giác ký tự theo nguyên tắc E (3)
//
//  Created by PAT on 6/7/20.
//  Copyright © 2020 PAT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n;
    scanf("%d",&n);
    int d = 65;
    for (int i = 0; i< n; i++){
        int t = d;
        for (int j=0; j< n-i; j++){
            printf("%c",t);
            t+=2;
        }
        d+=2;
        printf("\n");
    }
    return 0;
}
