//
//  main.c
//  Sắp xếp tăng dần các phần tử của mảng theo thuật toán chèn (insertion sort)
//
//  Created by PAT on 6/8/20.
//  Copyright © 2020 PAT. All rights reserved.
//

#include <stdio.h>

void output(int n, int mang[]);
int main(int argc, const char * argv[]) {
    int n,mang[100];
    scanf("%d",&n);
    for (int i = 0; i< n; i++){
        scanf("%d",&mang[i]);
    }
    for (int i = 1; i < n; i++){
        int index = mang[i];
        int viTri = i - 1;
        while( (viTri >= 0) && (mang[viTri] > index)){
            mang[viTri+1] = mang[viTri]; // don
            viTri--;
        }
        mang[viTri+1] = index;
        output(n,mang);
    }
    return 0;
}

void output(int n, int mang[]){
    for (int i = 0; i< n; i++)
        printf("%d ",mang[i]);
    printf("\n");
}
