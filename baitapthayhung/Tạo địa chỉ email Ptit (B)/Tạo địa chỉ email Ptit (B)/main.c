//Địa chỉ email của cán bộ PTIT được cấp theo nguyên tắc ghép tên với chữ cái đầu tiên của họ và tên đệm. Viết chương trình cho phép tạo các địa chỉ email theo tên cán bộ(có thể không chuẩn)
//INPUT
//ngUYEN     van nam
//OUTPUT
//nvnam@ptit.edu.vn
//  main.c
//  Tạo địa chỉ email PTIT (B)
//
//  Created by PAT on 5/31/20.
//  Copyright © 2020 PAT. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, const char * argv[]) {
    char string[200],out[200],s[200];
    const char sep[2] = " ";
    gets(string);
    for (int i = 0; i <strlen(string); i++)
        string[i] = tolower(string[i]);
    int j =0;
    for (int i = 0; i < strlen(string); i++){
        s[i] = string[i];
    }
    int d =0;
    char* check = strtok(string,sep);
    while (check != NULL) {
        out[d] = *check;
        d++;
        check = strtok(NULL,sep);
    }
    
    for (int i = 0; i < d-1; i++){
        printf("%c",out[i]);
    }
    
    
    int t = strlen(s)-1;
    while (s[t] == ' '){
        t -= 1;
    }
    for (int i = t; i >= 0; i--){
        if (isspace(s[i])) {
            j = i+1;
            break;
        }
    }
    for (int i = j; i <= t; i++){
        printf("%c",s[i]);
    }
    printf("@ptit.edu.vn");
    return 0;
}

