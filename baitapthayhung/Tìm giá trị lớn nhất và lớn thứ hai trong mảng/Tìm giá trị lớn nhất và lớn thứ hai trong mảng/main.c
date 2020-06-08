//
//  main.c
//  Tìm giá trị lớn nhất và lớn thứ hai trong mảng
//
//  Created by PAT on 6/7/20.
//  Copyright © 2020 PAT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n,mang[100];
    scanf("%d",&n);
    for (int i = 0; i< n; i++){
        scanf("%d",&mang[i]);
    }
    int max1 = 0,max2 = 0;
    for (int i = 0; i< n; i++){
        if (mang[i] > max1) max1 = mang[i];
    }
    for (int i = 0; i< n; i++){
        if (mang[i] == max1) continue;
        if (mang[i] > max2) max2 = mang[i];
    }
    printf("%d %d",max1,max2);
    return 0;
}
