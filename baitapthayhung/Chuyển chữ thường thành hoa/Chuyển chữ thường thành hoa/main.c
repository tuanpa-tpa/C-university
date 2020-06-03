//Viết chương trình C cho phép nhập vào một chuỗi và chuyển chuỗi đã nhập thành chữ in hoa.
//INPUT
//mon thcs 2
//OUTPUT
//MON THCS 2
//  main.c
//  Chuyển thành chữ hoa
//
//  Created by PAT on 5/28/20.
//  Copyright © 2020 PAT. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, const char * argv[]) {
    char string[200];
    fgets(string,sizeof(string),stdin);
    char c; int i = 0;
    while (string[i]){
        c = toupper(string[i]);
        putchar(c);
        i++;
    }
    return 0;
}
