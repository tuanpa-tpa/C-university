//
//  main.c
//  nổi bọt (bubble sort)
//
//  Created by PAT on 5/2/20.
//  Copyright © 2020 PAT. All rights reserved.
//

#include <stdio.h>
#define MAX 10

void swap(int* a, int*b);
void output(int n, int arr[]);
int main(int argc, const char * argv[]) {
    int mang[MAX] = {1,5,6,2,7,9,3,6,10,4};
    char check;
    for (int i = 0; i < MAX ; i++ ){
        check = 0;
        for (int j = 0; j < MAX - 1; j++) {
            if (mang[j] > mang[j+1]){
                swap(&mang[j],&mang[j+1]);
                check = 1;
            }
        }
        if (check == 0) break;
    }
    output(MAX, mang);
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
}
