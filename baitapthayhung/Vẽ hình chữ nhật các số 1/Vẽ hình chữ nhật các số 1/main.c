//
//  main.c
//  Vẽ hình chữ nhật các số 1
//
//  Created by PAT on 5/2/20.
//  Copyright © 2020 PAT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int hang,cot;
    scanf("%d %d",&hang,&cot);
    for (int i = 1 ;i<= hang; i++){
        for (int j = 1 ;j<= cot; j++){
            printf("1");
        }
        printf("\n");
    }
    return 0;
}
