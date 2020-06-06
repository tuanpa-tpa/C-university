//
//  main.c
//  vẽ hình chữ nhật các cột với chữ số tăng dần
//
//  Created by PAT on 6/5/20.
//  Copyright © 2020 PAT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int hang,cot;
    scanf("%d %d",&hang,&cot);
    for (int i = 0; i<hang; i++){
        for (int j = 1; j<= cot; j++){
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}
