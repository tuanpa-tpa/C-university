//
//  main.c
//  Sắp xếp tăng dần các phần tử của mảng theo thuật toán nổi bọt (bubble sort)
//
//  Created by PAT on 6/8/20.
//  Copyright © 2020 PAT. All rights reserved.
//

#include <stdio.h>
#define MAX 100

void swap(int* a, int*b);
void output(int n, int arr[]);
int main(int argc, const char * argv[]) {
    int mang[MAX];
    char check;
    int n;
    scanf("%d",&n);
    for (int i = 0; i < n ; i++)
        scanf("%d",&mang[i]);
    for (int i = 0; i < n ; i++ ){
        check = 0;
        for (int j = 0; j < n - 1; j++) {
            if (mang[j] > mang[j+1]){
                swap(&mang[j],&mang[j+1]);
                check = 1;
            }
        }
        if (check == 0) break;
        output(n, mang);
    }
    return 0;
}
void swap(int* a, int*b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
void output(int n, int arr[]){
    for (int i = 0; i < n ; i++)
        printf("%d ",arr[i]);
    printf("\n");
}
