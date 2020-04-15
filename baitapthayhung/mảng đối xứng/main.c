//
//  main.c
//  doixung
//
//  Created by PAT on 2/13/20.
//  Copyright © 2020 tuan. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int array[100],n,t;
    t = 1;
    scanf("%d",&n);
    for (int i = 0;i < n ;i++)
        scanf("%d",&array[i]);
    int i = 0, j = n-1;
    while (i < j) {
        if (array[i] != array[j] )
        {
            t = 0;
            break;
        };
        i++;j--;
    };
    printf("%d",t);
    return 0;
}
