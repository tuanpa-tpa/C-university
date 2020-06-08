//
//  main.c
//  Tìm giá trị nhỏ nhất trong ba số
//
//  Created by PAT on 6/7/20.
//  Copyright © 2020 PAT. All rights reserved.
//
#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int min = a;
    if ( b < min){
        min = b;
    } else if (c < min){
        min = c;
    }
    printf("%d",min);
    return 0;
}
