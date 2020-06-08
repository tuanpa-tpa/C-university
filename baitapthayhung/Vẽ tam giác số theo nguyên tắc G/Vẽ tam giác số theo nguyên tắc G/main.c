//Viết chương trình C cho phép nhập vào chiều cao (số hàng) của tam giác và thực hiện in ra tam giác số theo nguyên tắc tương ứng.
//INPUT
//5
//OUTPUT
//1
//24
//135
//2468
//13579
//  main.c
//  Vẽ tam giác số theo nguyên tắc G
//
//  Created by PAT on 6/6/20.
//  Copyright © 2020 PAT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n;
    scanf("%d",&n);
    for (int  i = 0; i< n; i++){
        if (i % 2 == 0){
            int d =1;
            for (int j = 0; j < i+1; j++ ){
                printf("%d",d);
                d+=2;
            }
        } else {
            int d = 2;
            for (int j = 0; j < i+1; j++ ){
                printf("%d",d);
                d+=2;
            }
        }
        printf("\n");
    }
    return 0;
}
