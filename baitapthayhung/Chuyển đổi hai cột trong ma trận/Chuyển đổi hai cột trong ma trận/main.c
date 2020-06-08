//Viết chương trình C cho phép nhập vào ma trận nguyên dương cấp M*N. Chuyển đổi hai cột a và b trong ma trận và in ra kết quả.
//Trong đó:
//INPUT
//- Hàng thứ nhất là cấp m,n của ma trận
//- m hàng tiếp theo là các phần tử của ma trận
//- Hàng cuối cùng là vị trí cột cần chuyển đổi
//OUTPUT
//- Ma trận kết quả
//
//INPUT
//3 3
//1 2 3
//4 5 6
//7 8 9
//1 3
//OUTPUT
//3 2 1
//6 5 4
//9 8 7
//  main.c
//  Chuyển đổi hai cột trong ma trận
//
//  Created by PAT on 6/6/20.
//  Copyright © 2020 PAT. All rights reserved.
//

#include <stdio.h>
void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(int argc, const char * argv[]) {
    int hang,cot,mang[100][100] = {0};
    scanf("%d %d",&hang,&cot);
    for (int i = 1; i<= hang;i++){
        for (int j = 1; j<= cot; j++){
            scanf("%d",&mang[i][j]);
        }
    }
    int doi1,doi2;
    scanf("%d %d",&doi1,&doi2);
    for (int i = 1; i<= hang;i++){
        for (int j = 1; j<= cot; j++){
            if ( j == doi1){
                swap(&mang[i][j],&mang[i][doi2]);
            }
        }
    }
    for (int i = 1; i<= hang;i++){
        for (int j = 1; j<= cot; j++){
            printf("%d ",mang[i][j]);
        }
        printf("\n");
    }
    return 0;
}
