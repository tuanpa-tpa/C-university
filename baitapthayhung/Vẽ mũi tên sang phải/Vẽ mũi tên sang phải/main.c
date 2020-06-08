//Viết chương trình C nhập vào n và vẽ hình mũi tên sang phải tương ứng.
//INPUT
//5
//OUTPUT
//*****
//~~****
//~~~~***
//~~~~~~**
//~~~~~~~~*
//~~~~~~**
//~~~~***
//~~****
//*****
//  main.c
//  Vẽ mũi tên sang phải
//
//  Created by PAT on 6/7/20.
//  Copyright © 2020 PAT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n;
    scanf("%d",&n);
    for (int i = 0; i< n; i++){
        for (int j = 0; j< i*2; j++){
            printf("~");
        }
        for (int j = 0; j< n-i; j++){
            printf("*");
        }
        printf("\n");
    }
    for (int i = n-2; i>=0; i--){
        for (int j = 0; j< i*2; j++){
            printf("~");
        }
        for (int j = 0; j< n-i; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
