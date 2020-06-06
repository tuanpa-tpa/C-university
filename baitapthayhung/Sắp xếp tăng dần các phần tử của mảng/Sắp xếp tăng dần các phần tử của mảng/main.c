//
//  main.c
//  Sắp xếp tăng dần các phần tử của mảng
//
//  Created by PAT on 6/5/20.
//  Copyright © 2020 PAT. All rights reserved.
//

#include <stdio.h>
void swap(int *a, int *b){
    int t = *a;
    *a = *b;
    *b =t;
}
int main(int argc, const char * argv[]) {
    int n,mang[200];
    scanf("%d",&n);
    for (int i = 0; i< n; i++){
        scanf("%d",&mang[i]);
    }
    for (int i = 0; i< n; i++){
        for (int j = 0; j< n; j++){
            if (mang[i] > mang[j])
                swap(&mang[i], &mang[j]);
        }
    }
    for (int i = 0; i< n; i++){
        printf("%d ",mang[i]);
    }
    return 0;
}
