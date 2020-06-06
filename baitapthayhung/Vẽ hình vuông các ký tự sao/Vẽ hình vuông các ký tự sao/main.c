//
//  main.c
//  Vẽ hình vuông các ký tự sao
//
//  Created by PAT on 6/5/20.
//  Copyright © 2020 PAT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n;
    scanf("%d",&n);
    for (int i = 0; i< n; i++){
        for (int j = 0; j< n; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
