//
//  main.c
//  Tìm mảng đảo ngược của một mảng
//
//  Created by PAT on 5/6/20.
//  Copyright © 2020 PAT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n,mang[200];
    scanf("%d",&n);
    for (int i = 1; i<= n ;i++ )
        scanf("%d",&mang[i]);
    for (int i = n; i >= 1 ;i-- )
        printf("%d ",mang[i]);
    return 0;
}
