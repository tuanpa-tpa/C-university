//
//  main.c
//  Vẽ tam giác ký tự theo nguyên tắc H
//
//  Created by PAT on 6/6/20.
//  Copyright © 2020 PAT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n;
    scanf("%d",&n);
    for (int i = 1; i<= n; i++){
        for (int j= 64; j< (i*2)+64-1; j+=2){
            printf("%c",j);
        }
        for (int j = (i-1)*2+64-1; j>= 64; j-=2){
            printf("%c",j-1);
        }
        printf("\n");
    }
    return 0;
}
