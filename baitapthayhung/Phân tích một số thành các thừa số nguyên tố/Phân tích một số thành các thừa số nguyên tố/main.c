//
//  main.c
//  Phân tích một số thành các thừa số nguyên tố
//
//  Created by PAT on 6/5/20.
//  Copyright © 2020 PAT. All rights reserved.
//

#include<stdio.h>

int main()
{
    int n,i = 2,mang[100] = {0};
    scanf("%d",&n);
    while(n >= 2) {
        if ( n % i == 0 ) {
            mang[i]++;
            n /= i;
        } else{
            i++;
        }
    }
    for (int i = 1; i < 100; i++) {
        if (mang[i] != 0)
            printf("%d ",i);
    }
    return 0;
}
