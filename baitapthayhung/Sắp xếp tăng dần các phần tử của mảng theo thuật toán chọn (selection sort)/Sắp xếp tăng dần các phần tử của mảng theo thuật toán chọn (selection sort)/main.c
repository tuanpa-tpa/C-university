//
//  main.c
//  Sắp xếp tăng dần các phần tử của mảng theo thuật toán chọn (selection sort)
//
//  Created by PAT on 6/6/20.
//  Copyright © 2020 PAT. All rights reserved.
//

#include <stdio.h>

void output(int n, int arr[]);
void swap(int* a, int* b);

int main(int argc, const char * argv[]) {
    int mang[200];
    int n ,min;
    scanf("%d",&n);
    for (int i = 0; i< n; i++){
        scanf("%d",&mang[i]);
    }
    for (int i = 0; i < n-1 ; i++){
        min = i;
        for (int j = i+1 ; j<n ;j++)
            if (mang[j] < mang[min]) {
                min = j;
            }
        swap(&mang[min],&mang[i]);
        output(n, mang);
    }
    return 0;
}
void output(int n, int arr[]){
    for (int i = 0; i < n; i++)
        printf("%d ",arr[i]);
    printf("\n");
}
void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
