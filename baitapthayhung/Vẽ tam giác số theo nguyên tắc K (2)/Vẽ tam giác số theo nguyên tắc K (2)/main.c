//Viết chương trình C cho phép nhập vào chiều cao (số hàng) của tam giác và thực hiện in ra tam giác số theo nguyên tắc tương ứng.
//INPUT
//5
//OUTPUT
//1 6 10 13 15
//2 7 11 14
//3 8 12
//4 9
//5
//  main.c
//  Vẽ tam giác số theo nguyên tắc K (2)
//
//  Created by PAT on 6/6/20.
//  Copyright © 2020 PAT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n,mang[100][100] = {0};
    int d = 1;
    scanf("%d",&n);
    for (int i = 0; i< n; i++){
        for (int j = 0; j< n-i; j++){
            mang[j][i] = d++;
        }
    }
    for (int i = 0; i< n; i++){
        for (int j = 0; j< n; j++){
            if (mang[i][j] != 0)
            printf("%d ",mang[i][j]);
        }
        printf("\n");
    }
    return 0;
}
