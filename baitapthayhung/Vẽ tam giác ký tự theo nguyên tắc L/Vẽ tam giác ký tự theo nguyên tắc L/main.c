//
//  main.c
//  Vẽ tam giác ký tự theo nguyên tắc L
//
//  Created by PAT on 6/6/20.
//  Copyright © 2020 PAT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n;
    scanf("%d",&n);
    int d =97;
    for (int i= 0; i< n; i++){
        if (i % 2 == 0){
            for (int j = 0; j < i+1; j++){
                printf("%c ",d++);
            }
        } else {
            int temp = d+i;
            d += i;
            for (int j = 0; j< i+1; j++){
                printf("%c ",d--);
            }
            d = temp+1;
        }
        printf("\n");
    }
    return 0;
}
