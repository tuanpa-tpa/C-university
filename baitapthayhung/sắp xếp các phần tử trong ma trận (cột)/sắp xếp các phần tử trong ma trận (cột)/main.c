//Viết chương trình C cho phép nhập vào ma trận vuông các số nguyên dương cấp M. Thực hiện sắp xếp các phần tử trong ma trận theo nguyên tắc giảm dần theo cột.
//Trong đó:
//INPUT
//- Hàng thứ nhất là cấp m của ma trận
//- m hàng tiếp theo là các phần tử của ma trận
//OUTPUT
//- Ma trận kết quả
//
//INPUT
//3
//7 2 9
//4 5 6
//1 8 3
//OUTPUT
//7 8 9
//4 5 6
//1 2 3
//  main.c
//  sắp xếp các phần tử trong ma trận (cột)
//
//  Created by PAT on 6/7/20.
//  Copyright © 2020 PAT. All rights reserved.
//

#include <stdio.h>
void swap(int *a, int *b){
    int t = *a;
    *a = *b;
    *b =t;
}

int main(int argc, const char * argv[]) {
    int n,mang[200][200];
    scanf("%d",&n);
    for (int i = 0; i< n; i++){
        for (int j = 0 ; j< n; j++){
        scanf("%d",&mang[i][j]);
        }
    }
    
    for (int i = 0; i< n; i++){
        for (int j = 0 ; j< n; j++){
            for (int k = 0; k < n; k++){
                if (mang[j][i] > mang[k][i]){
                    swap(&mang[j][i],&mang[k][i]);
                }
            }
        }
    }
    for (int i = 0; i< n; i++){
        for (int j = 0 ; j< n; j++){
            printf("%d ",mang[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
