//
//  main.c
//  Đếm số lần xuất hiện các từ trong chuỗi
//
//  Created by PAT on 6/3/20.
//  Copyright © 2020 PAT. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define max 1000

struct list {
    char name[50];
    int index;
};

void dem(char *word, struct list *words,int *size){
    int check =0;
    for (int i = 0; i< *size ; i++){
        if (strcmp(word, words[i].name) == 0){
            check = 1;
            words[i].index ++;
            break;
        }
    }
    if (check == 0){
        strcpy(words[*size].name,word);
        words[*size].index = 1;
        (*size)++;
    }
    
}

int main(int argc, const char * argv[]) {
    char string[max];
    fgets(string,sizeof(string),stdin);
    int i =0;
    while (string[i]) {
        string[i] = tolower(string[i]);
        i++;
    }
    struct list words[100];
    char *word;
    int size = 0;
    const char* sep = " \n\t,.;:";
    for (word = strtok(string,sep);word != NULL;word = strtok(NULL, sep)){
        dem(word,words,&size);
    }
    for (int i = 0; i< size; i++){
        printf("%s %d\n",words[i].name,words[i].index);
    }
    return 0;
}
