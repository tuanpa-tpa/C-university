//Viết chương trình C cho phép nhập vào số dòng và in ra tam giác cân ngược tương ứng.
//INTPUT
//5
//OUTPUT
//*********
//~*******
//~~*****
//~~~***
//~~~~*
//  main.c
//  Vẽ tam giác cân (kim tự tháp) ngược
//
//  Created by PAT on 5/2/20.
//  Copyright © 2020 PAT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n,k=0;
    scanf("%d",&n);
    for (int i = 1; i<= n; i++){
        for (int j = 1; j<= i-1; j++){
            printf("~");
        }
        for (int j = 1; j<= n*2-i-k; j++){
            printf("*");
        }
        k++;
        printf("\n");
    }
    return 0;
}
