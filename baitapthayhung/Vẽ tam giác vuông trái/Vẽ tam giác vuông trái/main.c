////
//Viết chương trình C cho phép nhập vào chiều cao của tam giác và In ra tam giác hình sao tương ứng.
//INPUT
//5
//OUTPUT
//*
//**
//***
//****
//*****
//  main.c
//  Vẽ tam giác vuông trái
//
//  Created by PAT on 5/2/20.
//  Copyright © 2020 PAT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n;
    scanf("%d",&n);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j<= i; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
