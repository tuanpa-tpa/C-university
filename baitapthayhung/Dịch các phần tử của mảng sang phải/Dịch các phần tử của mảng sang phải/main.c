//
//  main.c
//  Dịch các phần tử của mảng sang phải
//
//  Created by PAT on 6/5/20.
//  Copyright © 2020 PAT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n,mang[100],p;
    scanf("%d",&n);
    for (int i = 0; i<n; i++){
        scanf("%d",&mang[i]);
    }
    scanf("%d",&p);
    for (int i = n-p; i< n; i++){
        printf("%d ",mang[i]);
    }
    for (int i = 0; i<n-p; i++){
        printf("%d ",mang[i]);
    }
    return 0;
}
