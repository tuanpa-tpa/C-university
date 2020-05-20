//
//  main.c
//  chọn (selection sort)
//
//  Created by PAT on 5/2/20.
//  Copyright © 2020 PAT. All rights reserved.
//

#include <stdio.h>

void output(int n, int arr[]);
void swap(int* a, int* b);

int main(int argc, const char * argv[]) {
    int mang[] = {5,1,7,9,4,7,1,3,7};
    int n = sizeof(mang)/sizeof(int),min;
    for (int i = 0; i < n -1; i++){
        min = i;
        for (int j = i+1 ; j<n ;j++)
            if (mang[j] < mang[min]) {
                min = j;
            }
        swap(&mang[min],&mang[i]);
    }
    output(n, mang);
    return 0;
}
void output(int n, int arr[]){
    for (int i = 0; i < n; i++)
        printf("%d ",arr[i]);
}
void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
