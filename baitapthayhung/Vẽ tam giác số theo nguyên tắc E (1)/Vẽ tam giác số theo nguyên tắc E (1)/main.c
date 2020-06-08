//
//  main.c
//  Vẽ tam giác số theo nguyên tắc E (1)
//
//  Created by PAT on 6/7/20.
//  Copyright © 2020 PAT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n;
    scanf("%d",&n);
    int d = 1;
    for (int i =0; i< n; i++){
        int t =d;
        for (int j = 0; j< i+1; j++){
            printf("%d",t++);
        }
        d++;
        printf("\n");
    }
    return 0;
}
