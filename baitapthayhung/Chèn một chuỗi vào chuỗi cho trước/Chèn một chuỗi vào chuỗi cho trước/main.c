//Viết chương trình C cho phép nhập vào hai chuỗi a và b. Thực hiện chèn chuỗi b vào chuỗi a tại vị trí p.
//Trong đó
//INPUT
//- Hàng thứ nhất là chuỗi a
//- Hàng thứ hai là chuỗi b
//- Hàng cuối cùng là vị trí p cần chèn chuỗi b vào chuỗi a
//OUTPUT
//- Chuỗi kết quả chèn b vào a tại vị trí p
//
//INPUT
//mon thcs2 hoc de
//ngon ngu C.
//1
//OUTPUT
//ngon ngu C.mon thcs2 hoc de
//  main.c
//  Chèn một chuỗi vào chuỗi cho trước
//
//  Created by PAT on 5/28/20.
//  Copyright © 2020 PAT. All rights reserved.
//

#include <stdio.h>
#include "string.h"
int main(int argc, const char * argv[]) {
    char string1[200],string2[200];
    fgets(string1, sizeof(string1), stdin);
    fgets(string2, sizeof(string2), stdin);
    int p;
    scanf("%d",&p);

    for (int i = 0; i< (strlen(string1)); i++){
        if (i == p-1){
            for (int j = 0; j < strlen(string2)-1; j++){
                printf("%c",string2[j]);
            }
        } else if (i < p-1){
            printf("%c",string1[i]);
        } else {
            for (int j = p-1; j<strlen(string1); j++){
                printf("%c",string1[j]);
                i++;
            }
        }
    }
    return 0;
}

