//Nhập ma trận A là ma trận vuông cấp n. Tìm cột có tổng các phần tử nhỏ nhất và in ra thứ tự cột và các giá trị của cột đó (nếu có nhiều hơn một cột thì in ra vị trí cột xếp trước)
//INPUT
//4
//1 2 3 4
//5 6 7 8
//9 10 11 12
//13 14 15 16
//OUTPUT
//1
//1 5 9 13
//  main.c
//  Tìm cột có tổng các phần tử là nhỏ nhất trong ma trận
//
//  Created by PAT on 5/13/20.
//  Copyright © 2020 PAT. All rights reserved.
//

#include <stdio.h>
#define pt 200

int main(int argc, const char * argv[]) {
    int n,mang[pt][pt],tam = 0;
    scanf("%d",&n);
    for (int i = 0; i< n;i++){
        for (int j = 0;j < n; j++){
            scanf("%d",&mang[i][j]);
        }
    }
    int min = 99999;
    for (int i = 0; i< n;i++){
        int t = 0;
        for (int j = 0;j < n; j++){
            t += mang[j][i];
        }
        if (t < min) {
            tam = i;
            min = t;
        }
    }
    printf("%d\n",tam+1);
    for (int i = 0; i < n; i++ ){
        printf("%d ",mang[i][tam]);
    }
    return 0;
}
