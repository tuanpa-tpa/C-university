//
//  main.c
//  Kiểm tra một số có phải là số armstrong hay không
//
//  Created by PAT on 6/5/20.
//  Copyright © 2020 PAT. All rights reserved.
//

#include <stdio.h>
#include <math.h>

int muN(int n){
    int d =0;
    while (n != 0){
        n /= 10;
        d++;
    }
    return d;
}
int main(int argc, const char * argv[]) {
    int n;
    scanf("%d",&n);
    int mu = muN(n);
    int t = 0,tam = n;
    while (n != 0){
        t += pow((n % 10),mu);
        n/=10;
    }
    if (tam == t)
        printf("1");
    else printf("0");
    return 0;
}
