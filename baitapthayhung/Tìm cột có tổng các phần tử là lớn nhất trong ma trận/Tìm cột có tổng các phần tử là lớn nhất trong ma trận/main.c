//Nhập ma trận A là ma trận vuông cấp n. Tìm cột có tổng các phần tử lớn nhất và in ra thứ tự cột và các giá trị của cột đó (nếu có nhiều hơn một cột thì in ra vị trí cột xếp trước)
//INPUT
//4
//1 2 3 4
//5 6 7 8
//9 10 11 12
//13 14 15 16
//OUTPUT
//4
//4 8 12 16
//  main.c
//  Tìm cột có tổng các phần tử là lớn nhất trong ma trận
//
//  Created by PAT on 5/13/20.
//  Copyright © 2020 PAT. All rights reserved.
//

#include <stdio.h>
#define pt 200
int main(int argc, const char * argv[]) {
    int n,mang[pt][pt];
    scanf("%d",&n);
    for (int i = 1; i<= n; i++){
        for (int j = 1; j<= n; j++){
            scanf("%d",&mang[i][j]);
        }
    }
    int max = -99999,vt = 0;
    for (int i = 1; i<= n; i++){
        int temp = 0;
        for (int j = 1; j<= n; j++){
            temp += mang[j][i];
        }
        if (temp > max) {
            max = temp;
            vt = i;
        }
    }
    printf("%d\n",vt);
        for (int i = 1 ; i <=  n; i++)
            printf("%d ",mang[i][vt]);
    return 0;
}
