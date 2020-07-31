//Tìm từ in hoa xuất hiện trong chuỗi. Kết quả in ra từ theo thứ tự xuất hiện của chúng trong chuỗi.
//INPUT
//mon THCS2 la mon DE
//OUTPUT
//THCS2 DE
//  main.c
//  Liệt kê các từ in hoa trong chuỗi
//
//  Created by PAT on 6/13/20.
//  Copyright © 2020 PAT. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int main() {
    char chuoi[200];
    fgets(chuoi,sizeof(chuoi),stdin);
    int i =0;
    char *chu;
    const char* sep = " \n\t,.;:";
    for (word = strtok(chuoi,sep);chu != NULL;chu = strtok(NULL, sep)){
        int n = strlen(chu);
        int kt;
        for (int i= 0; i < n; i++){
            if ( (chu[i] >= 'A' && chu[i] <= 'Z')  || (chu[i] >= '0' && chu[i] <= '9') ) {
                kt = 1;
            }
            else kt = 0;
        }
        if (kt == 1) printf("%s ",chu);
    }
    
    return 0;
}
