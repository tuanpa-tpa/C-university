//Cho hai chuỗi ký tự S1 và S2. Hãy viết chương trình tìm các từ chỉ xuất hiện trong S1 mà không xuất hiện trong S2. Chú ý: mỗi từ chỉ liệt kê 1 lần và sắp xếp theo thứ tự xuất hiện trong từ điển
//INPUT
//abc ab ab ab abcd
//ab abc
//OUTPUT
//abcd
//  main.c
//  Tìm tập từ riêng của hai chuỗi
//
//  Created by PAT on 6/5/20.
//  Copyright © 2020 PAT. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <ctype.h>
struct list {
    char name[100];
    int check;
};

void tach(char *word1,struct list *words,int *size){
    char *check ;
    const char *sep = " \n\t,.;:";
    for (check = strtok(word1, sep);check != NULL;check = strtok(NULL, sep)){
        int test = 0;
        for (int i = 0; i< *size; i++)
        if (strcmp(check, words[i].name) == 0){
            test = 1;
        }
        if (test == 0)
        {
            strcpy(words[*size].name, check);
            words[*size].check = 0;
            (*size) ++;
        }
    }
}

int main(int argc, const char * argv[]) {
    char string1[1000],string2[1000];
    fgets(string1,sizeof(string1),stdin);
    fgets(string2,sizeof(string2),stdin);
    struct list words1[200],words2[200];
    int size1 = 0;
    tach(string1, words1, &size1);
    char *check;
    const char *sep = " \n\t.,;:";
    for (check = strtok(string2, sep);check != NULL; check = strtok(NULL, sep)){
        for (int i = 0; i< size1; i++){
            if (strcmp(check,words1[i].name) == 0)
                words1[i].check++;
        }
    }
    int size2 = 0;
    for (int i = 0; i< size1; i++){
        if (words1[i].check == 0){
            strcpy(words2[size2].name,words1[i].name);
            size2 ++;
        }
    }
    char t[100];
    for (int i = 0; i< size2; i++){
        for (int j = 0; j< size2; j++){
            if (strcmp(words2[i].name, words2[j].name) < 0){
                strcpy(t, words2[i].name);
                strcpy(words2[i].name,words2[j].name);
                strcpy(words2[j].name,t);
            }
        }
    }
    for (int i = 0; i< size2; i++){
        printf("%s ",words2[i].name);
    }
    return 0;
}
