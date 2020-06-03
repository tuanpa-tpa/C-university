//
//  main.c
//  Loại bỏ các từ trùng trong một chuỗi
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
};

void dem(char *word, struct list *words,int *size){
    int check =0;
    for (int i = 0; i< *size ; i++){
        if (strcmp(word, words[i].name) == 0){
            check = 1;
            break;
        }
    }
    if (check == 0){
        strcpy(words[*size].name,word);
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
        printf("%s ",words[i].name);
    }
    return 0;
}
