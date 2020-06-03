//Viết chương trình cho phép nhập vào chuỗi và tìm từ dài nhất và ngắn nhất xuất hiện trong chuỗi đó (Nếu có nhiều hơn 1 từ thỏa mãn thì in ra từ xuất hiện trước trong chuỗi)
//INPUT
//mon thcs2 khoai hon thcs1
//OUPUT
//thcs2 mon
//  main.c
//  Tìm từ dài nhất và ngắn nhất trong chuỗi
//
//  Created by PAT on 5/31/20.
//  Copyright © 2020 PAT. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#define pt 200
int main(int argc, const char * argv[]) {
    char string[pt],min[pt],max[pt];
    const char s[2] = " ";
    int minL=100,maxL=0;
    gets(string);
    char* stock = strtok(string, s);
    while (NULL != stock) {
        if (strlen(stock) > maxL) {
            maxL = strlen(stock);
//            max[pt] = 0;
                
            strcpy(max, stock);
        }
        if (strlen(stock) < minL) {
            minL = strlen(stock);
//            min[pt] = 0;
            strcpy(min, stock);
        }
        stock = strtok(NULL, s);
    }
    printf("%s %s",max,min);
    return 0;
}

