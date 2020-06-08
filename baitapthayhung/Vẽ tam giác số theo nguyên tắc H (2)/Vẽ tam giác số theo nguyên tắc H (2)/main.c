//
//  main.c
//  Vẽ tam giác số theo nguyên tắc H (2)
//
//  Created by PAT on 6/6/20.
//  Copyright © 2020 PAT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n;
    scanf("%d",&n);
    for (int i = 1; i<=n; i++){
        int d =0;
        for (int j = 2; j<=i*2; j+=2){
            printf("%d",j);
            d = j;
        }
        for (int j = (i-1)*2; j >= 1; j-=2){
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}
