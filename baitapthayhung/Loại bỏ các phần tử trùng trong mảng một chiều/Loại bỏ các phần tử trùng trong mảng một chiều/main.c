//Viết chương trình C cho phép nhập vào mảng A n phần tử số nguyên (n>2). Thực hiện loại bỏ các phần tử đã xuất hiện và In ra mảng kết quả.
//Trong đó:
//INPUT
//- Dòng đầu tiên là số phần tử của mảng
//- Dòng thứ hai là các phần tử của mảng
//OUTPUT
//- Mảng kết quả
//
//INPUT
//7
//1 5 10 10 5 2 3
//OUTPUT
//1 5 10 2 3
//  main.c
//  Loại bỏ các phần tử trùng trong mảng một chiều
//
//  Created by PAT on 6/7/20.
//  Copyright © 2020 PAT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n,mang[100],mang1[100]= {0};
    scanf("%d",&n);
    for (int i = 0; i< n; i++){
        scanf("%d",&mang[i]);
    }
    for (int i = 0; i<n; i++){
        for (int j =i+1; j< n; j++){
            if (mang[i] == mang[j] && mang1[i] == 0){
                mang1[j] = 1;
            }
        }
    }
    for (int i = 0; i< n; i++){
        if (mang1[i] == 0)
        printf("%d ",mang[i]);
    }
    return 0;
}
