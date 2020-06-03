//Một từ trong xâu ký tự được định nghĩa là một dãy ký tự liên tiếp không có khoảng trống. Hãy đếm số từ của
//xâu và in kết quả ra màn hình
//INPUT
//mon thcs    2 nam 2017
//OUTPUT
//5
//  main.c
//  Đếm số từ trong xâu
//
//  Created by PAT on 5/31/20.
//  Copyright © 2020 PAT. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#define max 200

int main(int argc, const char * argv[]) {
    char string[max];
    const char sep[2] = " ";
    int d = 0;
    gets(string);
    char* stock = strtok(string, sep);
    while (NULL != stock) {
        d++;
        stock = strtok(NULL, sep);
    }
    printf("%d",d);
    return 0;
}

