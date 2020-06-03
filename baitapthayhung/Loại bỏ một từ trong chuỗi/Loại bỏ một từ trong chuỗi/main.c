//Viết chương trình C cho phép nhập vào một chuỗi và từ cần loại bỏ khỏi chuỗi. Thực hiện loại bỏ từ và in ra kết quả
//Trong đó:
//INPUT
//- Hàng thứ nhất là chuỗi ban đầu
//- Hàng tiếp theo là từ cần loại bỏ
//OUTPUT
//- Chuỗi kết quả
//INPUT
//mon thcs2 la mon 2tc
//mon
//OUTPUT
//thcs2 la 2tc
//  main.c
//  Loại bỏ một từ trong chuỗi
//
//  Created by PAT on 5/29/20.
//  Copyright © 2020 PAT. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#define max 200
int main(int argc, const char * argv[]) {
    char string1[max],string2[max];
    char s = ' ';
    gets(string1);
    gets(string2);
    unsigned int long len1 =strlen(string1);
    unsigned int long len2 =strlen(string2);
    for (int i = 0; i< len1; i++){
        if ((string1[i] == string2[0]) && (string1[i+len2-1] == string2[len2-1])){
            for (int j = i; j < len1; j++){
                string1[j] = string1[j+len2];
            }
        }
    }
    len1 = strlen(string1);
    string1[len1+1] = '\0';
    char *string = strtok(string1,&s);
    while(NULL != string){
        printf("%s ",string);
        string = strtok(NULL,&s);
    }
    return 0;
}

