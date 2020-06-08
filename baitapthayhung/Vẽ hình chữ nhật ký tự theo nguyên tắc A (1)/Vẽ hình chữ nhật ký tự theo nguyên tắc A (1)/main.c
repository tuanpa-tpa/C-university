//Viết chương trình C cho phép nhập vào số hàng và số cột của hình chữ nhât. Thực hiện in ra hình chữ nhật theo nguyên tắc tương ứng.
//INTPUT
//5 5
//OUTPUT
//eeeee
//edddd
//edccc
//edcbb
//edcba
//Hoặc
//INPUT
//4 6
//OUTPUT
//ffffff
//feeeee
//fedddd
//fedccc
//Hoặc
//INPUT
//6 4
//OUTPUT
//ffff
//feee
//fedd
//fedc
//fedc
//fedc
//  main.c
//  Vẽ hình chữ nhật ký tự theo nguyên tắc A (1)
//
//  Created by PAT on 6/8/20.
//  Copyright © 2020 PAT. All rights reserved.
//

#include <stdio.h>
#include <math.h>
int main(int argc, const char * argv[]) {
    int hang,cot,max;
    scanf("%d %d",&hang,&cot);
    max = hang+96;
    if (cot+96 > max) max =cot+96;
    for (int i = 1; i<= hang; i++) {
        for (int j = 1; j<= cot; j++) {
            if (j > i) printf("%c",max - i +1);
            else printf("%c",max - j +1);
        }
        printf("\n");
    }
    return 0;
}
