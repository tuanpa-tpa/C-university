//
//  main.c
//  Tách mảng số chẵn và mảng số lẻ từ mảng đã cho
//
//  Created by PAT on 6/5/20.
//  Copyright © 2020 PAT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n,mang[200];
    scanf("%d",&n);
    for (int i =0 ; i< n; i++){
        scanf("%d",&mang[i]);
    }
    for (int i =0 ; i< n; i++){
        if (mang[i] % 2 == 0) {
            printf("%d ",mang[i]);
        }
    }
    printf("\n");
    for (int i =0 ; i< n; i++){
        if (mang[i] % 2 != 0) {
            printf("%d ",mang[i]);
        }
    }
    return 0;
}
