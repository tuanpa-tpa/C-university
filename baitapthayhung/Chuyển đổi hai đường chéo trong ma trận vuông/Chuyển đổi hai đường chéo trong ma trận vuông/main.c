//Viết chương trình C cho phép nhập vào ma trận vuông các số nguyên dương cấp M. Thực hiện chuyển đổi hai đường chéo của ma trận và in ra ma trận kết quả.
//Trong đó:
//INPUT
//- Hàng thứ nhất là cấp m của ma trận
//- m hàng tiếp theo là các phần tử của ma trận
//OUTPUT
//- Ma trận kết quả
//
//INPUT
//3
//1 2 3
//4 5 6
//7 8 9
//OUTPUT
//3 2 1
//4 5 6
//9 8 7
//  main.c
//  Chuyển đổi hai đường chéo trong ma trận vuông
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
    int n,mang[100][100] = {0};
    scanf("%d",&n);
    for (int i = 1; i<= n;i++){
        for (int j = 1; j<= n; j++){
            scanf("%d",&mang[i][j]);
        }
    }
    for (int i = 1; i<= n;i++){
        for (int j = 1; j<= n; j++){
            if (i == j){
                swap(&mang[i][j],&mang[i][n-j+1]);
            }
        }
    }
    for (int i = 1; i<= n;i++){
        for (int j = 1; j<= n; j++){
            printf("%d ",mang[i][j]);
        }
        printf("\n");
    }
    return 0;
}
