//
//  main.c
//  Tìm phần tử lớn nhất và nhỏ nhất trong mảng
//
//  Created by PAT on 5/6/20.
//  Copyright © 2020 PAT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n,mang[200],min,max;
    scanf("%d",&n);
    for (int i =1; i<= n; i++)
        scanf("%d",&mang[i]);
    min = mang[1];
    max = mang[1];
    for (int i = 2; i<= n; i++){
        if (min > mang[i]) min = mang[i];
        if (max < mang[i]) max = mang[i];
    }
    printf("%d %d",max,min);
    return 0;
}
