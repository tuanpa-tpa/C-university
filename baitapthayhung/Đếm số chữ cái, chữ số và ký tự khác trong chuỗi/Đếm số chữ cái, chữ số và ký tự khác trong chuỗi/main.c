//Viết chương trình C cho phép nhập vào một chuỗi, thực hiện phân tích chuỗi đã nhập chứa bao nhiêu chữ cái, chữ số và các ký tự khác.
//INPUT
//mon THCS 2 ...
//OUTPUT
//7 1 6
//  main.c
//  Đếm số chữ cái, chữ số và ký tự khác trong một chuỗi
//
//  Created by PAT on 5/28/20.
//  Copyright © 2020 PAT. All rights reserved.
//

#include <stdio.h>
#include <string.h>
int main(int argc, const char * argv[]) {
    char string[200];
    fgets(string,sizeof(string),stdin);
    int chu = 0 ,so = 0, khac = 0;
    for (int i = 0; i< strlen(string); i++){
        if ((string[i] >= 'a' && string[i] <= 'z') ||(string[i] >= 'A' && string[i] <= 'Z')) chu++;
        else
            if ((string[i] >= '0' && string[i] <= '9')) so++;
            else khac++;
    }
    printf("%d %d %d",chu,so,--khac);
    return 0;
}

