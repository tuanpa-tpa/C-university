//Viết chương trình C cho phép nhập vào số hàng và số cột của hình chữ nhật. Thực hiện in hình chữ nhật số theo nguyên tắc tương ứng.
//INPUT
//4 4
//OUTPUT
//4444
//3444
//2344
//1234
//
//Hoặc
//INPUT
//3 5
//OUTPUT
//34555
//23455
//12345
//
//Hoặc
//INPUT
//6 4
//OUTPUT
//4444
//4444
//4444
//3444
//2344
//1234
//  main.c
//  Vẽ hình chữ nhật theo nguyên tắc B (2)
//
//  Created by PAT on 5/2/20.
//  Copyright © 2020 PAT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int mang[100][100],hang,cot,dem = 1;
    scanf("%d %d",&hang,&cot);
    for (int i= 1; i<= hang; i++){
        for (int j = 1; j<= cot; j++){
            if (i == 1) mang[i][j] = dem++;
            else if (mang[i-1][j] +1 <= cot) {
                mang[i][j] = mang[i-1][j] + 1;
            } else mang[i][j] = cot;
        }
    }
    for (int i= hang; i >= 1; i--){
        for (int j = 1; j <= cot; j++){
            printf("%d",mang[i][j]);
        }
        printf("\n");
    }
    return 0;
}
