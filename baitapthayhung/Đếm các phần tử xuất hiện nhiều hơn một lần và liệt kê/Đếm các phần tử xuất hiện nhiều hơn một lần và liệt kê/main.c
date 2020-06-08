//
//  main.c
//  Đếm các phần tử xuất hiện nhiều hơn một lần và liệt kê
//
//  Created by PAT on 6/6/20.
//  Copyright © 2020 PAT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n,mang1[1000] = {0},mang2[1000];
    scanf("%d",&n);
    int max =0;
    for (int i = 0; i< n; i++){
        scanf("%d",&mang2[i]);
        if (mang2[i] > max) max = mang2[i];
    }
    for (int i = 0; i < n; i++){
        mang1[mang2[i]]++;
    }
    int d =0;
    for (int i = 0; i<= max; i++){
        if(mang1[i] > 1) d++;
    }
    printf("%d\n",d);
    for (int i = 0; i<= max; i++){
        if(mang1[i] > 1) printf("%d ",i);
    }
    return 0;
}
