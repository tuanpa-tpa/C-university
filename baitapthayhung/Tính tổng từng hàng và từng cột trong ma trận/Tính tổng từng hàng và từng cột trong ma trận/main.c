//Viết chương trình C nhập vào ma trận A vuông cấp n. Tính tổng từng hàng, từng cột và thực hiện in ra.
//Trong đó
//INPUT
//- Hàng thứ nhất là cấp của ma trận
//- Các hàng tiếp theo là các phần tử của ma trận
//OUTPUT
//- Hàng thứ nhất là tổng từng hàng
//- Hàng thứ hai là tổng từng cột
//INPUT
//3
//1 2 3
//4 5 6
//7 8 9
//OUTPUT
//6 15 24
//12 15 18
//  main.c
//  Tính tổng từng hàng và từng cột trong ma trận
//
//  Created by PAT on 6/7/20.
//  Copyright © 2020 PAT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n,mang[100][100];
    scanf("%d",&n);
    for (int i = 0; i< n; i++){
        for (int j = 0; j< n; j++){
            scanf("%d",&mang[i][j]);
        }
    }
    for (int i = 0; i< n; i++){
        int t =0;
        for (int j = 0; j< n; j++){
            t+= mang[i][j];
        }
        printf("%d ",t);
    }
    printf("\n");
    for (int i = 0; i< n; i++){
        int t =0;
        for (int j = 0; j< n; j++){
            t+= mang[j][i];
        }
        printf("%d ",t);
    }
    return 0;
}
