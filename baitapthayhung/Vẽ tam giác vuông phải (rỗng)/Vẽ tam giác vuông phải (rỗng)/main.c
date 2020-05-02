//Viết chương trình C cho phép nhập vào chiêu cao của tam giác và thực hiện in ra tam giác vuông.
//INPUT
//5
//OUTPUT
//~~~~*
//~~~**
//~~*.*
//~*..*
//*****
//  main.c
//  Vẽ tam giác vuông phải (rỗng)
//
//  Created by PAT on 5/2/20.
//  Copyright © 2020 PAT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n;
    scanf("%d",&n);
    for (int i = 1; i<= n-1; i++){
        for (int j = 1; j<= n-i; j++){
            printf("~");
        }
        for (int j = 1; j<= i; j++){
            if ((i == j) || (1 == j)) printf("*");
            else printf(".");
        }
        printf("\n");
    }
        
    for (int i = 1; i<= n; i++) printf("*");
    return 0;
}
