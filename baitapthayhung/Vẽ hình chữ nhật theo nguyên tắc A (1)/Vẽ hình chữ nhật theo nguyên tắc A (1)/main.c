//Viết chương trình C cho phép nhập vào số hàng và số cột của hình chữ nhât. Thực hiện in ra hình chữ nhật theo nguyên tắc tương ứng.
//INTPUT
//5 5
//OUTPUT
//55555
//54444
//54333
//54322
//54321
//Hoặc
//INPUT
//4 6
//OUTPUT
//666666
//655555
//654444
//654333
//Hoặc
//INPUT
//6 4
//OUTPUT
//6666
//6555
//6544
//6543
//6543
//6543
//  main.c
//  Vẽ hình chữ nhật theo nguyên tắc A (1)
//
//  Created by PAT on 5/2/20.
//  Copyright © 2020 PAT. All rights reserved.
//

#include <stdio.h>
#include <math.h>
int main(int argc, const char * argv[]) {
    int hang,cot,max;
    scanf("%d %d",&hang,&cot);
    max = hang;
    if (cot > max) max =cot;
    for (int i = 1; i<= hang; i++) {
        for (int j = 1; j<= cot; j++) {
            if (j > i) printf("%d",max - i +1);
            else printf("%d",max - j +1);
        }
        printf("\n");
    }
    return 0;
}
