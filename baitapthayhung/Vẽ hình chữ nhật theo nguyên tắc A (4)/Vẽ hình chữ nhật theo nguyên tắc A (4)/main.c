//Viết chương trình C cho phép nhập vào số hàng và số cột của hình chữ nhât. Thực hiện in ra hình chữ nhật theo nguyên tắc tương ứng.
//INTPUT
//5 5
//OUTPUT
//12345
//22345
//33345
//44445
//55555
//Hoặc
//INPUT
//4 6
//OUTPUT
//333456
//444456
//555556
//666666
//Hoặc
//INPUT
//6 4
//OUTPUT
//3456
//3456
//3456
//4456
//5556
//6666
//  main.c
//  Vẽ hình chữ nhật theo nguyên tắc A (4)
//
//  Created by PAT on 6/8/20.
//  Copyright © 2020 PAT. All rights reserved.
//

#include <stdio.h>
#include <math.h>
int main(int argc, const char * argv[]) {
    int hang,cot,max;
    scanf("%d %d",&hang,&cot);
    max = hang;
    if (cot > max) max =cot;
    for (int i = hang; i>=1; i--) {
        for (int j = cot; j>=1; j--) {
            if (j > i) printf("%d",max - i +1);
            else printf("%d",max - j +1);
        }
        printf("\n");
    }
    return 0;
}
