//Viết chương trình C nhập vào số cột của một nửa hình thoi bên phải và in ra hình tương ứng.
//INPUT
//5
//OUTPUT
//*
//**
//***
//****
//*****
//****
//***
//**
//*
//  main.c
//  Vẽ một nửa hình thoi bên phải
//
//  Created by PAT on 6/7/20.
//  Copyright © 2020 PAT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n;
    scanf("%d",&n);
    for (int i = 0; i< n; i++){
        for (int j = 0; j< i+1; j++){
            printf("*");
        }
        printf("\n");
    }
    for (int i = n-2; i>= 0; i--){
        for (int j = 0; j< i+1; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
