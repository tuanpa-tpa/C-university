//
//  main.c
//  Vẽ hình chữ nhật các số 1 với dấu cộng số 0 ở giữa
//
//  Created by PAT on 6/7/20.
//  Copyright © 2020 PAT. All rights reserved.
//

#include <stdio.h>

int main()
{
    int hang, cot, i, j;
    int centerRow, centerCol;
    scanf("%d", &hang);
    scanf("%d", &cot);

    centerRow = (hang+1) / 2;
    centerCol = (cot+1) / 2;

    for(i=1; i<=hang; i++)
    {
        for(j=1; j<=cot; j++){
            if(centerCol == j || centerRow == i){
                printf("0");
            } else if((cot%2 == 0 && centerCol+1 == j) || (hang%2 == 0 && centerRow+1 == i)){
                printf("0");
            } else {
                printf("1");
            }
        }
        printf("\n");
    }

    return 0;
}
